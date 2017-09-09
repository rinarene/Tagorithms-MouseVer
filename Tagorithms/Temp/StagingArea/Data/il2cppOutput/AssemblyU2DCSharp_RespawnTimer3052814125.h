#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// GameSettings
struct GameSettings_t3904429265;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RespawnTimer
struct  RespawnTimer_t3052814125  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RespawnTimer::respawnTime
	float ___respawnTime_2;
	// System.Single RespawnTimer::respawnRef
	float ___respawnRef_3;
	// System.Int32 RespawnTimer::randAddRespawn
	int32_t ___randAddRespawn_4;
	// System.Int32 RespawnTimer::randAdd
	int32_t ___randAdd_5;
	// System.Boolean RespawnTimer::respawnBool
	bool ___respawnBool_6;
	// System.Int32 RespawnTimer::heightPos
	int32_t ___heightPos_7;
	// System.Int32 RespawnTimer::algoType
	int32_t ___algoType_8;
	// GameSettings RespawnTimer::Settings
	GameSettings_t3904429265 * ___Settings_9;

public:
	inline static int32_t get_offset_of_respawnTime_2() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___respawnTime_2)); }
	inline float get_respawnTime_2() const { return ___respawnTime_2; }
	inline float* get_address_of_respawnTime_2() { return &___respawnTime_2; }
	inline void set_respawnTime_2(float value)
	{
		___respawnTime_2 = value;
	}

	inline static int32_t get_offset_of_respawnRef_3() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___respawnRef_3)); }
	inline float get_respawnRef_3() const { return ___respawnRef_3; }
	inline float* get_address_of_respawnRef_3() { return &___respawnRef_3; }
	inline void set_respawnRef_3(float value)
	{
		___respawnRef_3 = value;
	}

	inline static int32_t get_offset_of_randAddRespawn_4() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___randAddRespawn_4)); }
	inline int32_t get_randAddRespawn_4() const { return ___randAddRespawn_4; }
	inline int32_t* get_address_of_randAddRespawn_4() { return &___randAddRespawn_4; }
	inline void set_randAddRespawn_4(int32_t value)
	{
		___randAddRespawn_4 = value;
	}

	inline static int32_t get_offset_of_randAdd_5() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___randAdd_5)); }
	inline int32_t get_randAdd_5() const { return ___randAdd_5; }
	inline int32_t* get_address_of_randAdd_5() { return &___randAdd_5; }
	inline void set_randAdd_5(int32_t value)
	{
		___randAdd_5 = value;
	}

	inline static int32_t get_offset_of_respawnBool_6() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___respawnBool_6)); }
	inline bool get_respawnBool_6() const { return ___respawnBool_6; }
	inline bool* get_address_of_respawnBool_6() { return &___respawnBool_6; }
	inline void set_respawnBool_6(bool value)
	{
		___respawnBool_6 = value;
	}

	inline static int32_t get_offset_of_heightPos_7() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___heightPos_7)); }
	inline int32_t get_heightPos_7() const { return ___heightPos_7; }
	inline int32_t* get_address_of_heightPos_7() { return &___heightPos_7; }
	inline void set_heightPos_7(int32_t value)
	{
		___heightPos_7 = value;
	}

	inline static int32_t get_offset_of_algoType_8() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___algoType_8)); }
	inline int32_t get_algoType_8() const { return ___algoType_8; }
	inline int32_t* get_address_of_algoType_8() { return &___algoType_8; }
	inline void set_algoType_8(int32_t value)
	{
		___algoType_8 = value;
	}

	inline static int32_t get_offset_of_Settings_9() { return static_cast<int32_t>(offsetof(RespawnTimer_t3052814125, ___Settings_9)); }
	inline GameSettings_t3904429265 * get_Settings_9() const { return ___Settings_9; }
	inline GameSettings_t3904429265 ** get_address_of_Settings_9() { return &___Settings_9; }
	inline void set_Settings_9(GameSettings_t3904429265 * value)
	{
		___Settings_9 = value;
		Il2CppCodeGenWriteBarrier(&___Settings_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
