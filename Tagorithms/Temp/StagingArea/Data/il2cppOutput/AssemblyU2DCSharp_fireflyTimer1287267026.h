#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Timers.Timer
struct Timer_t4294691011;
// timerBar
struct timerBar_t2386812534;
// ScoreScript
struct ScoreScript_t3128026277;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fireflyTimer
struct  fireflyTimer_t1287267026  : public MonoBehaviour_t1158329972
{
public:
	// System.Timers.Timer fireflyTimer::LeTimer
	Timer_t4294691011 * ___LeTimer_2;
	// System.Single fireflyTimer::timeLeft
	float ___timeLeft_3;
	// timerBar fireflyTimer::barScript
	timerBar_t2386812534 * ___barScript_4;
	// ScoreScript fireflyTimer::scoreScript
	ScoreScript_t3128026277 * ___scoreScript_5;
	// System.Single fireflyTimer::currentTime
	float ___currentTime_6;
	// System.Single fireflyTimer::startTime
	float ___startTime_7;

public:
	inline static int32_t get_offset_of_LeTimer_2() { return static_cast<int32_t>(offsetof(fireflyTimer_t1287267026, ___LeTimer_2)); }
	inline Timer_t4294691011 * get_LeTimer_2() const { return ___LeTimer_2; }
	inline Timer_t4294691011 ** get_address_of_LeTimer_2() { return &___LeTimer_2; }
	inline void set_LeTimer_2(Timer_t4294691011 * value)
	{
		___LeTimer_2 = value;
		Il2CppCodeGenWriteBarrier(&___LeTimer_2, value);
	}

	inline static int32_t get_offset_of_timeLeft_3() { return static_cast<int32_t>(offsetof(fireflyTimer_t1287267026, ___timeLeft_3)); }
	inline float get_timeLeft_3() const { return ___timeLeft_3; }
	inline float* get_address_of_timeLeft_3() { return &___timeLeft_3; }
	inline void set_timeLeft_3(float value)
	{
		___timeLeft_3 = value;
	}

	inline static int32_t get_offset_of_barScript_4() { return static_cast<int32_t>(offsetof(fireflyTimer_t1287267026, ___barScript_4)); }
	inline timerBar_t2386812534 * get_barScript_4() const { return ___barScript_4; }
	inline timerBar_t2386812534 ** get_address_of_barScript_4() { return &___barScript_4; }
	inline void set_barScript_4(timerBar_t2386812534 * value)
	{
		___barScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___barScript_4, value);
	}

	inline static int32_t get_offset_of_scoreScript_5() { return static_cast<int32_t>(offsetof(fireflyTimer_t1287267026, ___scoreScript_5)); }
	inline ScoreScript_t3128026277 * get_scoreScript_5() const { return ___scoreScript_5; }
	inline ScoreScript_t3128026277 ** get_address_of_scoreScript_5() { return &___scoreScript_5; }
	inline void set_scoreScript_5(ScoreScript_t3128026277 * value)
	{
		___scoreScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoreScript_5, value);
	}

	inline static int32_t get_offset_of_currentTime_6() { return static_cast<int32_t>(offsetof(fireflyTimer_t1287267026, ___currentTime_6)); }
	inline float get_currentTime_6() const { return ___currentTime_6; }
	inline float* get_address_of_currentTime_6() { return &___currentTime_6; }
	inline void set_currentTime_6(float value)
	{
		___currentTime_6 = value;
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(fireflyTimer_t1287267026, ___startTime_7)); }
	inline float get_startTime_7() const { return ___startTime_7; }
	inline float* get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(float value)
	{
		___startTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
