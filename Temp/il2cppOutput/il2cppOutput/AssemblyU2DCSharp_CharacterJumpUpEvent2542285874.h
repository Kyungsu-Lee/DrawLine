#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterJumpUpEvent
struct  CharacterJumpUpEvent_t2542285874  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CharacterJumpUpEvent::time
	float ___time_5;
	// System.Single CharacterJumpUpEvent::rate
	float ___rate_6;
	// System.Single CharacterJumpUpEvent::scaleRate
	float ___scaleRate_7;
	// System.Single CharacterJumpUpEvent::x
	float ___x_8;
	// System.Single CharacterJumpUpEvent::y
	float ___y_9;

public:
	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_rate_6() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874, ___rate_6)); }
	inline float get_rate_6() const { return ___rate_6; }
	inline float* get_address_of_rate_6() { return &___rate_6; }
	inline void set_rate_6(float value)
	{
		___rate_6 = value;
	}

	inline static int32_t get_offset_of_scaleRate_7() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874, ___scaleRate_7)); }
	inline float get_scaleRate_7() const { return ___scaleRate_7; }
	inline float* get_address_of_scaleRate_7() { return &___scaleRate_7; }
	inline void set_scaleRate_7(float value)
	{
		___scaleRate_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874, ___x_8)); }
	inline float get_x_8() const { return ___x_8; }
	inline float* get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(float value)
	{
		___x_8 = value;
	}

	inline static int32_t get_offset_of_y_9() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874, ___y_9)); }
	inline float get_y_9() const { return ___y_9; }
	inline float* get_address_of_y_9() { return &___y_9; }
	inline void set_y_9(float value)
	{
		___y_9 = value;
	}
};

struct CharacterJumpUpEvent_t2542285874_StaticFields
{
public:
	// UnityEngine.Vector3 CharacterJumpUpEvent::initPotision
	Vector3_t2243707580  ___initPotision_2;
	// UnityEngine.Vector3 CharacterJumpUpEvent::endPosition
	Vector3_t2243707580  ___endPosition_3;
	// System.Boolean CharacterJumpUpEvent::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_initPotision_2() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874_StaticFields, ___initPotision_2)); }
	inline Vector3_t2243707580  get_initPotision_2() const { return ___initPotision_2; }
	inline Vector3_t2243707580 * get_address_of_initPotision_2() { return &___initPotision_2; }
	inline void set_initPotision_2(Vector3_t2243707580  value)
	{
		___initPotision_2 = value;
	}

	inline static int32_t get_offset_of_endPosition_3() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874_StaticFields, ___endPosition_3)); }
	inline Vector3_t2243707580  get_endPosition_3() const { return ___endPosition_3; }
	inline Vector3_t2243707580 * get_address_of_endPosition_3() { return &___endPosition_3; }
	inline void set_endPosition_3(Vector3_t2243707580  value)
	{
		___endPosition_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(CharacterJumpUpEvent_t2542285874_StaticFields, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
