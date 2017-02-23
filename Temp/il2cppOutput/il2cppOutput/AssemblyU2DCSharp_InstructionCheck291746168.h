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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstructionCheck
struct  InstructionCheck_t291746168  : public MonoBehaviour_t1158329972
{
public:
	// ObjectHierachy.Character InstructionCheck::character
	Character_t3640641869 * ___character_2;
	// UnityEngine.GameObject InstructionCheck::popup
	GameObject_t1756533147 * ___popup_3;

public:
	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(InstructionCheck_t291746168, ___character_2)); }
	inline Character_t3640641869 * get_character_2() const { return ___character_2; }
	inline Character_t3640641869 ** get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(Character_t3640641869 * value)
	{
		___character_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_2, value);
	}

	inline static int32_t get_offset_of_popup_3() { return static_cast<int32_t>(offsetof(InstructionCheck_t291746168, ___popup_3)); }
	inline GameObject_t1756533147 * get_popup_3() const { return ___popup_3; }
	inline GameObject_t1756533147 ** get_address_of_popup_3() { return &___popup_3; }
	inline void set_popup_3(GameObject_t1756533147 * value)
	{
		___popup_3 = value;
		Il2CppCodeGenWriteBarrier(&___popup_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
