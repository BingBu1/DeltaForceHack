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
	 * 	Name: PredefinedFunction UGamelet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGamelet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletMatBrush.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletMatBrush::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x4d\x61\x74\x42\x72\x75\x73\x68");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletEnvMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletEnvMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x45\x6e\x76\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletFile.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x46\x69\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletPaths.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletPaths::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x50\x61\x74\x68\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletPuertsEnvMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletPuertsEnvMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x50\x75\x65\x72\x74\x73\x45\x6e\x76\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletPuertsUtilities.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletPuertsUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x50\x75\x65\x72\x74\x73\x55\x74\x69\x6c\x69\x74\x69\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletWidget.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x57\x69\x64\x67\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameletWindow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameletWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x57\x69\x6e\x64\x6f\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.Gamelet.Tick
	 * 	Flags: (Final, Native, Public, BlueprintCallable, Const)
	 */
	void UGamelet::Tick(float fDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x2e\x54\x69\x63\x6b");
		Function_Gamelet_Gamelet_Tick_Param params { };
		params.fDeltaTime = fDeltaTime;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletEnvMgr.OnEnvToGameMessage
	 * 	Flags: (Final, Native, Public)
	 */
	int32_t UGameletEnvMgr::OnEnvToGameMessage(struct FString Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x45\x6e\x76\x4d\x67\x72\x2e\x4f\x6e\x45\x6e\x76\x54\x6f\x47\x61\x6d\x65\x4d\x65\x73\x73\x61\x67\x65");
		Function_Gamelet_GameletEnvMgr_OnEnvToGameMessage_Param params { };
		params.Msg = Msg;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletFile.WriteFile
	 * 	Flags: (Final, Native, Static, Public, HasOutParms)
	 */
	bool UGameletFile::STATIC_WriteFile(struct FString Path, struct FGameletArrayBuffer& ArrayBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x46\x69\x6c\x65\x2e\x57\x72\x69\x74\x65\x46\x69\x6c\x65");
		Function_Gamelet_GameletFile_WriteFile_Param params { };
		params.Path = Path;
		params.ArrayBuffer = ArrayBuffer;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		ArrayBuffer = params.ArrayBuffer;
		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletPaths.ToAbsolutePathForWrite
	 * 	Flags: (Final, Native, Static, Public)
	 */
	struct FString UGameletPaths::STATIC_ToAbsolutePathForWrite(struct FString Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x50\x61\x74\x68\x73\x2e\x54\x6f\x41\x62\x73\x6f\x6c\x75\x74\x65\x50\x61\x74\x68\x46\x6f\x72\x57\x72\x69\x74\x65");
		Function_Gamelet_GameletPaths_ToAbsolutePathForWrite_Param params { };
		params.Path = Path;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage
	 * 	Flags: (Final, Native, Public)
	 */
	void UGameletPuertsEnvMgr::OnEnvMessage(struct FString Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x50\x75\x65\x72\x74\x73\x45\x6e\x76\x4d\x67\x72\x2e\x4f\x6e\x45\x6e\x76\x4d\x65\x73\x73\x61\x67\x65");
		Function_Gamelet_GameletPuertsEnvMgr_OnEnvMessage_Param params { };
		params.Msg = Msg;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletPuertsUtilities.UpdateTextureResources
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void UGameletPuertsUtilities::STATIC_UpdateTextureResources(struct UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x50\x75\x65\x72\x74\x73\x55\x74\x69\x6c\x69\x74\x69\x65\x73\x2e\x55\x70\x64\x61\x74\x65\x54\x65\x78\x74\x75\x72\x65\x52\x65\x73\x6f\x75\x72\x63\x65\x73");
		Function_Gamelet_GameletPuertsUtilities_UpdateTextureResources_Param params { };
		params.Texture = Texture;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletSettings.IsValidSetting
	 * 	Flags: (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGameletSettings::IsValidSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x49\x73\x56\x61\x6c\x69\x64\x53\x65\x74\x74\x69\x6e\x67");
		Function_Gamelet_GameletSettings_IsValidSetting_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit
	 * 	Flags: (Final, Native, Private)
	 */
	void UGameletWindow::OnPxWidgetScriptStateInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x6c\x65\x74\x2e\x47\x61\x6d\x65\x6c\x65\x74\x57\x69\x6e\x64\x6f\x77\x2e\x4f\x6e\x50\x78\x57\x69\x64\x67\x65\x74\x53\x63\x72\x69\x70\x74\x53\x74\x61\x74\x65\x49\x6e\x69\x74");
		Function_Gamelet_GameletWindow_OnPxWidgetScriptStateInit_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}