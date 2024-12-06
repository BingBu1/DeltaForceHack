
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Guide_Tips_PC.WBP_Guide_Tips_PC_C
// Size: 0x5f8 (Inherited: 0x550)
class UWBP_Guide_Tips_PC_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anima_out; // 0x558(0x08)
	struct UWidgetAnimation* Anima_loop_dianji; // 0x560(0x08)
	struct UWidgetAnimation* Anima_in; // 0x568(0x08)
	struct UWidgetAnimation* Anima_FlickThreeTime; // 0x570(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x578(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_163; // 0x580(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x588(0x08)
	struct UDFMImage* Image_DE_1; // 0x590(0x08)
	struct UDFMImage* Image_DE_2; // 0x598(0x08)
	struct UDFMImage* Image_DE_4; // 0x5a0(0x08)
	struct UDFMImage* Image_DE_5; // 0x5a8(0x08)
	struct UImage* Image_kuangfx; // 0x5b0(0x08)
	int32_t Type; // 0x5b8(0x04)
	float Multiple_X; // 0x5bc(0x04)
	float Multiple_Y; // 0x5c0(0x04)
	float SizeX; // 0x5c4(0x04)
	float SizeY; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char Image_DE_Array[0x10]; // 0x5d0(0x10)
	bool TextIsVis; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	struct TArray<float> ArrOpacity; // 0x5e8(0x10)

	void SetOpacity(int32_t Opacity); // Function WBP_Guide_Tips_PC.WBP_Guide_Tips_PC_C.SetOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
