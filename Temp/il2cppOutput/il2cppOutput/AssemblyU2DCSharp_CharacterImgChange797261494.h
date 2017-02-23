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

// CharacterImgChange
struct  CharacterImgChange_t797261494  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] CharacterImgChange::img
	SpriteU5BU5D_t3359083662* ___img_2;
	// System.Single CharacterImgChange::i
	float ___i_3;
	// System.Single CharacterImgChange::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(CharacterImgChange_t797261494, ___img_2)); }
	inline SpriteU5BU5D_t3359083662* get_img_2() const { return ___img_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(SpriteU5BU5D_t3359083662* value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(CharacterImgChange_t797261494, ___i_3)); }
	inline float get_i_3() const { return ___i_3; }
	inline float* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(float value)
	{
		___i_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(CharacterImgChange_t797261494, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
