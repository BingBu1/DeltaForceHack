#include "pch.h"
#include "BaseMenu.h"

void BaseMenu::AddMenu(BaseMenu* Base) {
	DrawMenuList[Base->GetStatus()].push_back(Base);
}

void BaseMenu::AddMenu(std::vector<BaseMenu*> BaseVector) {
	for (auto i : BaseVector) {
		AddMenu(i);
	}
}

void BaseMenu::AddEvnet(void* func) {
	ThreadEvent.push_back(reinterpret_cast<void(*)()>(func));
}

std::map<MenuStatus, std::vector<BaseMenu*>>* BaseMenu::GetDrawList() {
	return &DrawMenuList;
}

std::vector<std::function<void()>>* BaseMenu::GetEvents() {
	return &ThreadEvent;
}
