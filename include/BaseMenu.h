#pragma once
#include "pch.h"
#include <functional>
enum class MenuStatus {
	Esp,
	Norl,
	Config,
	Tp,
	Debug
};

class BaseMenu {
public:
	static void AddMenu(BaseMenu* Base);
	static void AddMenu(std::vector<BaseMenu* >BaseVector);
	static void AddEvnet(void* func);

	static std::map<MenuStatus, std::vector<BaseMenu* >>* GetDrawList();
	static std::vector<std::function<void()>>* GetEvents();

	virtual MenuStatus GetStatus() {
		return MenuStatus::Esp;
	}
	virtual void DrawMenu() {};
	virtual void AlwaysDraw() {};
	virtual void Wndproc(UINT uMsg, WPARAM wParam, LPARAM lParam) {};
	virtual void OnThread() {};
private:
	static inline std::map<MenuStatus, std::vector<BaseMenu* >> DrawMenuList;
	static inline std::vector<std::function<void()>> ThreadEvent;
};