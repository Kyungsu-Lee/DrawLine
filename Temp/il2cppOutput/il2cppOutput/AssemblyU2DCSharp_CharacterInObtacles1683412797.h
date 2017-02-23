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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterInObtacles
struct  CharacterInObtacles_t1683412797  : public MonoBehaviour_t1158329972
{
public:
	// ObjectHierachy.Character CharacterInObtacles::character
	Character_t3640641869 * ___character_2;
	// UnityEngine.GameObject CharacterInObtacles::fire
	GameObject_t1756533147 * ___fire_3;
	// UnityEngine.Vector3 CharacterInObtacles::fireScale
	Vector3_t2243707580  ___fireScale_4;
	// UnityEngine.Vector3 CharacterInObtacles::characterScale
	Vector3_t2243707580  ___characterScale_5;
	// System.Single CharacterInObtacles::time
	float ___time_6;

public:
	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(CharacterInObtacles_t1683412797, ___character_2)); }
	inline Character_t3640641869 * get_character_2() const { return ___character_2; }
	inline Character_t3640641869 ** get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(Character_t3640641869 * value)
	{
		___character_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_2, value);
	}

	inline static int32_t get_offset_of_fire_3() { return static_cast<int32_t>(offsetof(CharacterInObtacles_t1683412797, ___fire_3)); }
	inline GameObject_t1756533147 * get_fire_3() const { return ___fire_3; }
	inline GameObject_t1756533147 ** get_address_of_fire_3() { return &___fire_3; }
	inline void set_fire_3(GameObject_t1756533147 * value)
	{
		___fire_3 = value;
		Il2CppCodeGenWriteBarrier(&___fire_3, value);
	}

	inline static int32_t get_offset_of_fireScale_4() { return static_cast<int32_t>(offsetof(CharacterInObtacles_t1683412797, ___fireScale_4)); }
	inline Vector3_t2243707580  get_fireScale_4() const { return ___fireScale_4; }
	inline Vector3_t2243707580 * get_address_of_fireScale_4() { return &___fireScale_4; }
	inline void set_fireScale_4(Vector3_t2243707580  value)
	{
		___fireScale_4 = value;
	}

	inline static int32_t get_offset_of_characterScale_5() { return static_cast<int32_t>(offsetof(CharacterInObtacles_t1683412797, ___characterScale_5)); }
	inline Vector3_t2243707580  get_characterScale_5() const { return ___characterScale_5; }
	inline Vector3_t2243707580 * get_address_of_characterScale_5() { return &___characterScale_5; }
	inline void set_characterScale_5(Vector3_t2243707580  value)
	{
		___characterScale_5 = value;
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(CharacterInObtacles_t1683412797, ___time_6)); }
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
