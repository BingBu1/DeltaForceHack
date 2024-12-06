#pragma once
#include "BaseMenu.h"

class Esp : public BaseMenu {
    public:
	static auto GetInstance() {
		if(!Instance)
			Instance = new Esp;
		return Instance;
	}

    Esp();

    std::string GetActorName(Dumper::AActor *Actor);

    void DrawPlayerEsp(Dumper::AActor *Actor);

    void BonePosToSceen(Dumper::FVector &A, Dumper::FVector &B, Dumper::FVector2D &OutA, Dumper::FVector2D &OutB);

    void DrwaBoneByLine(Dumper::FVector &A, Dumper::FVector &B, bool isViblse);

    void DrawBone(Dumper::AActor *Actor);

	void DrawUnkName(Dumper::AActor *Actor);

    virtual void DrawMenu()override;

    virtual void AlwaysDraw()override;

	std::tuple<int,int> GetScreenCenter();

	private:
	inline static Esp *Instance{};
	bool Esp_Enable{};
	bool Esp_Impending{};
	bool Esp_Friend{};
	bool Esp_DrawBone{};
	bool Esp_DrawUnk{};
	int Wide{}, height{};
	ImDrawList *Draw{};
};



