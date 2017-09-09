#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2766455145;
// System.Random
struct Random_t1044426839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GerateMTurkNumber
struct  GerateMTurkNumber_t4176472336  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GerateMTurkNumber_t4176472336_StaticFields
{
public:
	// System.Int32 GerateMTurkNumber::fileOffset
	int32_t ___fileOffset_2;
	// System.Collections.Generic.List`1<System.Byte[]> GerateMTurkNumber::outFileList
	List_1_t2766455145 * ___outFileList_3;
	// System.Random GerateMTurkNumber::rng
	Random_t1044426839 * ___rng_4;
	// System.Int64 GerateMTurkNumber::MTurkGerationNumber
	int64_t ___MTurkGerationNumber_5;

public:
	inline static int32_t get_offset_of_fileOffset_2() { return static_cast<int32_t>(offsetof(GerateMTurkNumber_t4176472336_StaticFields, ___fileOffset_2)); }
	inline int32_t get_fileOffset_2() const { return ___fileOffset_2; }
	inline int32_t* get_address_of_fileOffset_2() { return &___fileOffset_2; }
	inline void set_fileOffset_2(int32_t value)
	{
		___fileOffset_2 = value;
	}

	inline static int32_t get_offset_of_outFileList_3() { return static_cast<int32_t>(offsetof(GerateMTurkNumber_t4176472336_StaticFields, ___outFileList_3)); }
	inline List_1_t2766455145 * get_outFileList_3() const { return ___outFileList_3; }
	inline List_1_t2766455145 ** get_address_of_outFileList_3() { return &___outFileList_3; }
	inline void set_outFileList_3(List_1_t2766455145 * value)
	{
		___outFileList_3 = value;
		Il2CppCodeGenWriteBarrier(&___outFileList_3, value);
	}

	inline static int32_t get_offset_of_rng_4() { return static_cast<int32_t>(offsetof(GerateMTurkNumber_t4176472336_StaticFields, ___rng_4)); }
	inline Random_t1044426839 * get_rng_4() const { return ___rng_4; }
	inline Random_t1044426839 ** get_address_of_rng_4() { return &___rng_4; }
	inline void set_rng_4(Random_t1044426839 * value)
	{
		___rng_4 = value;
		Il2CppCodeGenWriteBarrier(&___rng_4, value);
	}

	inline static int32_t get_offset_of_MTurkGerationNumber_5() { return static_cast<int32_t>(offsetof(GerateMTurkNumber_t4176472336_StaticFields, ___MTurkGerationNumber_5)); }
	inline int64_t get_MTurkGerationNumber_5() const { return ___MTurkGerationNumber_5; }
	inline int64_t* get_address_of_MTurkGerationNumber_5() { return &___MTurkGerationNumber_5; }
	inline void set_MTurkGerationNumber_5(int64_t value)
	{
		___MTurkGerationNumber_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
