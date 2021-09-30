
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function MathLib.MathLib_C.IsDistanceWithin
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RangePermissible               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_IsDistanceWithin(float Distance, float Range, float RangePermissible, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.IsDistanceWithin");

	UMathLib_C_IsDistanceWithin_Params params;
	params.Distance = Distance;
	params.Range = Range;
	params.RangePermissible = RangePermissible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MathLib.MathLib_C.GetVectorOf2ActorIgnoreZ
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SrcActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DstActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void UMathLib_C::STATIC_GetVectorOf2ActorIgnoreZ(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetVectorOf2ActorIgnoreZ");

	UMathLib_C_GetVectorOf2ActorIgnoreZ_Params params;
	params.SrcActor = SrcActor;
	params.DstActor = DstActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function MathLib.MathLib_C.GetDistanceOf2ActorIgnoreZ
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SrcActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DstActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetDistanceOf2ActorIgnoreZ(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetDistanceOf2ActorIgnoreZ");

	UMathLib_C_GetDistanceOf2ActorIgnoreZ_Params params;
	params.SrcActor = SrcActor;
	params.DstActor = DstActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function MathLib.MathLib_C.GetDistanceOf2Vec
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Src                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Dst                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetDistanceOf2Vec(const struct FVector& Src, const struct FVector& Dst, class UObject* __WorldContext, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetDistanceOf2Vec");

	UMathLib_C_GetDistanceOf2Vec_Params params;
	params.Src = Src;
	params.Dst = Dst;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function MathLib.MathLib_C.GetRelativeYawLocation
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 MyLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                MyRotation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TrgLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bActorRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelativeYaw                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetRelativeYawLocation(const struct FVector& MyLocation, const struct FRotator& MyRotation, const struct FVector& TrgLocation, bool bActorRotation, class UObject* __WorldContext, float* RelativeYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetRelativeYawLocation");

	UMathLib_C_GetRelativeYawLocation_Params params;
	params.MyLocation = MyLocation;
	params.MyRotation = MyRotation;
	params.TrgLocation = TrgLocation;
	params.bActorRotation = bActorRotation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeYaw != nullptr)
		*RelativeYaw = params.RelativeYaw;
}


// Function MathLib.MathLib_C.GetDistanceSquaredOf2VecIgnoreZ
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Src                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Dst                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetDistanceSquaredOf2VecIgnoreZ(const struct FVector& Src, const struct FVector& Dst, class UObject* __WorldContext, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetDistanceSquaredOf2VecIgnoreZ");

	UMathLib_C_GetDistanceSquaredOf2VecIgnoreZ_Params params;
	params.Src = Src;
	params.Dst = Dst;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function MathLib.MathLib_C.GetDistanceSquaredOf2Actor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SrcActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DstActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetDistanceSquaredOf2Actor(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetDistanceSquaredOf2Actor");

	UMathLib_C_GetDistanceSquaredOf2Actor_Params params;
	params.SrcActor = SrcActor;
	params.DstActor = DstActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function MathLib.MathLib_C.DegreeReap180
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Degree__180~_180_              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_DegreeReap180(float Degree, class UObject* __WorldContext, float* Degree__180~_180_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.DegreeReap180");

	UMathLib_C_DegreeReap180_Params params;
	params.Degree = Degree;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Degree__180~_180_ != nullptr)
		*Degree__180~_180_ = params.Degree__180~_180_;
}


// Function MathLib.MathLib_C.InSightActor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  myActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TrgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HightLow                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HightHigh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_InSightActor(class AActor* myActor, class AActor* TrgActor, float Yaw, float HightLow, float HightHigh, bool bCheckCollision, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.InSightActor");

	UMathLib_C_InSightActor_Params params;
	params.myActor = myActor;
	params.TrgActor = TrgActor;
	params.Yaw = Yaw;
	params.HightLow = HightLow;
	params.HightHigh = HightHigh;
	params.bCheckCollision = bCheckCollision;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MathLib.MathLib_C.GetDistanceOf2VecIgnoreZ
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Src                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Dst                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetDistanceOf2VecIgnoreZ(const struct FVector& Src, const struct FVector& Dst, class UObject* __WorldContext, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetDistanceOf2VecIgnoreZ");

	UMathLib_C_GetDistanceOf2VecIgnoreZ_Params params;
	params.Src = Src;
	params.Dst = Dst;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function MathLib.MathLib_C.AddColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Result                         (Parm, OutParm, IsPlainOldData)

void UMathLib_C::STATIC_AddColor(const struct FLinearColor& A, const struct FLinearColor& B, class UObject* __WorldContext, struct FLinearColor* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.AddColor");

	UMathLib_C_AddColor_Params params;
	params.A = A;
	params.B = B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MathLib.MathLib_C.GetVectorOf2Actor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SrcActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DstActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)

void UMathLib_C::STATIC_GetVectorOf2Actor(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetVectorOf2Actor");

	UMathLib_C_GetVectorOf2Actor_Params params;
	params.SrcActor = SrcActor;
	params.DstActor = DstActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function MathLib.MathLib_C.GetRelativeYawOf2Vec
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 MyVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TrgVec                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelativeYaw                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetRelativeYawOf2Vec(const struct FVector& MyVec, const struct FVector& TrgVec, class UObject* __WorldContext, float* RelativeYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetRelativeYawOf2Vec");

	UMathLib_C_GetRelativeYawOf2Vec_Params params;
	params.MyVec = MyVec;
	params.TrgVec = TrgVec;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeYaw != nullptr)
		*RelativeYaw = params.RelativeYaw;
}


// Function MathLib.MathLib_C.GetDistanceOf2Actor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  SrcActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DstActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetDistanceOf2Actor(class AActor* SrcActor, class AActor* DstActor, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetDistanceOf2Actor");

	UMathLib_C_GetDistanceOf2Actor_Params params;
	params.SrcActor = SrcActor;
	params.DstActor = DstActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function MathLib.MathLib_C.GetRelativeYawOf2Actor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  myActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TrgActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelativeYaw                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetRelativeYawOf2Actor(class AActor* myActor, class AActor* TrgActor, class UObject* __WorldContext, float* RelativeYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetRelativeYawOf2Actor");

	UMathLib_C_GetRelativeYawOf2Actor_Params params;
	params.myActor = myActor;
	params.TrgActor = TrgActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeYaw != nullptr)
		*RelativeYaw = params.RelativeYaw;
}


// Function MathLib.MathLib_C.GetRelativeYaw
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 MyLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                MyRotation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TrgLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelativeYaw                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetRelativeYaw(const struct FVector& MyLocation, const struct FRotator& MyRotation, const struct FVector& TrgLocation, class UObject* __WorldContext, float* RelativeYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetRelativeYaw");

	UMathLib_C_GetRelativeYaw_Params params;
	params.MyLocation = MyLocation;
	params.MyRotation = MyRotation;
	params.TrgLocation = TrgLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeYaw != nullptr)
		*RelativeYaw = params.RelativeYaw;
}


// Function MathLib.MathLib_C.GetRelativeYawOf2Mesh
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          MyMesh                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMeshComponent*          TrgMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelativeYaw                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMathLib_C::STATIC_GetRelativeYawOf2Mesh(class UMeshComponent* MyMesh, class UMeshComponent* TrgMesh, class UObject* __WorldContext, float* RelativeYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MathLib.MathLib_C.GetRelativeYawOf2Mesh");

	UMathLib_C_GetRelativeYawOf2Mesh_Params params;
	params.MyMesh = MyMesh;
	params.TrgMesh = TrgMesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeYaw != nullptr)
		*RelativeYaw = params.RelativeYaw;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
