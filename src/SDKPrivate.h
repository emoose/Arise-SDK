#pragma once
// Private UE structs not exposed through SDK dump

struct FSystemResolution
{
  int ResX;
  int ResY;
  int WindowMode;
  bool bForceRefresh;
};

struct __declspec(align(8)) FOutputDevice
{
  void* __vftable; /*VFT*/
  bool bSuppressEventTag;
  bool bAutoEmitLineTerminator;
};

struct __declspec(align(8)) FFrame : public FOutputDevice
{
  UFunction* Node;
  UObject* Object;
  unsigned __int8* Code;
  unsigned __int8* Locals;
  UProperty* MostRecentProperty;
  unsigned __int8* MostRecentPropertyAddress;
  TArray<unsigned int> FlowStack;
  FFrame* PreviousFrame;
  void* OutParms; /* FOutParmRec* */
  UField* PropertyChainForCompiledIn;
  UFunction* CurrentNativeFunction;
  bool bArrayContextFailed;
};

struct __declspec(align(4)) FMarkRelevantStaticMeshesForViewData
{
  FVector ViewOrigin;
  int ForcedLODLevel;
  float LODScale;
  float InvLODScale;
  float MinScreenRadiusForCSMDepthSquared;
  float MinScreenRadiusForDepthPrepassSquared;
  bool bFullEarlyZPass;
};
