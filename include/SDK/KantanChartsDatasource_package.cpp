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
	 * 	Name: PredefinedFunction FKantanCartesianDatapoint.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FKantanCartesianDatapoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x43\x61\x72\x74\x65\x73\x69\x61\x6e\x44\x61\x74\x61\x70\x6f\x69\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UKantanCartesianDatasourceInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UKantanCartesianDatasourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x43\x61\x72\x74\x65\x73\x69\x61\x6e\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UKantanCategoryDatasourceInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UKantanCategoryDatasourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x43\x61\x74\x65\x67\x6f\x72\x79\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UKantanSimpleCartesianDatasource.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UKantanSimpleCartesianDatasource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x53\x69\x6d\x70\x6c\x65\x43\x61\x72\x74\x65\x73\x69\x61\x6e\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UKantanSimpleCategoryDatasource.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UKantanSimpleCategoryDatasource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x53\x69\x6d\x70\x6c\x65\x43\x61\x74\x65\x67\x6f\x72\x79\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
	 * 	Flags: (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FText UKantanCartesianDatasourceInterface::GetSeriesName(int32_t SeriesIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x43\x61\x72\x74\x65\x73\x69\x61\x6e\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x2e\x47\x65\x74\x53\x65\x72\x69\x65\x73\x4e\x61\x6d\x65");
		Function_KantanChartsDatasource_KantanCartesianDatasourceInterface_GetSeriesName_Param params { };
		params.SeriesIdx = SeriesIdx;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
	 * 	Flags: (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t UKantanCategoryDatasourceInterface::GetNumCategories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x43\x61\x74\x65\x67\x6f\x72\x79\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x2e\x47\x65\x74\x4e\x75\x6d\x43\x61\x74\x65\x67\x6f\x72\x69\x65\x73");
		Function_KantanChartsDatasource_KantanCategoryDatasourceInterface_GetNumCategories_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UKantanSimpleCartesianDatasource* UKantanSimpleCartesianDatasource::STATIC_NewSimpleCartesianDatasource(int32_t MaxDatapoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x53\x69\x6d\x70\x6c\x65\x43\x61\x72\x74\x65\x73\x69\x61\x6e\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4e\x65\x77\x53\x69\x6d\x70\x6c\x65\x43\x61\x72\x74\x65\x73\x69\x61\x6e\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65");
		Function_KantanChartsDatasource_KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Param params { };
		params.MaxDatapoints = MaxDatapoints;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UKantanSimpleCategoryDatasource* UKantanSimpleCategoryDatasource::STATIC_NewSimpleCategoryDatasource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4b\x61\x6e\x74\x61\x6e\x43\x68\x61\x72\x74\x73\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4b\x61\x6e\x74\x61\x6e\x53\x69\x6d\x70\x6c\x65\x43\x61\x74\x65\x67\x6f\x72\x79\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65\x2e\x4e\x65\x77\x53\x69\x6d\x70\x6c\x65\x43\x61\x74\x65\x67\x6f\x72\x79\x44\x61\x74\x61\x73\x6f\x75\x72\x63\x65");
		Function_KantanChartsDatasource_KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}