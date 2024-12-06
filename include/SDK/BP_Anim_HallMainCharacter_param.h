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
	struct Function_BP_Anim_HallMainCharacter_BP_Anim_HallMainCharacter_C_SyncFaceAnim_Param
	{
	public:

		struct UAnimSequenceBase* BodyAnim; // 0x00(0x08)
		struct UAnimSequenceBase* FaceAnim; // 0x08(0x08)
		bool IsResetPlay; // 0x10(0x01)
		bool SetOrGet; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct UAnimSequenceBase* GetBodyAnim; // 0x18(0x08)
		struct UAnimSequenceBase* GetFaceAnim; // 0x20(0x08)
		bool GetIsResetPlay; // 0x28(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
