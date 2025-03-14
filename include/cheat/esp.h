#pragma once
#include "BaseMenu.h"



struct DrawItem{
	std::string DrawStr;
	ImVec2 DrawPos;
	ImColor DrawColor;
};

class Esp : public BaseMenu {
    public:
	static auto GetInstance() {
		if(!Instance)
			Instance = new Esp;
		return Instance;
	}

    Esp();

    std::string GetActorName(Dumper::AActor *Actor);

    void DrawNameEsp(Dumper::AActor *Actor);

    void BonePosToSceen(Dumper::FVector &A, Dumper::FVector &B, Dumper::FVector2D &OutA, Dumper::FVector2D &OutB);

    void DrwaBoneByLine(Dumper::FVector &A, Dumper::FVector &B, bool isViblse);

    void DrawBone(Dumper::AActor *Actor);

	void DrawUnkName(Dumper::AActor *Actor);

	void DrawPlayer(Dumper::AActor * Actor);

	void DrawBackPlayer(Dumper::AActor * Actor);

	void DrawOther(Dumper::AActor * Actor);

	void WallHack(Dumper::AActor * Actor);

	void ExecDraw();

    virtual void DrawMenu()override;

    virtual void AlwaysDraw()override;

	std::tuple<int,int> GetScreenCenter();

	private:
	inline static Esp *Instance{};
	bool EspName_Enable{};
	bool Esp_Impending{};
	bool Esp_Friend{};
	bool Esp_DrawBone{};
	bool Esp_DrawUnk{};
	bool Esp_DrwaPick{};
	bool Esp_DrwaPlayerBaack{};
	bool Esp_WallHack{};
	float Esp_Disance{};
	float Esp_ImpendDisance{};
	int Wide{}, height{};
	ImDrawList *Draw{};

	std::vector<DrawItem> DrawName;
};









