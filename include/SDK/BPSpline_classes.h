
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BPSpline.BPSplineCatenaryFunctions
// Size: 0x30 (Inherited: 0x30)
class UBPSplineCatenaryFunctions : public UBlueprintFunctionLibrary {
public:


	struct TArray<struct FVector> STATIC_CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints); // Function BPSpline.BPSplineCatenaryFunctions.CreateCatenaryPoints // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BPSpline.BPSplineBlueprintFunctionHelper
// Size: 0x30 (Inherited: 0x30)
class UBPSplineBlueprintFunctionHelper : public UBlueprintFunctionLibrary {
public:


	void STATIC_SnapToGround(struct USplineComponent* SplineComp, bool bInAlign); // Function BPSpline.BPSplineBlueprintFunctionHelper.SnapToGround // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
