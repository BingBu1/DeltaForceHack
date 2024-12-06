#pragma once
#include "BaseMenu.h"

using ProcessFunc         = std::function<bool(Dumper::UObject *_this, Dumper::UFunction *fn, void *parm, std::function<void(Dumper::UObject *_this, Dumper::UFunction *fn, void *parm)> OriginFunc)>;
using CallBack_ProssEvent = std::function<void(Dumper::UObject *_this, Dumper::UFunction *fn, void *parm)>;

#define MakeEventCallBack(name) bool name(Dumper::UObject *_this, Dumper::UFunction *fn, void *parm, std::function<void(Dumper::UObject * _this, Dumper::UFunction * fn, void *parm)> OriginFunc)

#define BIND_CLASSFUNC(Func) std::bind(Func, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3, std::placeholders::_4)

class CheatManager : public BaseMenu {
	public:
	static CheatManager *GetInstance() {
		if(!m_instance)
			m_instance = new CheatManager;
		return m_instance;
	}
	CheatManager();

	/// <summary>
	/// 初始化子作弊
	/// </summary>
	void Init();

	void Search();

	virtual MenuStatus GetStatus() {
		return MenuStatus::Esp;
	}
	virtual void DrawMenu(){};

	static void m_ProcessEvent(Dumper::UObject *_this, Dumper::UFunction *fn, void *parm){};

	static void AddProcessEventNotity(std::string FuncName, ProcessFunc func){};

	inline auto Get_Game() {
		return Game;
	}

	void OnGameThrad();

	private:
	inline static CheatManager *m_instance;
	inline static uint64_t Game{};
	std::unordered_map<std::string, ProcessFunc> ProcessEvent_map{};
};

inline PVOID VEH_HANDLE{};