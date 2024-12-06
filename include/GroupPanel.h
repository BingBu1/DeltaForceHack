#pragma once
#include "imgui/imconfig.h"
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"

namespace ImGui {
void BeginGroupPanel(const char *name, const ImVec2 &size);
void EndGroupPanel();
// Crappy HyperLink implemented in a few minutes
//
// Does not handle: wordwrap
// Focus handling is not quite right (focus item stays after clicking with the mouse; ideally would be only outlined if keyboard was used to select/activate most recently)
// More input options for buttons, etc.
// Lacks custom style options. uses hard-coded colors
// Lacks a flag or style/color for "visited" links
// Lacks disabled link style/color
// Option to only show underline on hover could be a style? Or part of flags
bool HyperLink(const char *label, bool underlineWhenHoveredOnly = false);
}    // namespace ImGui
void HelpMarker(const char *desc);