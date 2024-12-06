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
	 * 	Name: PredefinedFunction FSolverBreakingFilterSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSolverBreakingFilterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x43\x68\x61\x6f\x73\x53\x6f\x6c\x76\x65\x72\x73\x2e\x53\x6f\x6c\x76\x65\x72\x42\x72\x65\x61\x6b\x69\x6e\x67\x46\x69\x6c\x74\x65\x72\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSolverCollisionFilterSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSolverCollisionFilterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x43\x68\x61\x6f\x73\x53\x6f\x6c\x76\x65\x72\x73\x2e\x53\x6f\x6c\x76\x65\x72\x43\x6f\x6c\x6c\x69\x73\x69\x6f\x6e\x46\x69\x6c\x74\x65\x72\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSolverTrailingFilterSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSolverTrailingFilterSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x43\x68\x61\x6f\x73\x53\x6f\x6c\x76\x65\x72\x73\x2e\x53\x6f\x6c\x76\x65\x72\x54\x72\x61\x69\x6c\x69\x6e\x67\x46\x69\x6c\x74\x65\x72\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}