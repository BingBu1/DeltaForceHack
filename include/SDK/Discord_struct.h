
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Discord.EDiscordActivityDataType
enum class EDiscordActivityDataType : int {
	None = 0,
	ApplicationId = 1,
	Name = 2,
	State = 3,
	Details = 4,
	StartTimestamps = 5,
	EndTimestamps = 6,
	LargeImage = 7,
	LargeText = 8,
	SmallImage = 9,
	SmallText = 10,
	PartyId = 11,
	PartyCurrentSize = 12,
	PartyMaxSize = 13,
	Match = 14,
	Join = 15,
	Spectate = 16,
	Instance = 17,
	Type = 18,
	EDiscordActivityDataType_MAX = 19
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
