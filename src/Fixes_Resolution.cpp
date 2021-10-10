#include "pch.h"

AutoGameAddress Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Hook( // patch0: 0x142699D98
  "UKismetRenderingLibrary::execCreateRenderTarget2D_Hook",
  { 0xFF, 0x92, 0x48, 0x02, 0x00, 0x00, 0xB2, 0x01 },
  +0
);
AutoGameAddress Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Trampoline( // patch0: 0x142699E12
  "UKismetRenderingLibrary::execCreateRenderTarget2D_Trampoline",
  { 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC },
  0,
  AutoGameAddressType::Pointer,
  & Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Hook // searches for 12 0xCC bytes after wherever we found ::execCreateRenderTarget2D_Hook
);
AutoGameAddress Addr_USceneCaptureComponent2D__USceneCaptureComponent2D_Patch( // patch0: 0x14279200F
  "USceneCaptureComponent2D::USceneCaptureComponent2D_Patch",
  { 0x81, 0xA3, 0xB8, 0x02, 0x00, 0x00, 0xF7, 0xDF, 0xFF, 0xFF, 0x0F },
  +0
);
AutoGameAddress Addr_UGameUserSettings__PreloadResolutionSettings_CallerPatch( // patch0: 0x1405CB303
  "UGameUserSettings::PreloadResolutionSettings_CallerPatch",
  { 0xE8, 0x00, 0x00, 0x00, 0x00, 0x40, 0x38, 0x35, 0x00, 0x00, 0x00, 0x00, 0x75, 0x05, 0xE8, 0x00, 0x00, 0x00, 0x00 },
  +0xC
);
AutoGameAddress Addr_SetRes_720p_CallerPatch( // patch0: 0x141200730
  "SetRes_720p_CallerPatch",
  { 0x25, 0x00, 0x00, 0x00, 0xFF, 0x48, 0x8B, 0xCB, 0x44, 0x8B, 0xC0, 0x41, 0xFF, 0x51, 0x60, 0x48, 0x83, 0x7C, 0x24 },
  +0xB
);
AutoGameAddress Addr_FDefaultDynamicResolutionState__IsSupported_NearBeginning( // patch0: 0x141FF83DB
  "FDefaultDynamicResolutionState::IsSupported_NearBeginning",
  { 0x48, 0x8B, 0x88, 0x68, 0x0C, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x74, 0x10, 0x48, 0x8B, 0x01 },
  +0
);
AutoGameAddress Addr_GRHISupportsDynamicResolution( // patch0: 0x141FF83FA
  "GRHISupportsDynamicResolution",
  { 0x0F, 0xB6, 0x05, 0x00, 0x00, 0x00, 0x00 },
  +0x3,
  AutoGameAddressType::Offset4,
  & Addr_FDefaultDynamicResolutionState__IsSupported_NearBeginning
);

AutoGameAddress Addr_GSystemResolution(
  "GSystemResolution",
  { 0x83, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x02, 0x75, 0x00, 0x8B, 0x15, 0x00, 0x00, 0x00, 0x00, 0x44, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00 },
  +0xB,
  AutoGameAddressType::Offset4
);
FSystemResolution* GSystemResolution = nullptr;

// Called during UKismetRenderingLibrary::execCreateRenderTarget2D, so we can overwrite the target size etc.
void CreateRenderTarget2D_Hook(UTextureRenderTarget2D* thisptr)
{
  if (Options.CutsceneRenderFix)
  {
    if (!GSystemResolution)
      GSystemResolution = Addr_GSystemResolution.Get<FSystemResolution>();

    double ScreenSizeX = 1920;
    double ScreenSizeY = 1080;

    if (GSystemResolution)
    {
      ScreenSizeX = GSystemResolution->ResX;
      ScreenSizeY = GSystemResolution->ResY;
    }

    // Apply Options.CutsceneScreenPercentage to the screen size
    {
      // Apply screen-percentage to the RT, because UE4 disables percentage being applied to them...
      double ScreenPercentageMult = Options.CutsceneScreenPercentage;
      ScreenPercentageMult = max(ScreenPercentageMult, 1) / double(100.f);
      ScreenPercentageMult = min(ScreenPercentageMult, 4); // 400% seems to be max allowed by UE4, so we'll limit to that too

      ScreenSizeX *= ScreenPercentageMult;
      ScreenSizeY *= ScreenPercentageMult;
    }

    double ScreenArea = ScreenSizeX * ScreenSizeY;

    double CurSizeX = double(thisptr->SizeX);
    double CurSizeY = double(thisptr->SizeY);
    double CurArea = CurSizeX * CurSizeY;

    // Only resize RT if it's using less pixels than our screen
    if (ScreenArea > CurArea)
    {
      // Figure out a width/height with the same ratio as the original RT resolution & near enough the same area as our screen resolution
      // (in effect, this will make the panels super-sampled in a way, since they'll be rendering with the same number of pixels as the full screen, but only get displayed in a small box)
      // (since only 1 or 2 boxes are actually rendering at once this shouldn't give a big performance impact though)

      double CurRatio = CurSizeX / CurSizeY;

      double NewWidth = sqrt(CurRatio * ScreenArea);
      double NewHeight = NewWidth / CurRatio;

      thisptr->SizeX = int(ceil(NewWidth));
      thisptr->SizeY = int(ceil(NewHeight));

      // Ensure that the size is divisable by 4, else UE4 will create an FViewInfo with a slightly different size
      // Causing the Upscale filter to be applied to the RT
      {
        // Mostly the same as QuantizeSceneBufferSize, as used by FSceneRenderer::PrepareViewRectsForRendering()

        const uint32_t DividableBy = 4;
        const uint32_t Mask = ~(DividableBy - 1);
        thisptr->SizeX = (thisptr->SizeX + DividableBy - 1) & Mask;
        thisptr->SizeY = (thisptr->SizeY + DividableBy - 1) & Mask;
      }

      if (Options.CutsceneForceUpscaleFiltering)
      {
        // Hack to force the view to have Upscale pass applied
        thisptr->SizeX++;
      }
    }
  }

  uint8_t* vftable = *(uint8_t**)thisptr;

  typedef void(*UTexture__UpdateResource_Fn)(UTexture* thisptr);
  UTexture__UpdateResource_Fn UTexture__UpdateResource = (UTexture__UpdateResource_Fn)(*(uintptr_t*)(vftable + 0x248));

  UTexture__UpdateResource(thisptr);
}

void Fixes_Resolution_Init()
{
  // Render target resizing (fixing cutscene/skit resolution)
  if (Options.CutsceneRenderFix)
  {
    uint8_t* trampolineAddr = Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Trampoline.Get();
    uint8_t* hookAddr = Addr_UKismetRenderingLibrary__execCreateRenderTarget2D_Hook.Get();

    // Have to write a trampoline somewhere near the hooked addr, needs 12 bytes...
    uint8_t trampoline[] = { 0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xE0 };
    *(uintptr_t*)&trampoline[2] = (uintptr_t)&CreateRenderTarget2D_Hook;

    SafeWrite(trampolineAddr, trampoline, 12);

    // Hook UKismetRenderingLibrary::execCreateRenderTarget2D
    SafeWrite(hookAddr, uint8_t(0x90));
    PatchCall(hookAddr + 1, trampolineAddr);

    // USceneCaptureComponent2D ctor: change "ShowFlags.TemporalAA = false; ShowFlags.MotionBlur = false;" to " = true" 
    // Not certain if ToA's custom TAA impl. works on this or not though (may need more AAM_TemporalAA checks to be fixed...)
    uint8_t* patchAddr = Addr_USceneCaptureComponent2D__USceneCaptureComponent2D_Patch.Get();
    // Change "and dword ptr [rbx+2B8h], 0FFFFDFF7h" to "or dword ptr [rbx+2B8h], 2008h", so it sets the bits instead of removing them
    uint8_t Patch_USceneCaptureComponent2D_ctor[] = { 0x81, 0x8B, 0xB8, 0x02, 0x00, 0x00, 0x08, 0x20, 0x00, 0x00 };
    SafeWrite(patchAddr, Patch_USceneCaptureComponent2D_ctor, 0xA);
  }

  // Prevent resolution change on game launch
  // (requires r.SetRes = 2560x1440f line inside Engine.ini to work properly, change with your desired resolution)
  // TODO: find a way so setres isn't required
  if (Options.EnableResolutionFix)
  {
    // Disable UGameUserSettings::PreloadResolutionSettings
    // (seems to read from an unused settings file, making game switch to 1280x720 briefly)
    SafeWrite(Addr_UGameUserSettings__PreloadResolutionSettings_CallerPatch.Get(), uint8_t(0xEB));

    // Disable r.setres being changed by game code to 1280x720
    auto addr = Addr_SetRes_720p_CallerPatch.Get();
    SafeWrite(addr, uint8_t(0x90), 4);
  }

  // Flip GRHISupportsDynamicResolution to true, so r.DynamicRes.* can work
  SafeWrite(Addr_GRHISupportsDynamicResolution.Get(), uint8_t(1));

#if 0
  // Set GSupportsTimestampRenderQueries to true
  // TODO: need to check if the addr is even correct for this (and then signature-ize it)
  const uint32_t Addr_GSupportsTimestampRenderQueries = 0x4BC99C9;
  SafeWriteModule(Addr_GSupportsTimestampRenderQueries, uint8_t(1));
#endif
}
