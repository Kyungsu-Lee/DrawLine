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

// PreviousScene
struct  PreviousScene_t3691204697  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite PreviousScene::clicked
	Sprite_t309593783 * ___clicked_2;
	// UnityEngine.Sprite PreviousScene::unclicked
	Sprite_t309593783 * ___unclicked_3;

public:
	inline static int32_t get_offset_of_clicked_2() { return static_cast<int32_t>(offsetof(PreviousScene_t3691204697, ___clicked_2)); }
	inline Sprite_t309593783 * get_clicked_2() const { return ___clicked_2; }
	inline Sprite_t309593783 ** get_address_of_clicked_2() { return &___clicked_2; }
	inline void set_clicked_2(Sprite_t309593783 * value)
	{
		___clicked_2 = value;
		Il2CppCodeGenWriteBarrier(&___clicked_2, value);
	}

	inline static int32_t get_offset_of_unclicked_3() { return static_cast<int32_t>(offsetof(PreviousScene_t3691204697, ___unclicked_3)); }
	inline Sprite_t309593783 * get_unclicked_3() const { return ___unclicked_3; }
	inline Sprite_t309593783 ** get_address_of_unclicked_3() { return &___unclicked_3; }
	inline void set_unclicked_3(Sprite_t309593783 * value)
	{
		___unclicked_3 = value;
		Il2CppCodeGenWriteBarrier(&___unclicked_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
