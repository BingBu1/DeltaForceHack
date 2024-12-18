#include "pch.h"
#include "HookDx11Manager.h"
#include "Font.h"
#include "Font2.h"
#include "HookHelper.hpp"
#include "Translator.hpp"
#include "GWroldHelper.hpp"

HookDx11Manager::HookDx11Manager()
    : m_isinit(), Old_Present(), p_swap(), p_device(), p_devicecontext(),
      lpWndProc(), CurrentStatus(), m_isDraw(true) {
  CurrentTextMap[MenuStatus::Esp] = xorstr_(u8"透视");
  CurrentTextMap[MenuStatus::Norl] = xorstr_(u8"普通功能");
  CurrentTextMap[MenuStatus::Tp] = xorstr_(u8"传送");
  CurrentTextMap[MenuStatus::Config] = xorstr_(u8"杂项");
  // CurrentTextMap[MenuStatus::Debug] = xorstr_(u8"广告");
}

void HookDx11Manager::HookDx11() {
  const HWND hWnd = FindWindowA("UnrealWindow", nullptr);
  IDXGISwapChain *pSwapChain;

  constexpr D3D_FEATURE_LEVEL featureLevel = D3D_FEATURE_LEVEL_11_0;
  DXGI_SWAP_CHAIN_DESC swapChainDesc;
  ZeroMemory(&swapChainDesc, sizeof(swapChainDesc));
  swapChainDesc.BufferCount = 1;
  swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
  swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
  swapChainDesc.OutputWindow = hWnd;
  swapChainDesc.SampleDesc.Count = 1;
  swapChainDesc.Windowed = TRUE;
  swapChainDesc.BufferDesc.ScanlineOrdering =
      DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
  swapChainDesc.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
  swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

  ID3D11DeviceContext *pContext = nullptr;
  ID3D11Device *pDevice = nullptr;
  auto D3D11_STATE = D3D11CreateDeviceAndSwapChain(
      NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, NULL, &featureLevel, 1,
      D3D11_SDK_VERSION, &swapChainDesc, &pSwapChain, &pDevice, NULL,
      &pContext);
  while (FAILED(D3D11_STATE)) {
    swapChainDesc.OutputWindow = GetForegroundWindow();
    D3D11_STATE = D3D11CreateDeviceAndSwapChain(
        NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, NULL, &featureLevel, 1,
        D3D11_SDK_VERSION, &swapChainDesc, &pSwapChain, &pDevice, NULL,
        &pContext);
  }
  PULONG64 FunsTables = (PULONG64)(*(PULONG64)pSwapChain);
  HookHelper::SetVtTableHook(&(FunsTables[8]), &HookDx11Manager::Present_Hook,
                             &Old_Present);

  pDevice->Release();
  pContext->Release();
  pSwapChain->Release();
}

void HookDx11Manager::HookDx12(){
  WindowsCreate m_Windwos;
  HMODULE D3D12Module = GetModuleHandle("d3d12.dll");
  HMODULE DXGIModule = GetModuleHandle("dxgi.dll");
  if (D3D12Module == NULL || DXGIModule == NULL) {
    return;
  }
  void *CreateDXGIFactory = GetProcAddress(DXGIModule, "CreateDXGIFactory");
  if (CreateDXGIFactory == NULL) {
    return;
  }
  IDXGIFactory *Factory;
  if (((long(__stdcall *)(const IID &, void **))(CreateDXGIFactory))(
          __uuidof(IDXGIFactory), (void **)&Factory) < 0) {
    return;
  }
  IDXGIAdapter *Adapter;
  if (Factory->EnumAdapters(0, &Adapter) == DXGI_ERROR_NOT_FOUND) {
    return;
  }
  void *D3D12CreateDevice = GetProcAddress(D3D12Module, "D3D12CreateDevice");
  if (D3D12CreateDevice == nullptr) {
    return;
  }
  ID3D12Device *Device;
  if (((long(__stdcall *)(IUnknown *, D3D_FEATURE_LEVEL, const IID &, void **))(
          D3D12CreateDevice))(Adapter, D3D_FEATURE_LEVEL_11_0,
                              __uuidof(ID3D12Device), (void **)&Device) < 0) {
    return;
  }
  D3D12_COMMAND_QUEUE_DESC QueueDesc;
  QueueDesc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
  QueueDesc.Priority = 0;
  QueueDesc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
  QueueDesc.NodeMask = 0;
  ID3D12CommandQueue *CommandQueue;
  if (Device->CreateCommandQueue(&QueueDesc, __uuidof(ID3D12CommandQueue),
                                 (void **)&CommandQueue) < 0) {
    return;
  }

  ID3D12CommandAllocator *CommandAllocator;
  if (Device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT,
                                     __uuidof(ID3D12CommandAllocator),
                                     (void **)&CommandAllocator) < 0) {
    return;
  }

  ID3D12GraphicsCommandList *CommandList;
  if (Device->CreateCommandList(
          0, D3D12_COMMAND_LIST_TYPE_DIRECT, CommandAllocator, NULL,
          __uuidof(ID3D12GraphicsCommandList), (void **)&CommandList) < 0) {
    return;
  }

  DXGI_RATIONAL RefreshRate;
  RefreshRate.Numerator = 60;
  RefreshRate.Denominator = 1;
  DXGI_MODE_DESC BufferDesc;
  BufferDesc.Width = 100;
  BufferDesc.Height = 100;
  BufferDesc.RefreshRate = RefreshRate;
  BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
  BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
  BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

  DXGI_SAMPLE_DESC SampleDesc;
  SampleDesc.Count = 1;
  SampleDesc.Quality = 0;

  DXGI_SWAP_CHAIN_DESC SwapChainDesc = {};
  SwapChainDesc.BufferDesc = BufferDesc;
  SwapChainDesc.SampleDesc = SampleDesc;
  SwapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
  SwapChainDesc.BufferCount = 2;
  SwapChainDesc.OutputWindow = m_Windwos.GetHwnd();
  SwapChainDesc.Windowed = 1;
  SwapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
  SwapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

  IDXGISwapChain *SwapChain;
  if (Factory->CreateSwapChain(CommandQueue, &SwapChainDesc, &SwapChain) < 0) {
    return;
  }

  typedef uint64_t uintx_t;
  auto MethodsTable = (uintx_t *)::calloc(150, sizeof(uintx_t));
  memcpy(MethodsTable, *(uintx_t **)Device, 44 * sizeof(uintx_t));
  memcpy(MethodsTable + 44, *(uintx_t **)CommandQueue, 19 * sizeof(uintx_t));
  memcpy(MethodsTable + 44 + 19, *(uintx_t **)CommandAllocator,
         9 * sizeof(uintx_t));
  memcpy(MethodsTable + 44 + 19 + 9, *(uintx_t **)CommandList,
         60 * sizeof(uintx_t));
  memcpy(MethodsTable + 44 + 19 + 9 + 60, *(uintx_t **)SwapChain,
         18 * sizeof(uintx_t));
  this->Dx12 = new Dx12Funtion;
  this->Dx12->presentFunc =
      reinterpret_cast<decltype(this->Dx12->presentFunc)>(MethodsTable[140]);
  this->Dx12->drawInstancedFunc =
      reinterpret_cast<decltype(this->Dx12->drawInstancedFunc)>(
          MethodsTable[84]);
  this->Dx12->drawIndexedInstancedFunc =
      reinterpret_cast<decltype(this->Dx12->drawIndexedInstancedFunc)>(
          MethodsTable[85]);
  this->Dx12->executeCommandListFunc =
      reinterpret_cast<decltype(this->Dx12->executeCommandListFunc)>(
          MethodsTable[54]);

  Device->Release();
  Device = NULL;
  CommandQueue->Release();
  CommandQueue = NULL;
  CommandAllocator->Release();
  CommandAllocator = NULL;
  CommandList->Release();
  CommandList = NULL;
  SwapChain->Release();
  SwapChain = NULL;

  HookMessage::Install(Dx12->presentFunc, HookDx12Manager::Present_Hook);
  HookMessage::Install(Dx12->executeCommandListFunc, HookDx12Manager::ExecuteCommandLists_Hook);
}

HRESULT HookDx11Manager::Present_Hook(IDXGISwapChain *pSwapChain,
                                      UINT SyncInterval, UINT Flags) {
  HookDx11Manager *Dx11Hook = HookDx11Manager::GetInstance();
  if (!Dx11Hook->m_isinit) {
    Dx11Hook->p_swap = pSwapChain;
    Dx11Hook->InitImgui();
  }

  ImGui_ImplDX11_NewFrame();
  ImGui_ImplWin32_NewFrame();
  ImGui::NewFrame();

  Dx11Hook->MainDraw();

  ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 5.f);
  ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(43.f / 255.f, 43.f /255.f, 43.f / 255.f, 100.f / 255.f)); ImGui::PopStyleVar(1);    // Don'tforget to Pop() 
  ImGui::PopStyleColor(1);

  ImGui::EndFrame();
  ImGui::Render();
  Dx11Hook->p_devicecontext->OMSetRenderTargets(1,
  &Dx11Hook->pRenderTargetView, nullptr);
  //
  // Dx11Hook->p_devicecontext->ClearRenderTargetView(Dx11Hook->pRenderTargetView,(float*)&clear_color); ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

  std::thread(std::bind(&HookDx11Manager::DrawThread,
  HookDx11Manager::GetInstance())).detach();
  return Dx11Hook->Old_Present(pSwapChain, SyncInterval, Flags);
  ;
}

void HookDx11Manager::InitImgui() {

  ImGui::CreateContext();
  ImGuiIO &Io = ImGui::GetIO();

  ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;
  DXGI_SWAP_CHAIN_DESC Desc;
  p_swap->GetDesc(&Desc);
  auto Hwnd = Desc.OutputWindow;
  RECT rc{};
  GetClientRect(Hwnd, &rc);
  width = rc.right - rc.left;
  heigth = rc.bottom - rc.top;

  auto DXGI_SULT = p_swap->GetDevice(__uuidof(ID3D11Device),
                                     reinterpret_cast<void **>(&(p_device)));
  if (FAILED(DXGI_SULT)) {
    return;
  }
  p_device->GetImmediateContext(&p_devicecontext);

  ImFontConfig FontConfig;
  FontConfig.FontDataOwnedByAtlas = false;

  // arialbd_Font	 =
  // Io.Fonts->AddFontFromMemoryCompressedBase85TTF(arialbd_compressed_data_base85,
  // 18.f, &FontConfig, Io.Fonts->GetGlyphRangesChineseFull()); Roboto_Bold_Font
  // =
  // Io.Fonts->AddFontFromMemoryCompressedBase85TTF(Roboto_Bold_compressed_data_base85,
  // 18.f, &FontConfig, Io.Fonts->GetGlyphRangesVietnamese());
 
  Dragon_Font = Io.Fonts->AddFontFromMemoryTTF(
      (PVOID)ImageFont_data, ImageFont_size, 18.0f, &FontConfig,
      Io.Fonts->GetGlyphRangesChineseFull()); // 内存载入字体速度很快
  Dragon_BigFont = Io.Fonts->AddFontFromMemoryTTF(
      (PVOID)ImageFont_data, ImageFont_size, 24.0f, &FontConfig,
      Io.Fonts->GetGlyphRangesChineseFull()); // 内存载入字体速度很快

  Font = Io.Fonts->AddFontFromMemoryTTF(
      (PVOID)NewFont_data, NewFont_size, 18.0f, &FontConfig,
      Io.Fonts->GetGlyphRangesChineseFull()); // 内存载入字体速度很快
  BigFont = Io.Fonts->AddFontFromMemoryTTF(
      (PVOID)NewFont_data, NewFont_size, 21.0f, &FontConfig,
      Io.Fonts->GetGlyphRangesChineseFull()); // 内存载入字体速度很快
 
  ImGui::StyleColorsDark();

  ImGui::GetStyle().FrameRounding = 10.f;

  ImGui_ImplWin32_Init(Hwnd);
  ImGui_ImplDX11_Init(p_device, p_devicecontext);
 
  while (!lpWndProc)
    lpWndProc = (WNDPROC)SetWindowLongPtrA(Hwnd, GWLP_WNDPROC,
                                           (LONG_PTR)&HookDx11Manager::Wndproc);

  ID3D11Texture2D *pBackBuffer{};
  p_swap->GetBuffer(0, __uuidof(ID3D11Texture2D),
                    reinterpret_cast<LPVOID *>(&pBackBuffer));

  if (pBackBuffer) {
    p_device->CreateRenderTargetView(pBackBuffer, nullptr, &pRenderTargetView);
    pBackBuffer->Release();
  }
  Io.IniFilename = nullptr;
  m_isinit = true;
}

void HookDx11Manager::MainDraw() {
  static bool isInitImguiWindows = false;
  static std::map<std::string, bool> InitMap{};
  const char *name = TR(u8"北极星");

  if (!InitMap.contains(name)) {
    ImGui::SetNextWindowSize(ImVec2(700, 400));
    InitMap[name] = true;
  }

  ImGui::PushFont(Translator::GetCurrentFont());
  if (m_isDraw) {

    ImGui::Begin(name, &m_isDraw);

    ImGui::Columns(2);
    ImGui::SetColumnOffset(1, ImGui::GetWindowWidth() - 158.f);

    ImGui::BeginChild(xorstr_("FeaturesChild"), ImVec2(0, -1), true);
    ImGui::PushFont(Dragon_BigFont);

    ImGui::BulletText("%s", Translator::RuntimerTranslate(
                                (CurrentTextMap[this->CurrentStatus]))
                                .c_str());
    ImGui::Separator();
    ImGui::TextColored(ImGui::GetStyle().Colors[ImGuiCol_Button],
                       xorstr_(u8"FPS %.1f FPS"), ImGui::GetIO().Framerate);
    ImGui::Separator();
    ImGui::PopFont();
    auto LowClass = dynamic_cast<BaseMenu *>(this);
    if (LowClass) {
      auto drawlist = (*LowClass->GetDrawList())[CurrentStatus];
      for (auto i : drawlist) {
        i->DrawMenu();
      }
    }
    ImGui::EndChild();
    ImGui::NextColumn();
    DrawButton();
    ImGui::End();
  }
  auto LowClass = dynamic_cast<BaseMenu *>(this);
  for (auto &[status, menu] : *LowClass->GetDrawList()) {
    for (auto &draw : menu) {
      draw->AlwaysDraw();
    }
  }
  ImGui::PopFont();
}

void HookDx11Manager::DrawButton() {
  auto &Currnt_Style = ImGui::GetStyle();
  static ImVec4 Color = Currnt_Style.Colors[ImGuiCol_Button];
  static ImVec4 Color2 = Currnt_Style.Colors[ImGuiCol_ButtonActive]; // 选择

  auto Windows = ImGui::GetCurrentWindow();
  auto DrawList = ImGui::GetWindowDrawList();
  ImGui::NewLine();
  ImGui::Spacing();
  for (auto &[Type, Name] : CurrentTextMap) {
    ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_Button,
                          CurrentStatus == Type ? Color2 : Color);
    if (ImGui::Button(Translator::RuntimerTranslate(Name).c_str(),
                      ImVec2(110, 40))) {
      CurrentStatus = Type;
    }
    ImGui::Spacing();
  }
  ImGui::PopStyleColor(CurrentTextMap.size());
  ImGui::SetCursorPosY(ImGui::GetWindowHeight());
  ImGui::PushFont(Dragon_BigFont);
  DrawList->AddText(
      ImVec2((Windows->DC.CursorPos.x + 15.f),
             Windows->DC.CursorPos.y - (ImGui::GetWindowHeight() - 28.f)),
      ImColor(ImGui::GetStyle().Colors[ImGuiCol_Text]), xorstr_(u8"MingChao"));
  ImGui::PopFont();
  ImGui::Spacing();
}

LRESULT HookDx11Manager::Wndproc(HWND hwnd, UINT uMsg, WPARAM wParam,
                                 LPARAM lParam) {
  auto Manager = HookDx11Manager::GetInstance();
  switch (uMsg) {
  case WM_KEYUP:
    if (wParam == VK_HOME) {
      Manager->m_isDraw = Manager->m_isDraw ? false : true;
    }
    break;
  };

  auto LowClass = dynamic_cast<BaseMenu *>(Manager);
  if (LowClass) {
    for (auto &[status, menu] : *LowClass->GetDrawList()) {
      for (auto &draw : menu) {
        draw->Wndproc(uMsg, wParam, lParam);
      }
    }
  }

  ImGui_ImplWin32_WndProcHandler(hwnd, uMsg, wParam, lParam);

  return CallWindowProc(HookDx11Manager::GetInstance()->lpWndProc, hwnd, uMsg,
                        wParam, lParam);
}

void HookDx11Manager::AddMenu(BaseMenu *Base) { BaseMenu::AddMenu(Base); }


void HookDx11Manager::AddMenu(std::vector<BaseMenu *> BaseVector) {
  BaseMenu::AddMenu(BaseVector);
}

std::tuple<ImFont *, ImFont *, ImFont *, ImFont *> HookDx11Manager::GetFonts() {
  return std::tuple<ImFont *, ImFont *, ImFont *, ImFont *>(
      Font, BigFont, Dragon_Font, Dragon_BigFont);
}

void HookDx11Manager::DrawThread() {
  auto LowClass = dynamic_cast<BaseMenu *>(this);
  for (auto &[status, menu] : *LowClass->GetDrawList()) {
    for (auto &draw : menu) {
      draw->OnThread();
    }
  }
}

std::tuple<int, int> HookDx11Manager::GetWindowsRect() {
  RECT rc{};
  DXGI_SWAP_CHAIN_DESC Desc;
  if (!p_swap)
    return {0, 0};
  p_swap->GetDesc(&Desc);
  auto Hwnd = Desc.OutputWindow;
  GetClientRect(Hwnd, &rc);
  width = rc.right - rc.left;
  heigth = rc.bottom - rc.top;
  return {this->width, this->heigth};
}

WindowsCreate::WindowsCreate(){
  WindowClass.cbSize = sizeof(WNDCLASSEX);
WindowClass.style = CS_HREDRAW | CS_VREDRAW;
WindowClass.lpfnWndProc = DefWindowProc;
WindowClass.cbClsExtra = 0;
WindowClass.cbWndExtra = 0;
WindowClass.hInstance = GetModuleHandle(NULL);
WindowClass.hIcon = NULL;
WindowClass.hCursor = NULL;
WindowClass.hbrBackground = NULL;
WindowClass.lpszMenuName = NULL;
WindowClass.lpszClassName = "FuckAll";
WindowClass.hIconSm = NULL;
RegisterClassEx(&WindowClass);
WindowHwnd = CreateWindow(WindowClass.lpszClassName, "DirectX Window", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, NULL,
                          NULL, WindowClass.hInstance, NULL);
}

WindowsCreate::~WindowsCreate(){
   DestroyWindow(WindowHwnd);
   UnregisterClass(WindowClass.lpszClassName, WindowClass.hInstance);
}


HRESULT HookDx12Manager::Present_Hook(IDXGISwapChain3 *pChain, const UINT SyncInterval, const UINT Flags){
  static bool is_init = false;
  if (!is_init) {
    auto result = (HRESULT)pChain->GetDevice(
        __uuidof(Dx12Api.Device), reinterpret_cast<void **>(&Dx12Api.Device));
    if (!SUCCEEDED(result)) {
      return callOrigin(Present_Hook, pChain, SyncInterval, Flags);
    }
    DXGI_SWAP_CHAIN_DESC Desc;
    pChain->GetDesc(&Desc);
    Desc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    Desc.Windowed = ((GetWindowLongPtr(Desc.OutputWindow, GWL_STYLE) & WS_POPUP) != 0) ? false : true;
    Dx12Api.BuffersCounts = Desc.BufferCount;
    Dx12Api.FrameContext		     = new _FrameContext[Dx12Api.BuffersCounts];
    D3D12_DESCRIPTOR_HEAP_DESC DescriptorImGuiRender = {};
    DescriptorImGuiRender.Type		     = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    DescriptorImGuiRender.NumDescriptors	     = Dx12Api.BuffersCounts;
    DescriptorImGuiRender.Flags		     = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    if(Dx12Api.Device->CreateDescriptorHeap(&DescriptorImGuiRender, IID_PPV_ARGS(&Dx12Api.DescriptorHeapImGuiRender)) != S_OK) {
	    return callOrigin(Present_Hook, pChain, SyncInterval, Flags);
    }

    ID3D12CommandAllocator *Allocator;
    if(Dx12Api.Device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&Allocator)) != S_OK)
	    return callOrigin(Present_Hook, pChain, SyncInterval, Flags);
    for(size_t i = 0; i < Dx12Api.BuffersCounts; i++) {
	    Dx12Api.FrameContext[i].CommandAllocator = Allocator;
    }

    if(Dx12Api.Device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, Allocator, NULL, IID_PPV_ARGS(&Dx12Api.CommandList)) != S_OK || Dx12Api.CommandList->Close() != S_OK)
	    return callOrigin(Present_Hook, pChain, SyncInterval, Flags);

    D3D12_DESCRIPTOR_HEAP_DESC DescriptorBackBuffers;
    DescriptorBackBuffers.Type	         = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    DescriptorBackBuffers.NumDescriptors = Dx12Api.BuffersCounts;
    DescriptorBackBuffers.Flags	         = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    DescriptorBackBuffers.NodeMask       = 1;
    if(Dx12Api.Device->CreateDescriptorHeap(
           &DescriptorBackBuffers, IID_PPV_ARGS(&Dx12Api.DescriptorHeapBackBuffers))
       != S_OK)
	    return callOrigin(Present_Hook, pChain, SyncInterval, Flags);

    const auto RTVDescriptorSize =
        Dx12Api.Device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    D3D12_CPU_DESCRIPTOR_HANDLE RTVHandle =
        Dx12Api.DescriptorHeapBackBuffers->GetCPUDescriptorHandleForHeapStart();

    for(uint32_t i = 0; i < Dx12Api.BuffersCounts; i++) {
	    ID3D12Resource *pBackBuffer		         = nullptr;
	    Dx12Api.FrameContext[i].DescriptorHandle = RTVHandle;
	    pChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
	    Dx12Api.Device->CreateRenderTargetView(pBackBuffer, nullptr, RTVHandle);
	    Dx12Api.FrameContext[i].Resource = pBackBuffer;
	    RTVHandle.ptr += RTVDescriptorSize;
    }
    auto dx12 = HookDx12Manager::GetInstance();
    dx12->Hwnd = Desc.OutputWindow;
    dx12->InitImgui();
    SetWindowDisplayAffinity(GetInstance()->Hwnd, WDA_EXCLUDEFROMCAPTURE);
    // D3D12_VIEWPORT viewport = {};
    // viewport.TopLeftX       = 0;
    // viewport.TopLeftY       = 0;
    // viewport.MinDepth       = 0.0f;
    // viewport.MaxDepth       = 1.0f;
    // Dx12Api.CommandList->RSSetViewports(1, &viewport);

    is_init = true;
  }

  if(!is_init || Dx12Api.CommandQueue == nullptr)
	  return callOrigin(Present_Hook, pChain, SyncInterval, Flags);

  auto dx12 = HookDx12Manager::GetInstance();
  ImGui_ImplDX12_NewFrame();
  ImGui_ImplWin32_NewFrame();
  ImGui::NewFrame();

  dx12->MainDraw();

  ImGui::EndFrame();
  ImGui::Render();

  _FrameContext &CurrentFrameContext = Dx12Api.FrameContext[pChain->GetCurrentBackBufferIndex()];
  CurrentFrameContext.CommandAllocator->Reset();

  D3D12_RESOURCE_BARRIER Barrier;
  Barrier.Type		 = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
  Barrier.Flags		 = D3D12_RESOURCE_BARRIER_FLAG_NONE;
  Barrier.Transition.pResource	 = CurrentFrameContext.Resource;
  Barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
  Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
  Barrier.Transition.StateAfter	 = D3D12_RESOURCE_STATE_RENDER_TARGET;

  Dx12Api.CommandList->Reset(CurrentFrameContext.CommandAllocator, nullptr);
  Dx12Api.CommandList->ResourceBarrier(1, &Barrier);
  Dx12Api.CommandList->OMSetRenderTargets(1, &CurrentFrameContext.DescriptorHandle, FALSE, nullptr);
  Dx12Api.CommandList->SetDescriptorHeaps(1, &Dx12Api.DescriptorHeapImGuiRender);

	ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData(), dx12->Dx12Api.CommandList);

  Barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
  Barrier.Transition.StateAfter	 = D3D12_RESOURCE_STATE_PRESENT;
  Dx12Api.CommandList->ResourceBarrier(1, &Barrier);
  Dx12Api.CommandList->Close();
  Dx12Api.CommandQueue->ExecuteCommandLists(
      1, reinterpret_cast<ID3D12CommandList *const *>(&Dx12Api.CommandList));

  
  return callOrigin(Present_Hook, pChain, SyncInterval, Flags);
}

void HookDx12Manager::ExecuteCommandLists_Hook(ID3D12CommandQueue *queue, UINT NumCommandLists, ID3D12CommandList *ppCommandLists) {
	if(Dx12Api.CommandQueue == nullptr) {
		Dx12Api.CommandQueue = queue;
	}
	callOrigin(ExecuteCommandLists_Hook, queue, NumCommandLists,
	           ppCommandLists);
}

void HookDx12Manager::InitImgui() {

	ImGui::CreateContext();
	ImGuiIO &Io = ImGui::GetIO();

	ImGui::GetIO().ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange;
	RECT rc{};
	GetClientRect(Hwnd, &rc);
	width  = rc.right - rc.left;
	heigth = rc.bottom - rc.top;
	ImFontConfig FontConfig;
	FontConfig.FontDataOwnedByAtlas = false;

	Dragon_Font = Io.Fonts->AddFontFromMemoryTTF(
	    (PVOID)ImageFont_data, ImageFont_size, 18.0f, &FontConfig,
	    Io.Fonts->GetGlyphRangesChineseFull());    // 内存载入字体速度很快
	Dragon_BigFont = Io.Fonts->AddFontFromMemoryTTF(
	    (PVOID)ImageFont_data, ImageFont_size, 24.0f, &FontConfig,
	    Io.Fonts->GetGlyphRangesChineseFull());    // 内存载入字体速度很快

	Font = Io.Fonts->AddFontFromMemoryTTF(
	    (PVOID)NewFont_data, NewFont_size, 18.0f, &FontConfig,
	    Io.Fonts->GetGlyphRangesChineseFull());    // 内存载入字体速度很快
	BigFont = Io.Fonts->AddFontFromMemoryTTF(
	    (PVOID)NewFont_data, NewFont_size, 21.0f, &FontConfig,
	    Io.Fonts->GetGlyphRangesChineseFull());    // 内存载入字体速度很快

	ImGui_ImplWin32_Init(Hwnd);
	ImGui_ImplDX12_Init(Dx12Api.Device, Dx12Api.BuffersCounts, DXGI_FORMAT_R8G8B8A8_UNORM, Dx12Api.DescriptorHeapImGuiRender,
		    Dx12Api.DescriptorHeapImGuiRender->GetCPUDescriptorHandleForHeapStart(), Dx12Api.DescriptorHeapImGuiRender->GetGPUDescriptorHandleForHeapStart());

	ImGui::StyleColorsDark();

	ImGui::GetStyle().FrameRounding = 10.f;


	while(!lpWndProc)
		lpWndProc = (WNDPROC)SetWindowLongPtrA(Hwnd, GWLP_WNDPROC, (LONG_PTR)&HookDx11Manager::Wndproc);

	Io.IniFilename = nullptr;
}
std::tuple<int, int> HookDx12Manager::GetWindowsRect() {
	RECT rc{};
	GetClientRect(Hwnd, &rc);
	width  = rc.right - rc.left;
	heigth = rc.bottom - rc.top;
	return { this->width, this->heigth };
}
