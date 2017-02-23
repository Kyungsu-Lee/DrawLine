#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Base
struct  Base_t1600141315  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite Base::sprite
	Sprite_t309593783 * ___sprite_2;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(Base_t1600141315, ___sprite_2)); }
	inline Sprite_t309593783 * get_sprite_2() const { return ___sprite_2; }
	inline Sprite_t309593783 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(Sprite_t309593783 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
