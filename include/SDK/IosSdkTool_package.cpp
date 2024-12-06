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
	 * 	Name: PredefinedFunction UIosSdkTool.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIosSdkTool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6f\x73\x53\x64\x6b\x54\x6f\x6f\x6c\x2e\x49\x6f\x73\x53\x64\x6b\x54\x6f\x6f\x6c");
		return ptr;
	}

}