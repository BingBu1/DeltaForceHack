
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MoviePlayer.MoviePlayerSettings
// Size: 0x48 (Inherited: 0x30)
class UMoviePlayerSettings : public UObject {
public:

	bool bWaitForMoviesToComplete; // 0x30(0x01)
	bool bMoviesAreSkippable; // 0x31(0x01)
	enum class EMoviePlaybackType MoviePlayBackType; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TArray<struct FString> StartupMovies; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
