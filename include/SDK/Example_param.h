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
	struct Function_Example_Example_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
