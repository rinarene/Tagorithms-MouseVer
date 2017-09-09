#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// healthBarScript
struct  healthBarScript_t854741124  : public MonoBehaviour_t1158329972
{
public:
	// System.Single healthBarScript::fillAmount
	float ___fillAmount_2;
	// System.Single healthBarScript::criticalHealth
	float ___criticalHealth_3;
	// UnityEngine.UI.Image healthBarScript::content_image
	Image_t2042527209 * ___content_image_4;

public:
	inline static int32_t get_offset_of_fillAmount_2() { return static_cast<int32_t>(offsetof(healthBarScript_t854741124, ___fillAmount_2)); }
	inline float get_fillAmount_2() const { return ___fillAmount_2; }
	inline float* get_address_of_fillAmount_2() { return &___fillAmount_2; }
	inline void set_fillAmount_2(float value)
	{
		___fillAmount_2 = value;
	}

	inline static int32_t get_offset_of_criticalHealth_3() { return static_cast<int32_t>(offsetof(healthBarScript_t854741124, ___criticalHealth_3)); }
	inline float get_criticalHealth_3() const { return ___criticalHealth_3; }
	inline float* get_address_of_criticalHealth_3() { return &___criticalHealth_3; }
	inline void set_criticalHealth_3(float value)
	{
		___criticalHealth_3 = value;
	}

	inline static int32_t get_offset_of_content_image_4() { return static_cast<int32_t>(offsetof(healthBarScript_t854741124, ___content_image_4)); }
	inline Image_t2042527209 * get_content_image_4() const { return ___content_image_4; }
	inline Image_t2042527209 ** get_address_of_content_image_4() { return &___content_image_4; }
	inline void set_content_image_4(Image_t2042527209 * value)
	{
		___content_image_4 = value;
		Il2CppCodeGenWriteBarrier(&___content_image_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
