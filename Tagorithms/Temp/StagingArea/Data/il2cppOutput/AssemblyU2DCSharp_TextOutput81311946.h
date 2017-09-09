#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// mainData
struct mainData_t1830211725;
// Randomize
struct Randomize_t3263753335;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextOutput
struct  TextOutput_t81311946  : public MonoBehaviour_t1158329972
{
public:
	// mainData TextOutput::data
	mainData_t1830211725 * ___data_2;
	// Randomize TextOutput::r
	Randomize_t3263753335 * ___r_3;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(TextOutput_t81311946, ___data_2)); }
	inline mainData_t1830211725 * get_data_2() const { return ___data_2; }
	inline mainData_t1830211725 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(mainData_t1830211725 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}

	inline static int32_t get_offset_of_r_3() { return static_cast<int32_t>(offsetof(TextOutput_t81311946, ___r_3)); }
	inline Randomize_t3263753335 * get_r_3() const { return ___r_3; }
	inline Randomize_t3263753335 ** get_address_of_r_3() { return &___r_3; }
	inline void set_r_3(Randomize_t3263753335 * value)
	{
		___r_3 = value;
		Il2CppCodeGenWriteBarrier(&___r_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
