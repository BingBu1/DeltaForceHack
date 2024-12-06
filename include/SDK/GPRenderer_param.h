/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_GPRenderer_ParticleRenderComponent2D_DrawMaterialParticlesToRenderTarget_Param
	{
	public:

		struct TArray<struct UParticleSystemComponent*> InParticleSystemComponents; // 0x00(0x10)
		struct UTextureRenderTarget2D* InRenderTarget; // 0x10(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
