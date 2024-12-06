#pragma once
#include "pch.h"
#include <fstream>
#include <concepts>
#include "imHotKey.h"

inline std::unordered_map<std::string, void*> configmap{};
inline nlohmann::json config_json;

#define InstallVar(x) x(x.Get_Value(),xorstr_(#x))
#define HotKetInit(x,y) x(x.Get_Value(),xorstr_(#x),y)
#define CONFIG_FILENAME "SaveConfig.json"
class configBase {
public:
	inline virtual void SaveJson(nlohmann::json &j) = 0;

	inline virtual void LoadJson(nlohmann::json &j) = 0;

	inline virtual void UpdateJsVar(){};
};

template <typename T>
concept Bool = std::same_as<T, bool>;

template <typename T>
class config : public configBase {
	public:

	using Type	    = T;
	const bool isbool   = typeid(bool) == typeid(Type);
	const bool isint    = typeid(int) == typeid(Type);
	const bool isfloat  = typeid(float) == typeid(Type);
	const bool isdouble = typeid(double) == typeid(Type);

	public:
	config()
	    : SaveType(), HasJsVar(), bind_jsvar(){};

	config(Type TT)
	    : SaveType(TT){};

	inline void Set_Value(Type a) {
		SaveType = a;
	}

	inline Type Get_Value() {
		return SaveType;
	}

	inline Type *Get_Ptr() {
		return &SaveType;
	}

	inline Type *operator&() {
		return Get_Ptr();
	}

	inline void operator=(Type Save) {
		this->SaveType = Save;
	}

	inline void operator()(Type Save, std::string_view Name) {
		SaveType	     = Save;
		Type_Name	     = Name;
		configmap[Type_Name] = this;
	}

	inline operator Type() {
		return Get_Value();
	}

	inline virtual void SaveJson(nlohmann::json &j) override {
		j[Type_Name] = SaveType;
		if constexpr(std::is_same_v<Type, std::string>){
			j[Type_Name] = static_cast<std::string>(SaveType).c_str();
		}
	}

	inline virtual void LoadJson(nlohmann::json &j) override {
		if(!j.contains(Type_Name))
			return;
		SaveType = j.at(Type_Name).get<Type>();
	}

	inline virtual void bindjs(const std::string_view &jsvar) {
		bind_jsvar = jsvar;
		HasJsVar   = true;
	}

	inline std::string_view get_bindjsname() {
		return bind_jsvar;
	}
	
	inline bool get_isbindjs(){
		return HasJsVar;
	}

	static inline config *Find(std::string_view Name) {
		if(configmap.count(Name.data())) {
			return configmap[Name.data()];
		}
		return nullptr;
	}

	protected:
	Type SaveType;
	std::string Type_Name{};
	bool HasJsVar{};
	std::string bind_jsvar{};

	private:
	void UpdateJsVar() override {
		if(bind_jsvar.size() == 0 || HasJsVar == false) {
			return;
		}
		// if constexpr(std::is_same_v<Type, bool>) {
		// 	WorldManager::ChangeJs_Var(this->get_bindjsname(), (bool)SaveType);
		// } else if constexpr(std::is_same_v<Type, int>) {
		// 	WorldManager::ChangeJs_Var(bind_jsvar, std::to_string(SaveType));
		// } else if constexpr(std::is_same_v<Type, float>) {
		// 	WorldManager::ChangeJs_Var(bind_jsvar, std::to_string(SaveType));
		// } else if constexpr(std::is_same_v<Type, double>) {
		// 	WorldManager::ChangeJs_Var(bind_jsvar, std::to_string(SaveType));
		// } else if constexpr(std::is_same_v<Type, std::string>) {
		// 	WorldManager::ChangeJs_Var(bind_jsvar, SaveType);
		// } else {
		// 	return;
		// }
		// return;
	}
};

template<typename T>
class HotKeyconfig : public config<T>{
public:
    HotKeyconfig () : config<T>(){
        hotkey.BindVar(this->Get_Ptr());
		hotkey.BindConfig_(this);
        hotkey.functionKeys = (int)-1;
        hotkey.functionName = nullptr;
        hotkey.functionLib = nullptr;
    };

    HotKeyconfig(config<T>::Type dd) : config<T>(dd){
        hotkey.BindVar(this->Get_Ptr());
		hotkey.BindConfig_(this);
        hotkey.functionKeys = (int)-1;
        hotkey.functionName = nullptr;
        hotkey.functionLib = nullptr;
    };

    inline virtual void SaveJson(nlohmann::json &j) override {
        j[this->Type_Name] = { this->SaveType, hotkey.functionKeys };
    }

    inline virtual void LoadJson(nlohmann::json &j) override {
        if(!j.count(this->Type_Name))
            return;
        this->SaveType = j[this->Type_Name][0];
        hotkey.functionKeys = 0;
        hotkey.functionKeys = j[this->Type_Name][1];
    }

    inline void operator()(config<T>::Type Save, std::string_view Name, std::string_view HotKeyBindName) {
        this->SaveType = Save;
        this->Type_Name = Name;
        this->hotkey.functionName = HotKeyBindName.data();
        configmap[this->Type_Name] = this;
    }

    inline ImHotKey::HotKey*GetHotKey(){
        return &hotkey;
    }
private:
    ImHotKey::HotKey hotkey{};
};



class configManager{
public:
    static configManager*GetInstance(){
        if(!instance)
            instance = new configManager;
        return instance;
    }

    inline bool SaveAllConfig() {
        FILE* File{};
        fopen_s(&File, CONFIG_FILENAME, "w+");
        if(!File)
            return false;
        for(auto [name, configclass] : configmap) {
            auto c_class = reinterpret_cast<config<bool>*>(configclass);
            auto Base_ = dynamic_cast<configBase*>(c_class);
            if(Base_){
                Base_->SaveJson(config_json);
            }
        }
        auto js_str = config_json.dump(4);
        fmt::print(File, "{}", js_str);
        fclose(File);
        return true;
    }

    inline bool LoadAllConfig() {
        std::fstream file(CONFIG_FILENAME);
        if(!file.is_open())
            return false;
        file >> config_json;
        for(auto [name, configclass] : configmap) {
            auto c_class = reinterpret_cast<config<bool> *>(configclass);
            auto Base_   = dynamic_cast<configBase *>(c_class);
            if(Base_) {
	            Base_->LoadJson(config_json);
            }
        }
        file.close();
        return true;
    }

    inline void GetHotkeys(std::vector<ImHotKey::HotKey*> &rh){
        for (auto &[name, configclass] : configmap) {
            auto c_class = reinterpret_cast<config<bool> *>(configclass);
            auto Base_   = dynamic_cast<HotKeyconfig<bool> *>(c_class);
            if(Base_) {
	            rh.push_back(Base_->GetHotKey());
            }
        }
    }

    static inline void UpdateAllJsVar() {
        for(auto &[name, config_] : configmap) {
            auto c_class = reinterpret_cast<config<bool> *>(config_);
            auto Base_   = dynamic_cast<configBase *>(c_class);
            if(Base_) {
	            Base_->UpdateJsVar();
            }
        }
    }

private:
    static inline configManager* instance{};
};

