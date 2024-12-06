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
	 * 	Name: PredefinedFunction FParticleData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FParticleData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FParticleTriangle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FParticleTriangle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x54\x72\x69\x61\x6e\x67\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UParticleRenderComponent2D.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UParticleRenderComponent2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x52\x65\x6e\x64\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x32\x44");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPRenderer.ParticleRenderComponent2D.DrawMaterialParticlesToRenderTarget
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	void UParticleRenderComponent2D::DrawMaterialParticlesToRenderTarget(struct TArray<struct UParticleSystemComponent*>& InParticleSystemComponents, struct UTextureRenderTarget2D* InRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x50\x61\x72\x74\x69\x63\x6c\x65\x52\x65\x6e\x64\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x32\x44\x2e\x44\x72\x61\x77\x4d\x61\x74\x65\x72\x69\x61\x6c\x50\x61\x72\x74\x69\x63\x6c\x65\x73\x54\x6f\x52\x65\x6e\x64\x65\x72\x54\x61\x72\x67\x65\x74");
		Function_GPRenderer_ParticleRenderComponent2D_DrawMaterialParticlesToRenderTarget_Param params { };
		params.InParticleSystemComponents = InParticleSystemComponents;
		params.InRenderTarget = InRenderTarget;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InParticleSystemComponents = params.InParticleSystemComponents;
	}
}