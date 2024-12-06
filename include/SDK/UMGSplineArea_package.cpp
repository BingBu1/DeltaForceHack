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
	 * 	Name: PredefinedFunction FUMGSplineAreaInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUMGSplineAreaInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x4d\x47\x53\x70\x6c\x69\x6e\x65\x41\x72\x65\x61\x2e\x55\x4d\x47\x53\x70\x6c\x69\x6e\x65\x41\x72\x65\x61\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FUMGSplineAreaPoint.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUMGSplineAreaPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x4d\x47\x53\x70\x6c\x69\x6e\x65\x41\x72\x65\x61\x2e\x55\x4d\x47\x53\x70\x6c\x69\x6e\x65\x41\x72\x65\x61\x50\x6f\x69\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USplineAreaWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USplineAreaWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x4d\x47\x53\x70\x6c\x69\x6e\x65\x41\x72\x65\x61\x2e\x53\x70\x6c\x69\x6e\x65\x41\x72\x65\x61\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

}