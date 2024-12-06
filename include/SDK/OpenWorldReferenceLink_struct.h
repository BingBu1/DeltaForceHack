
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct OpenWorldReferenceLink.OpenWorldLinkGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FOpenWorldLinkGroupInfo {
public:

	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct FOpenWorldVarInfoGroup> VarInfoGroups; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldReferenceLink.OpenWorldVarInfoGroup
// Size: 0x10 (Inherited: 0x00)
struct FOpenWorldVarInfoGroup {
public:

	struct TArray<struct FOpenWorldVarInfo> VarInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldReferenceLink.OpenWorldVarInfo
// Size: 0x0c (Inherited: 0x00)
struct FOpenWorldVarInfo {
public:

	struct FName VariableName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldReferenceLink.OpenWorldRefLinkComps
// Size: 0x28 (Inherited: 0x00)
struct FOpenWorldRefLinkComps {
public:

	struct TArray<struct UOpenWorldRefLinkComponent*> Comps; // 0x00(0x10)
	struct UOpenWorldRefLinkComponent* MainComp; // 0x10(0x08)
	struct FGuid Guid; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
