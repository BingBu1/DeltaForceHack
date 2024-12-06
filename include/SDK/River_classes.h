
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass River.River_C
// Size: 0x401 (Inherited: 0x378)
class ARiver_C : public AActor {
public:

	struct UParamSplineComponent* ParamSpline; // 0x378(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x380(0x08)
	bool ____________Width_Use_Original_Landscape____________________; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float Original_Landscape_Range; // 0x38c(0x04)
	float Soft_Range_Expand; // 0x390(0x04)
	float Soft_Smooth_Rangle; // 0x394(0x04)
	float Soft_Global_Rangle; // 0x398(0x04)
	bool ____________________Add_Foam_by_Height_____________________; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	float Min_Height; // 0x3a0(0x04)
	float Foam_Min_Curvature; // 0x3a4(0x04)
	float Foam_Range; // 0x3a8(0x04)
	float Foam_Blend_Width; // 0x3ac(0x04)
	bool __________________________Add_Noise________________________; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float River_Width_Noise_Amplitude; // 0x3b4(0x04)
	float River_Width_Noise_Frequency; // 0x3b8(0x04)
	bool __________________Add_Splash_______________________________; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	float Add_Splash_Start_Pos; // 0x3c0(0x04)
	float Add_Splash_Range; // 0x3c4(0x04)
	bool _____________Landscape_Deform_Falloff_____________________; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float Depth_Smooth_Strength; // 0x3cc(0x04)
	float Depth_Smooth_Quality; // 0x3d0(0x04)
	float Left_Range; // 0x3d4(0x04)
	float Right_Range; // 0x3d8(0x04)
	float Noise_Amplitude; // 0x3dc(0x04)
	int32_t Noise_Seed; // 0x3e0(0x04)
	bool ______________Landscape_Add_Outside_Noise_____________________; // 0x3e4(0x01)
	bool 高度匹配其他河流; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	float River_Speed; // 0x3e8(0x04)
	bool Resample_Width; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	struct FString SubMapName; // 0x3f0(0x10)
	bool 起始透明去掉; // 0x400(0x01)

	void UserConstructionScript(); // Function River.River_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x53c0000035
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
