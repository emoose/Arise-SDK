# Arise-SDK

An XInput/DXGI wrapper DLL for poking around at Tales of Arise internals.

SDK generated with the ever useful [Unreal Finder Tool](https://github.com/CorrM/Unreal-Finder-Tool)

Though I'm not sure how complete the SDK generated by UFT is (sadly development on it ended a while ago), hopefully it's generated enough to be useful.

# Features
See https://www.nexusmods.com/talesofarise/mods/5 for the current feature list!

# TODO
- Improve skit cutscene scaling even more - current method with `sdk.CutsceneScreenPercentage` works differently to UE4's `r.ScreenPercentage` - might be better if this could override `r.ScreenPercentage` during cutscenes instead. (ditto with battles too)
- Landscape/grass LODs, the UE4 cvars don't help that much, probably something in the Landscape system that needs to be changed (some UE4 tutorials for handling things like fading different quality textures in/out seem to rely on blueprints for it, possible they used blueprints for that here too, not sure if those can be edited that easily though)
- Character self-shadows - I think hair uses a seperate shader to other self-shadows, doesn't seem there's any settings for improving this, might need to find the shader responsible somehow...
- TAA improvements - still a lot of aliasing even with TAA&SMAA enabled, not sure if this can be improved at all... there are still some parts of the game code that only check for `AAM_TemporalAA`, and don't have checks for the custom `AAM_HybirdAA`(sic) used by the game, maybe fixing those could give some improvements.

# UnrealFinderTool changes
Two small changes were needed for UFT to work properly with Arise:
- ObjectsStore.cpp line 85, change to `GInfo.IsPointerNextToPointer = false;` - fixes objects not being read in correctly
- NamesStore.cpp line 30, change to `for (int i = 0; i < 60; ++i)` - allows all UE FNames to be read in (previously would only read 30 chunks worth, resulting in SDK missing a ton of fields/properties)
