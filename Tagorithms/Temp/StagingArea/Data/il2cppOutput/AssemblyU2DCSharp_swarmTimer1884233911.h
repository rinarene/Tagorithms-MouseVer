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

// swarmTimer
struct  swarmTimer_t1884233911  : public MonoBehaviour_t1158329972
{
public:
	// System.Timers.Timer swarmTimer::LeTimer
	Timer_t4294691011 * ___LeTimer_2;
	// System.Single swarmTimer::timeLeft
	float ___timeLeft_3;
	// System.Single swarmTimer::timeTest
	float ___timeTest_4;
	// timerBar swarmTimer::barScript
	timerBar_t2386812534 * ___barScript_5;
	// ScoreScript swarmTimer::scoreScript
	ScoreScript_t3128026277 * ___scoreScript_6;
	// System.Single swarmTimer::currentTime
	float ___currentTime_7;
	// System.Single swarmTimer::startTime
	float ___startTime_8;

public:
	inline static int32_t get_offset_of_LeTimer_2() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___LeTimer_2)); }
	inline Timer_t4294691011 * get_LeTimer_2() const { return ___LeTimer_2; }
	inline Timer_t4294691011 ** get_address_of_LeTimer_2() { return &___LeTimer_2; }
	inline void set_LeTimer_2(Timer_t4294691011 * value)
	{
		___LeTimer_2 = value;
		Il2CppCodeGenWriteBarrier(&___LeTimer_2, value);
	}

	inline static int32_t get_offset_of_timeLeft_3() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___timeLeft_3)); }
	inline float get_timeLeft_3() const { return ___timeLeft_3; }
	inline float* get_address_of_timeLeft_3() { return &___timeLeft_3; }
	inline void set_timeLeft_3(float value)
	{
		___timeLeft_3 = value;
	}

	inline static int32_t get_offset_of_timeTest_4() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___timeTest_4)); }
	inline float get_timeTest_4() const { return ___timeTest_4; }
	inline float* get_address_of_timeTest_4() { return &___timeTest_4; }
	inline void set_timeTest_4(float value)
	{
		___timeTest_4 = value;
	}

	inline static int32_t get_offset_of_barScript_5() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___barScript_5)); }
	inline timerBar_t2386812534 * get_barScript_5() const { return ___barScript_5; }
	inline timerBar_t2386812534 ** get_address_of_barScript_5() { return &___barScript_5; }
	inline void set_barScript_5(timerBar_t2386812534 * value)
	{
		___barScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___barScript_5, value);
	}

	inline static int32_t get_offset_of_scoreScript_6() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___scoreScript_6)); }
	inline ScoreScript_t3128026277 * get_scoreScript_6() const { return ___scoreScript_6; }
	inline ScoreScript_t3128026277 ** get_address_of_scoreScript_6() { return &___scoreScript_6; }
	inline void set_scoreScript_6(ScoreScript_t3128026277 * value)
	{
		___scoreScript_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreScript_6, value);
	}

	inline static int32_t get_offset_of_currentTime_7() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___currentTime_7)); }
	inline float get_currentTime_7() const { return ___currentTime_7; }
	inline float* get_address_of_currentTime_7() { return &___currentTime_7; }
	inline void set_currentTime_7(float value)
	{
		___currentTime_7 = value;
	}

	inline static int32_t get_offset_of_startTime_8() { return static_cast<int32_t>(offsetof(swarmTimer_t1884233911, ___startTime_8)); }
	inline float get_startTime_8() const { return ___startTime_8; }
	inline float* get_address_of_startTime_8() { return &___startTime_8; }
	inline void set_startTime_8(float value)
	{
		___startTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
