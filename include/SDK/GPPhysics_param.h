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
	struct Function_GPPhysics_GPPhysics_WeaponTraceSingle_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct TArray<struct AActor*> IgnoreActors; // 0x08(0x10)
		struct FVector Start; // 0x18(0x0c)
		struct FVector End; // 0x24(0x0c)
		bool IgnoreHidden; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FHitResult OutHitResult; // 0x34(0x88)
		bool ReturnValue; // 0xbc(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
