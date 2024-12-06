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
	 * 	Name: PredefinedFunction FRichTextMetadata.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FRichTextMetadata::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x52\x69\x63\x68\x54\x65\x78\x74\x4d\x65\x74\x61\x64\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FRichTextAnimationRow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FRichTextAnimationRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x52\x69\x63\x68\x54\x65\x78\x74\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x52\x6f\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FRichTextHyperlinkRow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FRichTextHyperlinkRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x52\x69\x63\x68\x54\x65\x78\x74\x48\x79\x70\x65\x72\x6c\x69\x6e\x6b\x52\x6f\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FToolTipStyle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FToolTipStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x54\x6f\x6f\x6c\x54\x69\x70\x53\x74\x79\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction URichTextBlockExtenderDecorator.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* URichTextBlockExtenderDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x52\x69\x63\x68\x54\x65\x78\x74\x42\x6c\x6f\x63\x6b\x45\x78\x74\x65\x6e\x64\x65\x72\x44\x65\x63\x6f\x72\x61\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UTextExtenderDecorator.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTextExtenderDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x54\x65\x78\x74\x45\x78\x74\x65\x6e\x64\x65\x72\x44\x65\x63\x6f\x72\x61\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: DelegateFunction RichTextPlugin.RichTextBlockExtenderDecorator.OnRichTextClickedEvent__DelegateSignature
	 * 	Flags: (MulticastDelegate, Public, Delegate, HasOutParms)
	 */
	void URichTextBlockExtenderDecorator::OnRichTextClickedEvent__DelegateSignature(struct FRichTextMetadata& InMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x44\x65\x6c\x65\x67\x61\x74\x65\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x69\x63\x68\x54\x65\x78\x74\x50\x6c\x75\x67\x69\x6e\x2e\x52\x69\x63\x68\x54\x65\x78\x74\x42\x6c\x6f\x63\x6b\x45\x78\x74\x65\x6e\x64\x65\x72\x44\x65\x63\x6f\x72\x61\x74\x6f\x72\x2e\x4f\x6e\x52\x69\x63\x68\x54\x65\x78\x74\x43\x6c\x69\x63\x6b\x65\x64\x45\x76\x65\x6e\x74\x5f\x5f\x44\x65\x6c\x65\x67\x61\x74\x65\x53\x69\x67\x6e\x61\x74\x75\x72\x65");
		DelegateFunction_RichTextPlugin_RichTextBlockExtenderDecorator_OnRichTextClickedEvent__DelegateSignature_Param params { };
		params.InMetadata = InMetadata;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InMetadata = params.InMetadata;
	}
}