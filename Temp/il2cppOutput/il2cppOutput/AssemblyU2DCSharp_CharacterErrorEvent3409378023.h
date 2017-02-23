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

// CharacterErrorEvent
struct  CharacterErrorEvent_t3409378023  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CharacterErrorEvent::flag_log
	bool ___flag_log_5;
	// System.Single CharacterErrorEvent::time
	float ___time_7;
	// System.Single CharacterErrorEvent::bound
	float ___bound_8;
	// System.Boolean CharacterErrorEvent::flag
	bool ___flag_10;

public:
	inline static int32_t get_offset_of_flag_log_5() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023, ___flag_log_5)); }
	inline bool get_flag_log_5() const { return ___flag_log_5; }
	inline bool* get_address_of_flag_log_5() { return &___flag_log_5; }
	inline void set_flag_log_5(bool value)
	{
		___flag_log_5 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_bound_8() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023, ___bound_8)); }
	inline float get_bound_8() const { return ___bound_8; }
	inline float* get_address_of_bound_8() { return &___bound_8; }
	inline void set_bound_8(float value)
	{
		___bound_8 = value;
	}

	inline static int32_t get_offset_of_flag_10() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023, ___flag_10)); }
	inline bool get_flag_10() const { return ___flag_10; }
	inline bool* get_address_of_flag_10() { return &___flag_10; }
	inline void set_flag_10(bool value)
	{
		___flag_10 = value;
	}
};

struct CharacterErrorEvent_t3409378023_StaticFields
{
public:
	// System.Boolean CharacterErrorEvent::error_mov
	bool ___error_mov_2;
	// System.Boolean CharacterErrorEvent::error_jmp
	bool ___error_jmp_3;
	// System.Boolean CharacterErrorEvent::error_brk
	bool ___error_brk_4;
	// System.Int32 CharacterErrorEvent::index
	int32_t ___index_6;
	// UnityEngine.Vector3 CharacterErrorEvent::position
	Vector3_t2243707580  ___position_9;

public:
	inline static int32_t get_offset_of_error_mov_2() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023_StaticFields, ___error_mov_2)); }
	inline bool get_error_mov_2() const { return ___error_mov_2; }
	inline bool* get_address_of_error_mov_2() { return &___error_mov_2; }
	inline void set_error_mov_2(bool value)
	{
		___error_mov_2 = value;
	}

	inline static int32_t get_offset_of_error_jmp_3() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023_StaticFields, ___error_jmp_3)); }
	inline bool get_error_jmp_3() const { return ___error_jmp_3; }
	inline bool* get_address_of_error_jmp_3() { return &___error_jmp_3; }
	inline void set_error_jmp_3(bool value)
	{
		___error_jmp_3 = value;
	}

	inline static int32_t get_offset_of_error_brk_4() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023_StaticFields, ___error_brk_4)); }
	inline bool get_error_brk_4() const { return ___error_brk_4; }
	inline bool* get_address_of_error_brk_4() { return &___error_brk_4; }
	inline void set_error_brk_4(bool value)
	{
		___error_brk_4 = value;
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023_StaticFields, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(CharacterErrorEvent_t3409378023_StaticFields, ___position_9)); }
	inline Vector3_t2243707580  get_position_9() const { return ___position_9; }
	inline Vector3_t2243707580 * get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(Vector3_t2243707580  value)
	{
		___position_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
