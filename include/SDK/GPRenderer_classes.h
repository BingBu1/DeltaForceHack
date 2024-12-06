
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPRenderer.ParticleRenderComponent2D
// Size: 0x280 (Inherited: 0x240)
class UParticleRenderComponent2D : public USceneComponent {
public:

	float AspectRatio; // 0x240(0x04)
	float OrthoWidth; // 0x244(0x04)
	struct UTextureRenderTarget2D* RenderTarget; // 0x248(0x08)
	struct AEmitter* Emitter; // 0x250(0x08)
	struct TArray<struct UParticleSystemComponent*> DrawedParticleArray; // 0x258(0x10)
	struct TArray<struct UParticleSystemComponent*> CullingParticleArray; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)

	void DrawMaterialParticlesToRenderTarget(struct TArray<struct UParticleSystemComponent*>& InParticleSystemComponents, struct UTextureRenderTarget2D* InRenderTarget); // Function GPRenderer.ParticleRenderComponent2D.DrawMaterialParticlesToRenderTarget // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
