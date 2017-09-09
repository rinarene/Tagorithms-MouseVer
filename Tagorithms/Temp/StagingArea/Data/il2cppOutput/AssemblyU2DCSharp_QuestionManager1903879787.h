#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// playButton
struct playButton_t1557996722;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<QuestionManager/Question>
struct List_1_t1612523476;
// QuestionManager/Question[]
struct QuestionU5BU5D_t3176589049;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// mainData
struct mainData_t1830211725;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestionManager
struct  QuestionManager_t1903879787  : public MonoBehaviour_t1158329972
{
public:
	// playButton QuestionManager::play
	playButton_t1557996722 * ___play_2;
	// System.Int32 QuestionManager::activeQuestion
	int32_t ___activeQuestion_3;
	// UnityEngine.GameObject[] QuestionManager::radioButtons
	GameObjectU5BU5D_t3057952154* ___radioButtons_4;
	// UnityEngine.UI.Text QuestionManager::questionText
	Text_t356221433 * ___questionText_5;
	// System.Collections.Generic.List`1<QuestionManager/Question> QuestionManager::allquestions
	List_1_t1612523476 * ___allquestions_6;
	// QuestionManager/Question[] QuestionManager::questions
	QuestionU5BU5D_t3176589049* ___questions_7;
	// UnityEngine.GameObject QuestionManager::confirmButton
	GameObject_t1756533147 * ___confirmButton_8;
	// mainData QuestionManager::data
	mainData_t1830211725 * ___data_9;
	// System.String QuestionManager::filename
	String_t* ___filename_10;

public:
	inline static int32_t get_offset_of_play_2() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___play_2)); }
	inline playButton_t1557996722 * get_play_2() const { return ___play_2; }
	inline playButton_t1557996722 ** get_address_of_play_2() { return &___play_2; }
	inline void set_play_2(playButton_t1557996722 * value)
	{
		___play_2 = value;
		Il2CppCodeGenWriteBarrier(&___play_2, value);
	}

	inline static int32_t get_offset_of_activeQuestion_3() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___activeQuestion_3)); }
	inline int32_t get_activeQuestion_3() const { return ___activeQuestion_3; }
	inline int32_t* get_address_of_activeQuestion_3() { return &___activeQuestion_3; }
	inline void set_activeQuestion_3(int32_t value)
	{
		___activeQuestion_3 = value;
	}

	inline static int32_t get_offset_of_radioButtons_4() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___radioButtons_4)); }
	inline GameObjectU5BU5D_t3057952154* get_radioButtons_4() const { return ___radioButtons_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_radioButtons_4() { return &___radioButtons_4; }
	inline void set_radioButtons_4(GameObjectU5BU5D_t3057952154* value)
	{
		___radioButtons_4 = value;
		Il2CppCodeGenWriteBarrier(&___radioButtons_4, value);
	}

	inline static int32_t get_offset_of_questionText_5() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___questionText_5)); }
	inline Text_t356221433 * get_questionText_5() const { return ___questionText_5; }
	inline Text_t356221433 ** get_address_of_questionText_5() { return &___questionText_5; }
	inline void set_questionText_5(Text_t356221433 * value)
	{
		___questionText_5 = value;
		Il2CppCodeGenWriteBarrier(&___questionText_5, value);
	}

	inline static int32_t get_offset_of_allquestions_6() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___allquestions_6)); }
	inline List_1_t1612523476 * get_allquestions_6() const { return ___allquestions_6; }
	inline List_1_t1612523476 ** get_address_of_allquestions_6() { return &___allquestions_6; }
	inline void set_allquestions_6(List_1_t1612523476 * value)
	{
		___allquestions_6 = value;
		Il2CppCodeGenWriteBarrier(&___allquestions_6, value);
	}

	inline static int32_t get_offset_of_questions_7() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___questions_7)); }
	inline QuestionU5BU5D_t3176589049* get_questions_7() const { return ___questions_7; }
	inline QuestionU5BU5D_t3176589049** get_address_of_questions_7() { return &___questions_7; }
	inline void set_questions_7(QuestionU5BU5D_t3176589049* value)
	{
		___questions_7 = value;
		Il2CppCodeGenWriteBarrier(&___questions_7, value);
	}

	inline static int32_t get_offset_of_confirmButton_8() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___confirmButton_8)); }
	inline GameObject_t1756533147 * get_confirmButton_8() const { return ___confirmButton_8; }
	inline GameObject_t1756533147 ** get_address_of_confirmButton_8() { return &___confirmButton_8; }
	inline void set_confirmButton_8(GameObject_t1756533147 * value)
	{
		___confirmButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___confirmButton_8, value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___data_9)); }
	inline mainData_t1830211725 * get_data_9() const { return ___data_9; }
	inline mainData_t1830211725 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(mainData_t1830211725 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier(&___data_9, value);
	}

	inline static int32_t get_offset_of_filename_10() { return static_cast<int32_t>(offsetof(QuestionManager_t1903879787, ___filename_10)); }
	inline String_t* get_filename_10() const { return ___filename_10; }
	inline String_t** get_address_of_filename_10() { return &___filename_10; }
	inline void set_filename_10(String_t* value)
	{
		___filename_10 = value;
		Il2CppCodeGenWriteBarrier(&___filename_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
