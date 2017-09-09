#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestionManager/Question
struct  Question_t2243402344 
{
public:
	// System.UInt32 QuestionManager/Question::number
	uint32_t ___number_0;
	// System.String QuestionManager/Question::text
	String_t* ___text_1;
	// System.Int32 QuestionManager/Question::rating
	int32_t ___rating_2;

public:
	inline static int32_t get_offset_of_number_0() { return static_cast<int32_t>(offsetof(Question_t2243402344, ___number_0)); }
	inline uint32_t get_number_0() const { return ___number_0; }
	inline uint32_t* get_address_of_number_0() { return &___number_0; }
	inline void set_number_0(uint32_t value)
	{
		___number_0 = value;
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Question_t2243402344, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_rating_2() { return static_cast<int32_t>(offsetof(Question_t2243402344, ___rating_2)); }
	inline int32_t get_rating_2() const { return ___rating_2; }
	inline int32_t* get_address_of_rating_2() { return &___rating_2; }
	inline void set_rating_2(int32_t value)
	{
		___rating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of QuestionManager/Question
struct Question_t2243402344_marshaled_pinvoke
{
	uint32_t ___number_0;
	char* ___text_1;
	int32_t ___rating_2;
};
// Native definition for COM marshalling of QuestionManager/Question
struct Question_t2243402344_marshaled_com
{
	uint32_t ___number_0;
	Il2CppChar* ___text_1;
	int32_t ___rating_2;
};
