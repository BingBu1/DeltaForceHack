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
	struct Function_MergeRuntime_CompositeSkeletalMeshComponent_Merge_Param
	{
	public:

	};

	struct Function_MergeRuntime_MergeLibrary_MergeSkeletalMeshs_Param
	{
	public:

		struct TArray<struct USkeletalMesh*> SrcMeshList; // 0x00(0x10)
		struct UCompositeSkeletalMeshComponent* Outer; // 0x10(0x08)
		struct USkeletalMesh* ReturnValue; // 0x18(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
