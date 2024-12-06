
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class RuntimeHttpRequest.RuntimeHttpRequest
// Size: 0x50 (Inherited: 0x30)
class URuntimeHttpRequest : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnHttpRequestComplete[0x10]; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)

	void OnHttpRequestComplete__DelegateSignature(struct FString URL, bool Result); // DelegateFunction RuntimeHttpRequest.RuntimeHttpRequest.OnHttpRequestComplete__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
