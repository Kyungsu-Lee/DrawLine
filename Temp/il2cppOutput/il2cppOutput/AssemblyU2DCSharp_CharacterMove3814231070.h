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

// CharacterMove
struct  CharacterMove_t3814231070  : public MonoBehaviour_t1158329972
{
public:
	// ObjectHierachy.Character CharacterMove::character
	Character_t3640641869 * ___character_2;
	// System.Single CharacterMove::time
	float ___time_3;

public:
	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(CharacterMove_t3814231070, ___character_2)); }
	inline Character_t3640641869 * get_character_2() const { return ___character_2; }
	inline Character_t3640641869 ** get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(Character_t3640641869 * value)
	{
		___character_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_2, value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(CharacterMove_t3814231070, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
