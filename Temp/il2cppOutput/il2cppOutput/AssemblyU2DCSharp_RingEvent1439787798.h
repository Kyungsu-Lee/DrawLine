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

// RingEvent
struct  RingEvent_t1439787798  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RingEvent::time
	float ___time_2;
	// UnityEngine.Sprite[] RingEvent::unclear
	SpriteU5BU5D_t3359083662* ___unclear_3;
	// UnityEngine.Sprite[] RingEvent::clear
	SpriteU5BU5D_t3359083662* ___clear_4;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(RingEvent_t1439787798, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_unclear_3() { return static_cast<int32_t>(offsetof(RingEvent_t1439787798, ___unclear_3)); }
	inline SpriteU5BU5D_t3359083662* get_unclear_3() const { return ___unclear_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_unclear_3() { return &___unclear_3; }
	inline void set_unclear_3(SpriteU5BU5D_t3359083662* value)
	{
		___unclear_3 = value;
		Il2CppCodeGenWriteBarrier(&___unclear_3, value);
	}

	inline static int32_t get_offset_of_clear_4() { return static_cast<int32_t>(offsetof(RingEvent_t1439787798, ___clear_4)); }
	inline SpriteU5BU5D_t3359083662* get_clear_4() const { return ___clear_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_clear_4() { return &___clear_4; }
	inline void set_clear_4(SpriteU5BU5D_t3359083662* value)
	{
		___clear_4 = value;
		Il2CppCodeGenWriteBarrier(&___clear_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
