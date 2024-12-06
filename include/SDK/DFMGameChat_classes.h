
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameChat.DFMGameChat
// Size: 0x68 (Inherited: 0x38)
class UDFMGameChat : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char FdfmGameChatOnMarkedItemNameChanged[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnChatSendText[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnChatSendPreset[0x10]; // 0x58(0x10)

	void ServerAISendChatPreset(struct AController* Controller, struct FName PresetId); // Function DFMGameChat.DFMGameChat.ServerAISendChatPreset // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
