#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hint
struct  Hint_t450896965  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Hint::time
	float ___time_2;
	// System.Boolean Hint::flag
	bool ___flag_3;
	// System.Collections.ArrayList Hint::blocks
	ArrayList_t4252133567 * ___blocks_4;
	// UnityEngine.Sprite Hint::clicked
	Sprite_t309593783 * ___clicked_5;
	// UnityEngine.Sprite Hint::unclicked
	Sprite_t309593783 * ___unclicked_6;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Hint_t450896965, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_flag_3() { return static_cast<int32_t>(offsetof(Hint_t450896965, ___flag_3)); }
	inline bool get_flag_3() const { return ___flag_3; }
	inline bool* get_address_of_flag_3() { return &___flag_3; }
	inline void set_flag_3(bool value)
	{
		___flag_3 = value;
	}

	inline static int32_t get_offset_of_blocks_4() { return static_cast<int32_t>(offsetof(Hint_t450896965, ___blocks_4)); }
	inline ArrayList_t4252133567 * get_blocks_4() const { return ___blocks_4; }
	inline ArrayList_t4252133567 ** get_address_of_blocks_4() { return &___blocks_4; }
	inline void set_blocks_4(ArrayList_t4252133567 * value)
	{
		___blocks_4 = value;
		Il2CppCodeGenWriteBarrier(&___blocks_4, value);
	}

	inline static int32_t get_offset_of_clicked_5() { return static_cast<int32_t>(offsetof(Hint_t450896965, ___clicked_5)); }
	inline Sprite_t309593783 * get_clicked_5() const { return ___clicked_5; }
	inline Sprite_t309593783 ** get_address_of_clicked_5() { return &___clicked_5; }
	inline void set_clicked_5(Sprite_t309593783 * value)
	{
		___clicked_5 = value;
		Il2CppCodeGenWriteBarrier(&___clicked_5, value);
	}

	inline static int32_t get_offset_of_unclicked_6() { return static_cast<int32_t>(offsetof(Hint_t450896965, ___unclicked_6)); }
	inline Sprite_t309593783 * get_unclicked_6() const { return ___unclicked_6; }
	inline Sprite_t309593783 ** get_address_of_unclicked_6() { return &___unclicked_6; }
	inline void set_unclicked_6(Sprite_t309593783 * value)
	{
		___unclicked_6 = value;
		Il2CppCodeGenWriteBarrier(&___unclicked_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
