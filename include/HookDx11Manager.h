#pragma once
#include "BaseMenu.h"
#include "imgui/backends/imgui_impl_dx12.h"
#include "imgui/backends/imgui_impl_dx11.h"
#include "imgui/backends/imgui_impl_win32.h"
#include "imgui/imconfig.h"
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include <d3d11.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <d3dcompiler.h>
#include <tuple>


#pragma comment(lib, "d3d11.lib")
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef HRESULT(APIENTRY *IDXGISwapChainPresent)(IDXGISwapChain3 *pSwapChain, UINT SyncInterval, UINT Flags);
typedef void(APIENTRY *DrawInstanced)(ID3D12GraphicsCommandList *dCommandList, UINT VertexCountPerInstance,
                                      UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
typedef void(APIENTRY *DrawIndexedInstanced)(ID3D12GraphicsCommandList *dCommandList, UINT IndexCountPerInstance,
                                             UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation,
                                             UINT StartInstanceLocation);
typedef void(APIENTRY *ExecuteCommandLists)(ID3D12CommandQueue *queue, UINT NumCommandLists,
                                            ID3D12CommandList *ppCommandLists);
struct Dx12Funtion {
  IDXGISwapChainPresent presentFunc;
  DrawInstanced drawInstancedFunc;
  DrawIndexedInstanced drawIndexedInstancedFunc;
  ExecuteCommandLists executeCommandListFunc;
};

struct _FrameContext {
	ID3D12CommandAllocator *CommandAllocator;
	ID3D12Resource *Resource;
	D3D12_CPU_DESCRIPTOR_HANDLE DescriptorHandle;
};

struct Dx12Interface {
	ID3D12Device *Device = nullptr;
	ID3D12DescriptorHeap *DescriptorHeapBackBuffers;
	ID3D12DescriptorHeap *DescriptorHeapImGuiRender;
	ID3D12GraphicsCommandList *CommandList;
	ID3D12CommandQueue *CommandQueue;



	UINT BuffersCounts = -1;
	_FrameContext *FrameContext;
};

class WindowsCreate {
public:
  WindowsCreate();
  ~WindowsCreate();
  inline HWND GetHwnd(){
	return WindowHwnd;
  }
private:
  WNDCLASSEX WindowClass;
  HWND WindowHwnd;
};

class HookDx11Manager : public BaseMenu {
	friend class HookDx12Manager;
	public:
	static HookDx11Manager *GetInstance() {
		if(!m_instance)
			m_instance = new HookDx11Manager;
		return m_instance;
	}
	HookDx11Manager();

	//@Hook Dx11
	void HookDx11();
	//@Hook Dx12
	void HookDx12();
	//@Hook 函数
	static HRESULT Present_Hook(IDXGISwapChain *pSwapChain, UINT SyncInterval, UINT Flags);
	//@Imgui初始化
	virtual void InitImgui();
	//@主绘制
	void MainDraw();
	//@侧边选项
	void DrawButton();
	//@窗口消息
	static LRESULT Wndproc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	//@添加一份Menu
	void AddMenu(BaseMenu *Base);
	//@添加多份Menu
	void AddMenu(std::vector<BaseMenu *> BaseVector);
	//@字体接口
	std::tuple<ImFont *, ImFont *, ImFont *, ImFont *> GetFonts();
	//@每帧开辟的线程
	void DrawThread();

	/// <summary>
	/// 获取Witdth和heigth
	/// </summary>
	/// <returns></returns>
	virtual std::tuple<int, int> GetWindowsRect();

	private:
	using pfn_Present = HRESULT (*)(IDXGISwapChain *pSwapChain, UINT SyncInterval, UINT Flags);
	inline static HookDx11Manager *m_instance;
	std::map<MenuStatus, std::string> CurrentTextMap;
	bool m_isinit;
	bool m_isDraw;
	pfn_Present Old_Present;
	IDXGISwapChain *p_swap;
	ID3D11Device *p_device;
	ID3D11DeviceContext *p_devicecontext;
	ID3D11RenderTargetView *pRenderTargetView;
	Dx12Funtion * Dx12;
	WNDPROC lpWndProc;
	MenuStatus CurrentStatus;
	int width, heigth{};

	public:
	ImFont *Font;
	ImFont *BigFont;
	ImFont *Dragon_Font;
	ImFont *Dragon_BigFont;
	ImFont *arialbd_Font;
	ImFont *Roboto_Bold_Font;
};

class HookDx12Manager : public HookDx11Manager {
	inline static Dx12Interface Dx12Api;

	public:
	HWND Hwnd;

	public:
	static HookDx12Manager *GetInstance() {
		if(!m_instance)
			m_instance = new HookDx12Manager;
		return static_cast<HookDx12Manager*>(m_instance);
	}
	HookDx12Manager() {};
	static HRESULT __stdcall Present_Hook(IDXGISwapChain3 *pChain, const UINT SyncInterval, const UINT Flags);
	static void ExecuteCommandLists_Hook(ID3D12CommandQueue *queue, UINT NumCommandLists, ID3D12CommandList *ppCommandLists);
	virtual void InitImgui() override;
	virtual std::tuple<int, int> GetWindowsRect() override;
};
