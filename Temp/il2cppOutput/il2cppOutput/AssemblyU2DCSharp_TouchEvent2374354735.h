#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchEvent
struct  TouchEvent_t2374354735  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TouchEvent::overCheck
	bool ___overCheck_2;
	// System.Single TouchEvent::time
	float ___time_3;

public:
	inline static int32_t get_offset_of_overCheck_2() { return static_cast<int32_t>(offsetof(TouchEvent_t2374354735, ___overCheck_2)); }
	inline bool get_overCheck_2() const { return ___overCheck_2; }
	inline bool* get_address_of_overCheck_2() { return &___overCheck_2; }
	inline void set_overCheck_2(bool value)
	{
		___overCheck_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(TouchEvent_t2374354735, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
