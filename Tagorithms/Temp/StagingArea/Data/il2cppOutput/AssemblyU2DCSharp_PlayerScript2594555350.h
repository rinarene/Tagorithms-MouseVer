#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// ScoreScript
struct ScoreScript_t3128026277;
// mainData
struct mainData_t1830211725;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 PlayerScript::mousePos
	Vector3_t2243707580  ___mousePos_2;
	// ScoreScript PlayerScript::scoreScript
	ScoreScript_t3128026277 * ___scoreScript_3;
	// mainData PlayerScript::data
	mainData_t1830211725 * ___data_4;
	// System.Int32 PlayerScript::type
	int32_t ___type_5;
	// System.Single PlayerScript::touchId
	float ___touchId_6;

public:
	inline static int32_t get_offset_of_mousePos_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___mousePos_2)); }
	inline Vector3_t2243707580  get_mousePos_2() const { return ___mousePos_2; }
	inline Vector3_t2243707580 * get_address_of_mousePos_2() { return &___mousePos_2; }
	inline void set_mousePos_2(Vector3_t2243707580  value)
	{
		___mousePos_2 = value;
	}

	inline static int32_t get_offset_of_scoreScript_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___scoreScript_3)); }
	inline ScoreScript_t3128026277 * get_scoreScript_3() const { return ___scoreScript_3; }
	inline ScoreScript_t3128026277 ** get_address_of_scoreScript_3() { return &___scoreScript_3; }
	inline void set_scoreScript_3(ScoreScript_t3128026277 * value)
	{
		___scoreScript_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreScript_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___data_4)); }
	inline mainData_t1830211725 * get_data_4() const { return ___data_4; }
	inline mainData_t1830211725 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(mainData_t1830211725 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_touchId_6() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___touchId_6)); }
	inline float get_touchId_6() const { return ___touchId_6; }
	inline float* get_address_of_touchId_6() { return &___touchId_6; }
	inline void set_touchId_6(float value)
	{
		___touchId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
