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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InFrameScript
struct  InFrameScript_t2961646867  : public MonoBehaviour_t1158329972
{
public:
	// System.Single InFrameScript::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Vector3 InFrameScript::mousePos
	Vector3_t2243707580  ___mousePos_3;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(InFrameScript_t2961646867, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mousePos_3() { return static_cast<int32_t>(offsetof(InFrameScript_t2961646867, ___mousePos_3)); }
	inline Vector3_t2243707580  get_mousePos_3() const { return ___mousePos_3; }
	inline Vector3_t2243707580 * get_address_of_mousePos_3() { return &___mousePos_3; }
	inline void set_mousePos_3(Vector3_t2243707580  value)
	{
		___mousePos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
