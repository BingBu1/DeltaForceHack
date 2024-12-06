
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BlueprintNodeTemplate.ExtendConstructObject_FnLib
// Size: 0x30 (Inherited: 0x30)
class UExtendConstructObject_FnLib : public UBlueprintFunctionLibrary {
public:


	struct AActor* STATIC_ExtendSpawnActor(struct UObject* WorldContextObject, struct UClass* Class, struct FTransform SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandling); // Function BlueprintNodeTemplate.ExtendConstructObject_FnLib.ExtendSpawnActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BlueprintNodeTemplate.BlueprintAITaskTemplate
// Size: 0xc8 (Inherited: 0x78)
class UBlueprintAITaskTemplate : public UAITask {
public:

	bool IsPausable; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	/*struct FMulticastInlineDelegate*/char OnStartTaskDelegate[0x10]; // 0x80(0x10)
	/*struct FMulticastInlineDelegate*/char OnPauseTaskDelegate[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char OnResumeTaskDelegate[0x10]; // 0xa0(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndTaskDelegate[0x10]; // 0xb0(0x10)
	struct UWorld* WorldPrivate; // 0xc0(0x08)

	void StartTask(); // Function BlueprintNodeTemplate.BlueprintAITaskTemplate.StartTask // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BlueprintNodeTemplate.BlueprintTaskTemplate
// Size: 0x38 (Inherited: 0x30)
class UBlueprintTaskTemplate : public UObject {
public:

	struct UWorld* WorldPrivate; // 0x30(0x08)

	struct UBlueprintTaskTemplate* STATIC_BlueprintTaskTemplate(struct UObject* Outer, struct UClass* Class); // Function BlueprintNodeTemplate.BlueprintTaskTemplate.BlueprintTaskTemplate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable
// Size: 0x138 (Inherited: 0xc8)
class UBlueprintAITaskTemplate_Tickable : public UBlueprintAITaskTemplate {
public:

	struct FAITask_TickFunction TickFunc; // 0xc8(0x68)
	enum class ETickPrerequisite_BP TickPrerequisite; // 0x130(0x01)
	bool bIsTickPausable; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)

	void UnRegTick(); // Function BlueprintNodeTemplate.BlueprintAITaskTemplate_Tickable.UnRegTick // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BlueprintNodeTemplate.BlueprintTaskTemplateTickable
// Size: 0xa8 (Inherited: 0x38)
class UBlueprintTaskTemplateTickable : public UBlueprintTaskTemplate {
public:

	struct FBlueprintTaskTickFunction TickFunc; // 0x38(0x68)
	enum class ETickPrerequisite_BP TickPrerequisite; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void SetTickEnable(bool bEnable); // Function BlueprintNodeTemplate.BlueprintTaskTemplateTickable.SetTickEnable // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
