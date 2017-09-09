#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Randomize
struct  Randomize_t3263753335  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] Randomize::algoType
	StringU5BU5D_t1642385972* ___algoType_2;
	// System.String Randomize::currentLevel
	String_t* ___currentLevel_3;
	// System.Collections.Generic.List`1<System.Int32> Randomize::completedLevels
	List_1_t1440998580 * ___completedLevels_4;
	// System.Int32 Randomize::curLevel
	int32_t ___curLevel_5;
	// System.Int32 Randomize::rand
	int32_t ___rand_6;
	// System.Int32 Randomize::rand2
	int32_t ___rand2_7;
	// System.Int32 Randomize::rand3
	int32_t ___rand3_8;
	// System.Int32 Randomize::maxBoid
	int32_t ___maxBoid_9;
	// System.Single Randomize::allignW
	float ___allignW_10;
	// System.Single Randomize::cohW
	float ___cohW_11;
	// System.Single Randomize::sepW
	float ___sepW_12;
	// System.Single Randomize::dirW
	float ___dirW_13;
	// System.Single Randomize::fwdW
	float ___fwdW_14;
	// System.Single Randomize::vecPStr
	float ___vecPStr_15;
	// System.Single Randomize::vecGStr
	float ___vecGStr_16;
	// System.Single Randomize::boidRad
	float ___boidRad_17;

public:
	inline static int32_t get_offset_of_algoType_2() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___algoType_2)); }
	inline StringU5BU5D_t1642385972* get_algoType_2() const { return ___algoType_2; }
	inline StringU5BU5D_t1642385972** get_address_of_algoType_2() { return &___algoType_2; }
	inline void set_algoType_2(StringU5BU5D_t1642385972* value)
	{
		___algoType_2 = value;
		Il2CppCodeGenWriteBarrier(&___algoType_2, value);
	}

	inline static int32_t get_offset_of_currentLevel_3() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___currentLevel_3)); }
	inline String_t* get_currentLevel_3() const { return ___currentLevel_3; }
	inline String_t** get_address_of_currentLevel_3() { return &___currentLevel_3; }
	inline void set_currentLevel_3(String_t* value)
	{
		___currentLevel_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentLevel_3, value);
	}

	inline static int32_t get_offset_of_completedLevels_4() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___completedLevels_4)); }
	inline List_1_t1440998580 * get_completedLevels_4() const { return ___completedLevels_4; }
	inline List_1_t1440998580 ** get_address_of_completedLevels_4() { return &___completedLevels_4; }
	inline void set_completedLevels_4(List_1_t1440998580 * value)
	{
		___completedLevels_4 = value;
		Il2CppCodeGenWriteBarrier(&___completedLevels_4, value);
	}

	inline static int32_t get_offset_of_curLevel_5() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___curLevel_5)); }
	inline int32_t get_curLevel_5() const { return ___curLevel_5; }
	inline int32_t* get_address_of_curLevel_5() { return &___curLevel_5; }
	inline void set_curLevel_5(int32_t value)
	{
		___curLevel_5 = value;
	}

	inline static int32_t get_offset_of_rand_6() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___rand_6)); }
	inline int32_t get_rand_6() const { return ___rand_6; }
	inline int32_t* get_address_of_rand_6() { return &___rand_6; }
	inline void set_rand_6(int32_t value)
	{
		___rand_6 = value;
	}

	inline static int32_t get_offset_of_rand2_7() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___rand2_7)); }
	inline int32_t get_rand2_7() const { return ___rand2_7; }
	inline int32_t* get_address_of_rand2_7() { return &___rand2_7; }
	inline void set_rand2_7(int32_t value)
	{
		___rand2_7 = value;
	}

	inline static int32_t get_offset_of_rand3_8() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___rand3_8)); }
	inline int32_t get_rand3_8() const { return ___rand3_8; }
	inline int32_t* get_address_of_rand3_8() { return &___rand3_8; }
	inline void set_rand3_8(int32_t value)
	{
		___rand3_8 = value;
	}

	inline static int32_t get_offset_of_maxBoid_9() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___maxBoid_9)); }
	inline int32_t get_maxBoid_9() const { return ___maxBoid_9; }
	inline int32_t* get_address_of_maxBoid_9() { return &___maxBoid_9; }
	inline void set_maxBoid_9(int32_t value)
	{
		___maxBoid_9 = value;
	}

	inline static int32_t get_offset_of_allignW_10() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___allignW_10)); }
	inline float get_allignW_10() const { return ___allignW_10; }
	inline float* get_address_of_allignW_10() { return &___allignW_10; }
	inline void set_allignW_10(float value)
	{
		___allignW_10 = value;
	}

	inline static int32_t get_offset_of_cohW_11() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___cohW_11)); }
	inline float get_cohW_11() const { return ___cohW_11; }
	inline float* get_address_of_cohW_11() { return &___cohW_11; }
	inline void set_cohW_11(float value)
	{
		___cohW_11 = value;
	}

	inline static int32_t get_offset_of_sepW_12() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___sepW_12)); }
	inline float get_sepW_12() const { return ___sepW_12; }
	inline float* get_address_of_sepW_12() { return &___sepW_12; }
	inline void set_sepW_12(float value)
	{
		___sepW_12 = value;
	}

	inline static int32_t get_offset_of_dirW_13() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___dirW_13)); }
	inline float get_dirW_13() const { return ___dirW_13; }
	inline float* get_address_of_dirW_13() { return &___dirW_13; }
	inline void set_dirW_13(float value)
	{
		___dirW_13 = value;
	}

	inline static int32_t get_offset_of_fwdW_14() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___fwdW_14)); }
	inline float get_fwdW_14() const { return ___fwdW_14; }
	inline float* get_address_of_fwdW_14() { return &___fwdW_14; }
	inline void set_fwdW_14(float value)
	{
		___fwdW_14 = value;
	}

	inline static int32_t get_offset_of_vecPStr_15() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___vecPStr_15)); }
	inline float get_vecPStr_15() const { return ___vecPStr_15; }
	inline float* get_address_of_vecPStr_15() { return &___vecPStr_15; }
	inline void set_vecPStr_15(float value)
	{
		___vecPStr_15 = value;
	}

	inline static int32_t get_offset_of_vecGStr_16() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___vecGStr_16)); }
	inline float get_vecGStr_16() const { return ___vecGStr_16; }
	inline float* get_address_of_vecGStr_16() { return &___vecGStr_16; }
	inline void set_vecGStr_16(float value)
	{
		___vecGStr_16 = value;
	}

	inline static int32_t get_offset_of_boidRad_17() { return static_cast<int32_t>(offsetof(Randomize_t3263753335, ___boidRad_17)); }
	inline float get_boidRad_17() const { return ___boidRad_17; }
	inline float* get_address_of_boidRad_17() { return &___boidRad_17; }
	inline void set_boidRad_17(float value)
	{
		___boidRad_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
