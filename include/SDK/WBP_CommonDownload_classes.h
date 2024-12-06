
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonDownload.WBP_CommonDownload_C
// Size: 0x58d (Inherited: 0x550)
class UWBP_CommonDownload_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_ICON1; // 0x558(0x08)
	struct UDFImage* DFImage_ICON2; // 0x560(0x08)
	struct UDFImage* DFImage_Progress; // 0x568(0x08)
	struct UDFButton* DFMButton_DownloadBtn; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock_DownloadText; // 0x578(0x08)
	struct UDFTextBlock* DFTextBlock_ProgressNum; // 0x580(0x08)
	int32_t TypeNum; // 0x588(0x04)
	bool TestType; // 0x58c(0x01)

	void SetType(bool IsDownload); // Function WBP_CommonDownload.WBP_CommonDownload_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xe6c37c0000050
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
