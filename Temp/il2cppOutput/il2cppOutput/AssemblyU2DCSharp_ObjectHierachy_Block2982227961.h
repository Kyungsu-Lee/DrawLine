#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// ObjectHierachy.MapObject
struct MapObject_t2027552809;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectHierachy.Block
struct  Block_t2982227961  : public Il2CppObject
{
public:
	// UnityEngine.Transform ObjectHierachy.Block::obj
	Transform_t3275118058 * ___obj_0;
	// UnityEngine.Color ObjectHierachy.Block::defaultColor
	Color_t2020392075  ___defaultColor_1;
	// ObjectHierachy.MapObject ObjectHierachy.Block::<OnObject>k__BackingField
	MapObject_t2027552809 * ___U3COnObjectU3Ek__BackingField_2;
	// System.Int32 ObjectHierachy.Block::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_3;
	// System.Boolean ObjectHierachy.Block::<canOn>k__BackingField
	bool ___U3CcanOnU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(Block_t2982227961, ___obj_0)); }
	inline Transform_t3275118058 * get_obj_0() const { return ___obj_0; }
	inline Transform_t3275118058 ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(Transform_t3275118058 * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier(&___obj_0, value);
	}

	inline static int32_t get_offset_of_defaultColor_1() { return static_cast<int32_t>(offsetof(Block_t2982227961, ___defaultColor_1)); }
	inline Color_t2020392075  get_defaultColor_1() const { return ___defaultColor_1; }
	inline Color_t2020392075 * get_address_of_defaultColor_1() { return &___defaultColor_1; }
	inline void set_defaultColor_1(Color_t2020392075  value)
	{
		___defaultColor_1 = value;
	}

	inline static int32_t get_offset_of_U3COnObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Block_t2982227961, ___U3COnObjectU3Ek__BackingField_2)); }
	inline MapObject_t2027552809 * get_U3COnObjectU3Ek__BackingField_2() const { return ___U3COnObjectU3Ek__BackingField_2; }
	inline MapObject_t2027552809 ** get_address_of_U3COnObjectU3Ek__BackingField_2() { return &___U3COnObjectU3Ek__BackingField_2; }
	inline void set_U3COnObjectU3Ek__BackingField_2(MapObject_t2027552809 * value)
	{
		___U3COnObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnObjectU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Block_t2982227961, ___U3CindexU3Ek__BackingField_3)); }
	inline int32_t get_U3CindexU3Ek__BackingField_3() const { return ___U3CindexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CindexU3Ek__BackingField_3() { return &___U3CindexU3Ek__BackingField_3; }
	inline void set_U3CindexU3Ek__BackingField_3(int32_t value)
	{
		___U3CindexU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcanOnU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Block_t2982227961, ___U3CcanOnU3Ek__BackingField_4)); }
	inline bool get_U3CcanOnU3Ek__BackingField_4() const { return ___U3CcanOnU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CcanOnU3Ek__BackingField_4() { return &___U3CcanOnU3Ek__BackingField_4; }
	inline void set_U3CcanOnU3Ek__BackingField_4(bool value)
	{
		___U3CcanOnU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
