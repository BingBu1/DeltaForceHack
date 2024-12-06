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
	 * 	Name: PredefinedFunction FParamSplinePointParameter.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FParamSplinePointParameter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x65\x74\x74\x65\x72\x53\x70\x6c\x69\x6e\x65\x2e\x50\x61\x72\x61\x6d\x53\x70\x6c\x69\x6e\x65\x50\x6f\x69\x6e\x74\x50\x61\x72\x61\x6d\x65\x74\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FParamSplineCurves.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FParamSplineCurves::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x65\x74\x74\x65\x72\x53\x70\x6c\x69\x6e\x65\x2e\x50\x61\x72\x61\x6d\x53\x70\x6c\x69\x6e\x65\x43\x75\x72\x76\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FParamSplineInstanceData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FParamSplineInstanceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x65\x74\x74\x65\x72\x53\x70\x6c\x69\x6e\x65\x2e\x50\x61\x72\x61\x6d\x53\x70\x6c\x69\x6e\x65\x49\x6e\x73\x74\x61\x6e\x63\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBetterSplineSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBetterSplineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x65\x74\x74\x65\x72\x53\x70\x6c\x69\x6e\x65\x2e\x42\x65\x74\x74\x65\x72\x53\x70\x6c\x69\x6e\x65\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UParamSplineComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UParamSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x65\x74\x74\x65\x72\x53\x70\x6c\x69\x6e\x65\x2e\x50\x61\x72\x61\x6d\x53\x70\x6c\x69\x6e\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

}