
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct Serialization.StructSerializerByteArray
// Size: 0x38 (Inherited: 0x00)
struct FStructSerializerByteArray {
public:

	int32_t Dummy1; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> ByteArray; // 0x08(0x10)
	int32_t Dummy2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int8_t> Int8Array; // 0x20(0x10)
	int32_t Dummy3; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerSetTestStruct {
public:

	/*struct TSet<struct FString>*/char StrSet[0x50]; // 0x00(0x50)
	/*struct TSet<int32_t>*/char IntSet[0x50]; // 0x50(0x50)
	/*struct TSet<struct FName>*/char NameSet[0x50]; // 0xa0(0x50)
	/*struct TSet<struct FStructSerializerBuiltinTestStruct>*/char StructSet[0x50]; // 0xf0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size: 0x90 (Inherited: 0x00)
struct FStructSerializerBuiltinTestStruct {
public:

	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FText Text; // 0x28(0x18)
	struct FVector Vector; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector4 Vector4; // 0x50(0x10)
	struct FRotator Rotator; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FQuat Quat; // 0x70(0x10)
	struct FColor Color; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// Size: 0x140 (Inherited: 0x00)
struct FStructSerializerMapTestStruct {
public:

	struct TMap<int32_t, struct FString> IntToStr; // 0x00(0x50)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xa0(0x50)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size: 0x60 (Inherited: 0x00)
struct FStructSerializerArrayTestStruct {
public:

	struct TArray<int32_t> Int32Array; // 0x00(0x10)
	struct TArray<char> ByteArray; // 0x10(0x10)
	int32_t StaticSingleElement; // 0x20(0x04)
	int32_t StaticInt32Array[0x3]; // 0x24(0x0c)
	float StaticFloatArray[0x3]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FVector> VectorArray; // 0x40(0x10)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size: 0xa0 (Inherited: 0x00)
struct FStructSerializerObjectTestStruct {
public:

	struct UClass* Class; // 0x00(0x08)
	struct UClass* SubClass; // 0x08(0x08)
	/*struct TSoftClassPtr<UObject>*/char SoftClass[0x28]; // 0x10(0x28)
	struct UObject* Object; // 0x38(0x08)
	struct TWeakObjectPtr<struct UMetaData> WeakObject; // 0x40(0x08)
	/*struct TSoftObjectPtr<UMetaData>*/char SoftObject[0x28]; // 0x48(0x28)
	struct FSoftClassPath ClassPath; // 0x70(0x18)
	struct FSoftObjectPath ObjectPath; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size: 0x03 (Inherited: 0x00)
struct FStructSerializerBooleanTestStruct {
public:

	bool BoolFalse; // 0x00(0x01)
	bool BoolTrue; // 0x01(0x01)
	char Bitfield0 : 1; // 0x02(0x01)
	char Bitfield1 : 1; // 0x02(0x01)
	char Bitfield2Set : 1; // 0x02(0x01)
	char Bitfield3 : 1; // 0x02(0x01)
	char Bitfield4Set : 1; // 0x02(0x01)
	char Bitfield5Set : 1; // 0x02(0x01)
	char Bitfield6 : 1; // 0x02(0x01)
	char Bitfield7Set : 1; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size: 0x30 (Inherited: 0x00)
struct FStructSerializerNumericTestStruct {
public:

	int8_t Int8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16_t Int16; // 0x02(0x02)
	int32_t Int32; // 0x04(0x04)
	int64_t Int64; // 0x08(0x08)
	char UInt8; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16_t UInt16; // 0x12(0x02)
	uint32_t UInt32; // 0x14(0x04)
	uint64_t UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Serialization.StructSerializerTestStruct
// Size: 0x450 (Inherited: 0x00)
struct FStructSerializerTestStruct {
public:

	struct FStructSerializerNumericTestStruct Numerics; // 0x00(0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30(0x03)
	char pad_33[0x5]; // 0x33(0x05)
	struct FStructSerializerObjectTestStruct Objects; // 0x38(0xa0)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0xe0(0x90)
	struct FStructSerializerArrayTestStruct Arrays; // 0x170(0x60)
	struct FStructSerializerMapTestStruct maps; // 0x1d0(0x140)
	struct FStructSerializerSetTestStruct Sets; // 0x310(0x140)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
