#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectHierachy.Character
struct Character_t3640641869;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterTouchEvent
struct  CharacterTouchEvent_t3099650794  : public MonoBehaviour_t1158329972
{
public:
	// ObjectHierachy.Character CharacterTouchEvent::thisCharacter
	Character_t3640641869 * ___thisCharacter_2;

public:
	inline static int32_t get_offset_of_thisCharacter_2() { return static_cast<int32_t>(offsetof(CharacterTouchEvent_t3099650794, ___thisCharacter_2)); }
	inline Character_t3640641869 * get_thisCharacter_2() const { return ___thisCharacter_2; }
	inline Character_t3640641869 ** get_address_of_thisCharacter_2() { return &___thisCharacter_2; }
	inline void set_thisCharacter_2(Character_t3640641869 * value)
	{
		___thisCharacter_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisCharacter_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
