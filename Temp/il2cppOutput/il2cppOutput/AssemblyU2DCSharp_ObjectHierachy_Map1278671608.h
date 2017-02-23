#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectHierachy.Map
struct Map_t1278671608;
// ObjectHierachy.Block[][]
struct BlockU5BU5DU5BU5D_t1947926381;
// ObjectHierachy.BlockAction
struct BlockAction_t2126287875;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectHierachy.Map
struct  Map_t1278671608  : public Il2CppObject
{
public:
	// ObjectHierachy.Block[][] ObjectHierachy.Map::blocks
	BlockU5BU5DU5BU5D_t1947926381* ___blocks_1;
	// System.Int32 ObjectHierachy.Map::size
	int32_t ___size_2;
	// System.Single ObjectHierachy.Map::unitSize
	float ___unitSize_3;
	// ObjectHierachy.BlockAction ObjectHierachy.Map::blockAction
	BlockAction_t2126287875 * ___blockAction_4;
	// System.Single ObjectHierachy.Map::<border>k__BackingField
	float ___U3CborderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_blocks_1() { return static_cast<int32_t>(offsetof(Map_t1278671608, ___blocks_1)); }
	inline BlockU5BU5DU5BU5D_t1947926381* get_blocks_1() const { return ___blocks_1; }
	inline BlockU5BU5DU5BU5D_t1947926381** get_address_of_blocks_1() { return &___blocks_1; }
	inline void set_blocks_1(BlockU5BU5DU5BU5D_t1947926381* value)
	{
		___blocks_1 = value;
		Il2CppCodeGenWriteBarrier(&___blocks_1, value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Map_t1278671608, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_unitSize_3() { return static_cast<int32_t>(offsetof(Map_t1278671608, ___unitSize_3)); }
	inline float get_unitSize_3() const { return ___unitSize_3; }
	inline float* get_address_of_unitSize_3() { return &___unitSize_3; }
	inline void set_unitSize_3(float value)
	{
		___unitSize_3 = value;
	}

	inline static int32_t get_offset_of_blockAction_4() { return static_cast<int32_t>(offsetof(Map_t1278671608, ___blockAction_4)); }
	inline BlockAction_t2126287875 * get_blockAction_4() const { return ___blockAction_4; }
	inline BlockAction_t2126287875 ** get_address_of_blockAction_4() { return &___blockAction_4; }
	inline void set_blockAction_4(BlockAction_t2126287875 * value)
	{
		___blockAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___blockAction_4, value);
	}

	inline static int32_t get_offset_of_U3CborderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Map_t1278671608, ___U3CborderU3Ek__BackingField_5)); }
	inline float get_U3CborderU3Ek__BackingField_5() const { return ___U3CborderU3Ek__BackingField_5; }
	inline float* get_address_of_U3CborderU3Ek__BackingField_5() { return &___U3CborderU3Ek__BackingField_5; }
	inline void set_U3CborderU3Ek__BackingField_5(float value)
	{
		___U3CborderU3Ek__BackingField_5 = value;
	}
};

struct Map_t1278671608_StaticFields
{
public:
	// ObjectHierachy.Map ObjectHierachy.Map::instance
	Map_t1278671608 * ___instance_0;
	// ObjectHierachy.BlockAction ObjectHierachy.Map::<>f__am$cache0
	BlockAction_t2126287875 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Map_t1278671608_StaticFields, ___instance_0)); }
	inline Map_t1278671608 * get_instance_0() const { return ___instance_0; }
	inline Map_t1278671608 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Map_t1278671608 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(Map_t1278671608_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline BlockAction_t2126287875 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline BlockAction_t2126287875 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(BlockAction_t2126287875 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
