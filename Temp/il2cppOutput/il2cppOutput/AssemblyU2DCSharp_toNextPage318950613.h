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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// toNextPage
struct  toNextPage_t318950613  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] toNextPage::img
	SpriteU5BU5D_t3359083662* ___img_2;
	// UnityEngine.GameObject toNextPage::screen
	GameObject_t1756533147 * ___screen_3;
	// UnityEngine.GameObject[] toNextPage::objects
	GameObjectU5BU5D_t3057952154* ___objects_4;
	// System.Boolean toNextPage::page
	bool ___page_5;
	// System.Single toNextPage::time
	float ___time_6;

public:
	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(toNextPage_t318950613, ___img_2)); }
	inline SpriteU5BU5D_t3359083662* get_img_2() const { return ___img_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(SpriteU5BU5D_t3359083662* value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_screen_3() { return static_cast<int32_t>(offsetof(toNextPage_t318950613, ___screen_3)); }
	inline GameObject_t1756533147 * get_screen_3() const { return ___screen_3; }
	inline GameObject_t1756533147 ** get_address_of_screen_3() { return &___screen_3; }
	inline void set_screen_3(GameObject_t1756533147 * value)
	{
		___screen_3 = value;
		Il2CppCodeGenWriteBarrier(&___screen_3, value);
	}

	inline static int32_t get_offset_of_objects_4() { return static_cast<int32_t>(offsetof(toNextPage_t318950613, ___objects_4)); }
	inline GameObjectU5BU5D_t3057952154* get_objects_4() const { return ___objects_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objects_4() { return &___objects_4; }
	inline void set_objects_4(GameObjectU5BU5D_t3057952154* value)
	{
		___objects_4 = value;
		Il2CppCodeGenWriteBarrier(&___objects_4, value);
	}

	inline static int32_t get_offset_of_page_5() { return static_cast<int32_t>(offsetof(toNextPage_t318950613, ___page_5)); }
	inline bool get_page_5() const { return ___page_5; }
	inline bool* get_address_of_page_5() { return &___page_5; }
	inline void set_page_5(bool value)
	{
		___page_5 = value;
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(toNextPage_t318950613, ___time_6)); }
	inline float get_time_6() const { return ___time_6; }
	inline float* get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(float value)
	{
		___time_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
