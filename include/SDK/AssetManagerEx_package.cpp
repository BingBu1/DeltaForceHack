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
	 * 	Name: PredefinedFunction FAssetDetail.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAssetDetail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72\x45\x78\x2e\x41\x73\x73\x65\x74\x44\x65\x74\x61\x69\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FAssetDependenciesInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAssetDependenciesInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72\x45\x78\x2e\x41\x73\x73\x65\x74\x44\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65\x73\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FAssetDependenciesDetail.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAssetDependenciesDetail::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72\x45\x78\x2e\x41\x73\x73\x65\x74\x44\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65\x73\x44\x65\x74\x61\x69\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FHotPatcherPackageInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FHotPatcherPackageInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72\x45\x78\x2e\x48\x6f\x74\x50\x61\x74\x63\x68\x65\x72\x50\x61\x63\x6b\x61\x67\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UFLibAssetManageHelperEx.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UFLibAssetManageHelperEx::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72\x45\x78\x2e\x46\x4c\x69\x62\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x48\x65\x6c\x70\x65\x72\x45\x78");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AssetManagerEx.FLibAssetManageHelperEx.SerializeAssetDetialArrayToString
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 */
	struct FString UFLibAssetManageHelperEx::STATIC_SerializeAssetDetialArrayToString(struct TArray<struct FAssetDetail>& InAssetDetialList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x72\x45\x78\x2e\x46\x4c\x69\x62\x41\x73\x73\x65\x74\x4d\x61\x6e\x61\x67\x65\x48\x65\x6c\x70\x65\x72\x45\x78\x2e\x53\x65\x72\x69\x61\x6c\x69\x7a\x65\x41\x73\x73\x65\x74\x44\x65\x74\x69\x61\x6c\x41\x72\x72\x61\x79\x54\x6f\x53\x74\x72\x69\x6e\x67");
		Function_AssetManagerEx_FLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Param params { };
		params.InAssetDetialList = InAssetDetialList;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		InAssetDetialList = params.InAssetDetialList;
		return params.ReturnValue;
	}
}