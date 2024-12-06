
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMParticleBenchmark.ParticleBenchmark
// Size: 0x480 (Inherited: 0x378)
class AParticleBenchmark : public AActor {
public:

	struct AActor* TheCamera; // 0x378(0x08)
	struct UDataTable* FXResourceDataTable; // 0x380(0x08)
	struct UParticleSystem* ParticleSystem; // 0x388(0x08)
	float Distance; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UParticleSystem* CurrentPS; // 0x398(0x08)
	struct UParticleSystemComponent* CurrentPSC; // 0x3a0(0x08)
	struct UParticleSystemComponent* SinglePSC; // 0x3a8(0x08)
	char pad_3B0[0xd0]; // 0x3b0(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMParticleBenchmark.ParticleBenchmarkHD
// Size: 0x4b8 (Inherited: 0x378)
class AParticleBenchmarkHD : public AActor {
public:

	struct AActor* TheCamera; // 0x378(0x08)
	struct UDataTable* FXResourceDataTable; // 0x380(0x08)
	struct UParticleSystem* ParticleSystem; // 0x388(0x08)
	float Distance; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UDataTable* Table1; // 0x398(0x08)
	struct UDataTable* Table2; // 0x3a0(0x08)
	struct UParticleSystem* CurrentPS; // 0x3a8(0x08)
	struct UParticleSystemComponent* CurrentPSC; // 0x3b0(0x08)
	struct UParticleSystemComponent* SinglePSC; // 0x3b8(0x08)
	char pad_3C0[0xf8]; // 0x3c0(0xf8)

	void CopyTableGPUCostTable1toTable2(); // Function DFMParticleBenchmark.ParticleBenchmarkHD.CopyTableGPUCostTable1toTable2 // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMParticleBenchmark.ParticleProfileActor
// Size: 0x3f8 (Inherited: 0x378)
class AParticleProfileActor : public AActor {
public:

	struct AActor* TheCamera; // 0x378(0x08)
	struct UDataTable* FXResourceDataTable; // 0x380(0x08)
	struct UParticleSystem* CurrentPS; // 0x388(0x08)
	struct UParticleSystemComponent* CurrentPSC; // 0x390(0x08)
	char pad_398[0x60]; // 0x398(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
