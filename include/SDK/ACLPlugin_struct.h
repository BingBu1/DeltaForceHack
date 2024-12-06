
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ACLPlugin.ACLCompressionLevel
enum class ACLCompressionLevel : int {
	ACLCL_Lowest = 0,
	ACLCL_Low = 1,
	ACLCL_Medium = 2,
	ACLCL_High = 3,
	ACLCL_Highest = 4,
	ACLCL_MAX = 5
};

// Enum ACLPlugin.ACLVectorFormat
enum class ACLVectorFormat : int {
	ACLVF_Vector3_97 = 0,
	ACLVF_Vector3_Variable = 1,
	ACLVF_Vector3_MAX = 2
};

// Enum ACLPlugin.ACLRotationFormat
enum class ACLRotationFormat : int {
	ACLRF_Quat_129 = 0,
	ACLRF_QuatDropW_97 = 1,
	ACLRF_QuatDropW_Variable = 2,
	ACLRF_MAX = 3
};

// Enum ACLPlugin.ACLVisualFidelityChangeResult
enum class ACLVisualFidelityChangeResult : int {
	Dispatched = 0,
	Completed = 1,
	Failed = 2,
	ACLVisualFidelityChangeResult_MAX = 3
};

// Enum ACLPlugin.ACLVisualFidelity
enum class ACLVisualFidelity : int {
	Highest = 0,
	Medium = 1,
	Lowest = 2,
	ACLVisualFidelity_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
