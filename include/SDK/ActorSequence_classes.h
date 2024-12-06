
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ActorSequence.ActorSequence
// Size: 0x3f0 (Inherited: 0x3c8)
class UActorSequence : public UMovieSceneSequence {
public:

	struct UMovieScene* MovieScene; // 0x3c8(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x3d0(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x128 (Inherited: 0x100)
class UActorSequenceComponent : public UActorComponent {
public:

	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x100(0x14)
	char pad_114[0x4]; // 0x114(0x04)
	struct UActorSequence* Sequence; // 0x118(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0x120(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x9f0 (Inherited: 0x9f0)
class UActorSequencePlayer : public UMovieSceneSequencePlayer {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
