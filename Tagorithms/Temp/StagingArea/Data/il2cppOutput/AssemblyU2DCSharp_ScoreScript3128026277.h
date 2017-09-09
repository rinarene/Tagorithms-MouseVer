#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// healthBarScript
struct healthBarScript_t854741124;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreScript
struct  ScoreScript_t3128026277  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ScoreScript::score
	int32_t ___score_2;
	// System.Int32 ScoreScript::health
	int32_t ___health_3;
	// System.Int32 ScoreScript::max_health
	int32_t ___max_health_4;
	// healthBarScript ScoreScript::healthBar
	healthBarScript_t854741124 * ___healthBar_5;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreScript_t3128026277, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(ScoreScript_t3128026277, ___health_3)); }
	inline int32_t get_health_3() const { return ___health_3; }
	inline int32_t* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(int32_t value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_max_health_4() { return static_cast<int32_t>(offsetof(ScoreScript_t3128026277, ___max_health_4)); }
	inline int32_t get_max_health_4() const { return ___max_health_4; }
	inline int32_t* get_address_of_max_health_4() { return &___max_health_4; }
	inline void set_max_health_4(int32_t value)
	{
		___max_health_4 = value;
	}

	inline static int32_t get_offset_of_healthBar_5() { return static_cast<int32_t>(offsetof(ScoreScript_t3128026277, ___healthBar_5)); }
	inline healthBarScript_t854741124 * get_healthBar_5() const { return ___healthBar_5; }
	inline healthBarScript_t854741124 ** get_address_of_healthBar_5() { return &___healthBar_5; }
	inline void set_healthBar_5(healthBarScript_t854741124 * value)
	{
		___healthBar_5 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
