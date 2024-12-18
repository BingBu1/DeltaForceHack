cmake_minimum_required(VERSION 3.9)

project(testdll)

set(CMAKE_CXX_STANDARD 20)

set (CMAKE_BUILD_PARALLEL_LEVEL 16)

add_definitions(-D_CRT_USE_BUILTIN_OFFSETOF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse2")

set(DLL_SOURCE ${PROJECT_SOURCE_DIR}/bin/${PROJECT_NAME}.dll)

#傻逼char8去死
add_compile_options(-fno-char8_t -Wmicrosoft-cast)
#修复static变量，如果不开启此选项需要修复静态Tls
add_compile_options(-fno-threadsafe-statics)

#OLLVM 间接全局  间接CALL 控制流混淆
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mllvm -irobf-icall -mllvm -irobf-indgv")

set(SDK_PATH "include/SDK/")


file(GLOB_RECURSE SOURCES 
"src/*.cpp"
"src/cheat/*.cpp"
)

set(IMGUI_ 
./include/imgui/imgui.cpp
# ./include/imgui/imgui_demo.cpp
./include/imgui/imgui_draw.cpp
./include/imgui/imgui_tables.cpp
./include/imgui/imgui_widgets.cpp
./include/imgui/backends/imgui_impl_dx11.cpp
./include/imgui/backends/imgui_impl_dx12.cpp
./include/imgui/backends/imgui_impl_win32.cpp
)

#引入外部库
include_directories(include/fmt/include)
link_directories(include/fmt)

include_directories(include/detour)
link_directories(include/detour)

#SDK
set(SDK_FILES
BasicTypes_Package.cpp
Engine_package.cpp
CoreUObject_Package.cpp
GPGameplay_Package.cpp
DFMGameplay_Package.cpp
BP_WeaponMeleeNoModular_Package.cpp
BP_InventoryPickup_Package.cpp
)

set(Sdk_)

foreach(file ${SDK_FILES})
    list(APPEND Sdk_ "${SDK_PATH}${file}")
endforeach()

add_library(${PROJECT_NAME} SHARED ${SOURCES} 
${IMGUI_}
${Sdk_}
)
set (HeadPath 
./include
./SDK
./include/DLLLoader
./include/cheat
./include/imgui
./include/render
)

target_include_directories(${PROJECT_NAME} PRIVATE ${HeadPath})

#设置输出路径
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/)

# 在CMake中启用预编译头文件
target_precompile_headers(${PROJECT_NAME} PUBLIC ./include/pch.h)

#vcpkg
find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)

find_package(magic_enum CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE magic_enum::magic_enum)


#外部库
target_link_libraries(${PROJECT_NAME} PRIVATE detours fmt)