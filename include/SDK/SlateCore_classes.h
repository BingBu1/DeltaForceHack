
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x38 (Inherited: 0x30)
class USlateWidgetStyleContainerBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.FontBulkData
// Size: 0xf0 (Inherited: 0x30)
class UFontBulkData : public UObject {
public:

	char pad_30[0xc0]; // 0x30(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.FontFaceInterface
// Size: 0x30 (Inherited: 0x30)
class UFontFaceInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.FontProviderInterface
// Size: 0x30 (Inherited: 0x30)
class UFontProviderInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.ReplyHelper
// Size: 0x30 (Inherited: 0x30)
class UReplyHelper : public UObject {
public:


	struct FReply STATIC_Unhandled(); // Function SlateCore.ReplyHelper.Unhandled // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.SlateTypes
// Size: 0x30 (Inherited: 0x30)
class USlateTypes : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.SlateWidgetStyleAsset
// Size: 0x38 (Inherited: 0x30)
class USlateWidgetStyleAsset : public UObject {
public:

	struct USlateWidgetStyleContainerBase* CustomStyle; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x30 (Inherited: 0x30)
class USlateWidgetStyleContainerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
