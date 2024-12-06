
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AnimationDataTableImportTool.AnimationImport
// Size: 0x30 (Inherited: 0x30)
class UAnimationImport : public UObject {
public:


	void STATIC_ImportDataTable(struct UDataTable* Source, struct UDataTable* Destination, struct FString Prefix, struct FDirectoryPath ProjectPath, struct FDirectoryPath ChangeLogPath); // Function AnimationDataTableImportTool.AnimationImport.ImportDataTable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
