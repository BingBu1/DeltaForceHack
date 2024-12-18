#include <Windows.h>


#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <memory>
#include <thread>
#include <mutex>
#include <locale>
#include <codecvt>
#include <random>

#include "MyHookAPi.hpp"

#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui/imgui.h>
#include <imgui/imconfig.h>
#include <imgui/imgui_internal.h>
#include <imgui/backends/imgui_impl_dx11.h>
#include <imgui/backends/imgui_impl_win32.h>
#include <GroupPanel.h>
#include <nlohmann/json.hpp>


#include <fmt/format.h>
#include <fmt/xchar.h>

#define JM_XORSTR_DISABLE_AVX_INTRINSICS
#include <xorstr.hpp>

#include "SDK.h"
#include "Bone.h"

