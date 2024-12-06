
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct GeneEvo.GeneEvoStatsIndividualTableRow
// Size: 0x28 (Inherited: 0x08)
struct FGeneEvoStatsIndividualTableRow : public FTableRowBase {
public:

	int32_t Generation; // 0x08(0x04)
	int32_t Individual; // 0x0c(0x04)
	int32_t ObjectiveIndex; // 0x10(0x04)
	struct FName ObjectiveName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	double ObjectiveValue; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneEvo.GeneEvoStatsTableRow
// Size: 0x38 (Inherited: 0x08)
struct FGeneEvoStatsTableRow : public FTableRowBase {
public:

	int32_t Generation; // 0x08(0x04)
	int32_t ObjectiveIndex; // 0x0c(0x04)
	struct FName ObjectiveName; // 0x10(0x08)
	double Min; // 0x18(0x08)
	double Median; // 0x20(0x08)
	double Average; // 0x28(0x08)
	double Max; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
