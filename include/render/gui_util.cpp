#include "pch.h"
#include "gui_util.h"


bool Combo_Config(const std::string &tile, const std::vector<std::string> &str_list, int *current_inx) {
	bool inxChange = false;
	if(ImGui::BeginCombo(tile.c_str(), Translator::RuntimerTranslate(str_list[*current_inx]).c_str())) {
		size_t n = 0;
		for(auto &i : str_list) {
			bool is_selected = *current_inx == n;
			if(ImGui::Selectable(Translator::RuntimerTranslate(i).c_str(), is_selected)) {
				*current_inx = n;
				inxChange    = true;
			}
			if(is_selected)
				ImGui::SetItemDefaultFocus();
			n++;
		}
		ImGui::EndCombo();
	}
	return inxChange;
}
