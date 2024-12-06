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
	 * 	Name: PredefinedFunction UUIClipMapTestWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUIClipMapTestWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x43\x6c\x69\x70\x4d\x61\x70\x2e\x55\x49\x43\x6c\x69\x70\x4d\x61\x70\x54\x65\x73\x74\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUIClipMapTexture.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUIClipMapTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x43\x6c\x69\x70\x4d\x61\x70\x2e\x55\x49\x43\x6c\x69\x70\x4d\x61\x70\x54\x65\x78\x74\x75\x72\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUIClipMapWrapper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUIClipMapWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x43\x6c\x69\x70\x4d\x61\x70\x2e\x55\x49\x43\x6c\x69\x70\x4d\x61\x70\x57\x72\x61\x70\x70\x65\x72");
		return ptr;
	}

}