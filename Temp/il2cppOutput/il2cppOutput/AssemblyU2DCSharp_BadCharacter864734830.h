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

// BadCharacter
struct  BadCharacter_t864734830  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] BadCharacter::img
	SpriteU5BU5D_t3359083662* ___img_2;
	// System.Single BadCharacter::i
	float ___i_3;
	// System.Single BadCharacter::speed
	float ___speed_4;
	// System.Single BadCharacter::startPosition
	float ___startPosition_5;
	// System.Single BadCharacter::range_x
	float ___range_x_6;
	// System.Single BadCharacter::b_speed
	float ___b_speed_7;
	// System.Boolean BadCharacter::flag
	bool ___flag_8;
	// System.Int32 BadCharacter::before
	int32_t ___before_9;
	// System.Single BadCharacter::_time
	float ____time_10;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___img_2)); }
	inline SpriteU5BU5D_t3359083662* get_img_2() const { return ___img_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(SpriteU5BU5D_t3359083662* value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___i_3)); }
	inline float get_i_3() const { return ___i_3; }
	inline float* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(float value)
	{
		___i_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_startPosition_5() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___startPosition_5)); }
	inline float get_startPosition_5() const { return ___startPosition_5; }
	inline float* get_address_of_startPosition_5() { return &___startPosition_5; }
	inline void set_startPosition_5(float value)
	{
		___startPosition_5 = value;
	}

	inline static int32_t get_offset_of_range_x_6() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___range_x_6)); }
	inline float get_range_x_6() const { return ___range_x_6; }
	inline float* get_address_of_range_x_6() { return &___range_x_6; }
	inline void set_range_x_6(float value)
	{
		___range_x_6 = value;
	}

	inline static int32_t get_offset_of_b_speed_7() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___b_speed_7)); }
	inline float get_b_speed_7() const { return ___b_speed_7; }
	inline float* get_address_of_b_speed_7() { return &___b_speed_7; }
	inline void set_b_speed_7(float value)
	{
		___b_speed_7 = value;
	}

	inline static int32_t get_offset_of_flag_8() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___flag_8)); }
	inline bool get_flag_8() const { return ___flag_8; }
	inline bool* get_address_of_flag_8() { return &___flag_8; }
	inline void set_flag_8(bool value)
	{
		___flag_8 = value;
	}

	inline static int32_t get_offset_of_before_9() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ___before_9)); }
	inline int32_t get_before_9() const { return ___before_9; }
	inline int32_t* get_address_of_before_9() { return &___before_9; }
	inline void set_before_9(int32_t value)
	{
		___before_9 = value;
	}

	inline static int32_t get_offset_of__time_10() { return static_cast<int32_t>(offsetof(BadCharacter_t864734830, ____time_10)); }
	inline float get__time_10() const { return ____time_10; }
	inline float* get_address_of__time_10() { return &____time_10; }
	inline void set__time_10(float value)
	{
		____time_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
