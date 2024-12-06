/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AParticleBenchmark.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AParticleBenchmark::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AParticleBenchmarkHD.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AParticleBenchmarkHD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x48\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AParticleProfileActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AParticleProfileActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x50\x72\x6f\x66\x69\x6c\x65\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMParticleBenchmark.ParticleBenchmarkHD.CopyTableGPUCostTable1toTable2
	 * 	Flags: (Final, Native, Public)
	 */
	void AParticleBenchmarkHD::CopyTableGPUCostTable1toTable2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x42\x65\x6e\x63\x68\x6d\x61\x72\x6b\x48\x44\x2e\x43\x6f\x70\x79\x54\x61\x62\x6c\x65\x47\x50\x55\x43\x6f\x73\x74\x54\x61\x62\x6c\x65\x31\x74\x6f\x54\x61\x62\x6c\x65\x32");
		Function_DFMParticleBenchmark_ParticleBenchmarkHD_CopyTableGPUCostTable1toTable2_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}