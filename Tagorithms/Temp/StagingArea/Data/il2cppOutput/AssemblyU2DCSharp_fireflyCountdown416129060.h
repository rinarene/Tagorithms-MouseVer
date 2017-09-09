#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fireflyCountdown
struct  fireflyCountdown_t416129060  : public MonoBehaviour_t1158329972
{
public:
	// System.String fireflyCountdown::countdown
	String_t* ___countdown_2;
	// System.Int32 fireflyCountdown::showCountdown
	int32_t ___showCountdown_3;

public:
	inline static int32_t get_offset_of_countdown_2() { return static_cast<int32_t>(offsetof(fireflyCountdown_t416129060, ___countdown_2)); }
	inline String_t* get_countdown_2() const { return ___countdown_2; }
	inline String_t** get_address_of_countdown_2() { return &___countdown_2; }
	inline void set_countdown_2(String_t* value)
	{
		___countdown_2 = value;
		Il2CppCodeGenWriteBarrier(&___countdown_2, value);
	}

	inline static int32_t get_offset_of_showCountdown_3() { return static_cast<int32_t>(offsetof(fireflyCountdown_t416129060, ___showCountdown_3)); }
	inline int32_t get_showCountdown_3() const { return ___showCountdown_3; }
	inline int32_t* get_address_of_showCountdown_3() { return &___showCountdown_3; }
	inline void set_showCountdown_3(int32_t value)
	{
		___showCountdown_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
