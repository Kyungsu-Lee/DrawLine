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

// RubyEvent
struct  RubyEvent_t1984113088  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 RubyEvent::index
	int32_t ___index_2;
	// System.Single RubyEvent::time
	float ___time_3;
	// System.Single RubyEvent::speed
	float ___speed_4;
	// UnityEngine.Vector3 RubyEvent::ringPosition
	Vector3_t2243707580  ___ringPosition_5;
	// UnityEngine.Vector3 RubyEvent::initScale
	Vector3_t2243707580  ___initScale_6;
	// UnityEngine.Vector3 RubyEvent::initPosition
	Vector3_t2243707580  ___initPosition_7;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RubyEvent_t1984113088, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(RubyEvent_t1984113088, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(RubyEvent_t1984113088, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_ringPosition_5() { return static_cast<int32_t>(offsetof(RubyEvent_t1984113088, ___ringPosition_5)); }
	inline Vector3_t2243707580  get_ringPosition_5() const { return ___ringPosition_5; }
	inline Vector3_t2243707580 * get_address_of_ringPosition_5() { return &___ringPosition_5; }
	inline void set_ringPosition_5(Vector3_t2243707580  value)
	{
		___ringPosition_5 = value;
	}

	inline static int32_t get_offset_of_initScale_6() { return static_cast<int32_t>(offsetof(RubyEvent_t1984113088, ___initScale_6)); }
	inline Vector3_t2243707580  get_initScale_6() const { return ___initScale_6; }
	inline Vector3_t2243707580 * get_address_of_initScale_6() { return &___initScale_6; }
	inline void set_initScale_6(Vector3_t2243707580  value)
	{
		___initScale_6 = value;
	}

	inline static int32_t get_offset_of_initPosition_7() { return static_cast<int32_t>(offsetof(RubyEvent_t1984113088, ___initPosition_7)); }
	inline Vector3_t2243707580  get_initPosition_7() const { return ___initPosition_7; }
	inline Vector3_t2243707580 * get_address_of_initPosition_7() { return &___initPosition_7; }
	inline void set_initPosition_7(Vector3_t2243707580  value)
	{
		___initPosition_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
