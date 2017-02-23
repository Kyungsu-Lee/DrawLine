#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Water
struct  Water_t1787740867  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Water::img
	SpriteU5BU5D_t3359083662* ___img_2;
	// System.Int32 Water::index
	int32_t ___index_3;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___img_2)); }
	inline SpriteU5BU5D_t3359083662* get_img_2() const { return ___img_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(SpriteU5BU5D_t3359083662* value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(Water_t1787740867, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
