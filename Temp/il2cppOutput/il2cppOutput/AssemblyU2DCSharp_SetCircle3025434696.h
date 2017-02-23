#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetCircle
struct  SetCircle_t3025434696  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] SetCircle::circles
	GameObjectU5BU5D_t3057952154* ___circles_2;
	// UnityEngine.Sprite SetCircle::circle_clear
	Sprite_t309593783 * ___circle_clear_3;
	// UnityEngine.Sprite SetCircle::circle_unclear
	Sprite_t309593783 * ___circle_unclear_4;

public:
	inline static int32_t get_offset_of_circles_2() { return static_cast<int32_t>(offsetof(SetCircle_t3025434696, ___circles_2)); }
	inline GameObjectU5BU5D_t3057952154* get_circles_2() const { return ___circles_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_circles_2() { return &___circles_2; }
	inline void set_circles_2(GameObjectU5BU5D_t3057952154* value)
	{
		___circles_2 = value;
		Il2CppCodeGenWriteBarrier(&___circles_2, value);
	}

	inline static int32_t get_offset_of_circle_clear_3() { return static_cast<int32_t>(offsetof(SetCircle_t3025434696, ___circle_clear_3)); }
	inline Sprite_t309593783 * get_circle_clear_3() const { return ___circle_clear_3; }
	inline Sprite_t309593783 ** get_address_of_circle_clear_3() { return &___circle_clear_3; }
	inline void set_circle_clear_3(Sprite_t309593783 * value)
	{
		___circle_clear_3 = value;
		Il2CppCodeGenWriteBarrier(&___circle_clear_3, value);
	}

	inline static int32_t get_offset_of_circle_unclear_4() { return static_cast<int32_t>(offsetof(SetCircle_t3025434696, ___circle_unclear_4)); }
	inline Sprite_t309593783 * get_circle_unclear_4() const { return ___circle_unclear_4; }
	inline Sprite_t309593783 ** get_address_of_circle_unclear_4() { return &___circle_unclear_4; }
	inline void set_circle_unclear_4(Sprite_t309593783 * value)
	{
		___circle_unclear_4 = value;
		Il2CppCodeGenWriteBarrier(&___circle_unclear_4, value);
	}
};

struct SetCircle_t3025434696_StaticFields
{
public:
	// System.Boolean[] SetCircle::isclear
	BooleanU5BU5D_t3568034315* ___isclear_5;

public:
	inline static int32_t get_offset_of_isclear_5() { return static_cast<int32_t>(offsetof(SetCircle_t3025434696_StaticFields, ___isclear_5)); }
	inline BooleanU5BU5D_t3568034315* get_isclear_5() const { return ___isclear_5; }
	inline BooleanU5BU5D_t3568034315** get_address_of_isclear_5() { return &___isclear_5; }
	inline void set_isclear_5(BooleanU5BU5D_t3568034315* value)
	{
		___isclear_5 = value;
		Il2CppCodeGenWriteBarrier(&___isclear_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
