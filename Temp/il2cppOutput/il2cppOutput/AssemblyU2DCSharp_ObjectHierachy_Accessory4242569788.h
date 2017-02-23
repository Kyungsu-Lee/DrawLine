#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// ObjectHierachy.Character
struct Character_t3640641869;

#include "AssemblyU2DCSharp_ObjectHierachy_MapObject2027552809.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectHierachy.Accessory
struct  Accessory_t4242569788  : public MapObject_t2027552809
{
public:
	// UnityEngine.Vector3 ObjectHierachy.Accessory::<initScale>k__BackingField
	Vector3_t2243707580  ___U3CinitScaleU3Ek__BackingField_12;
	// ObjectHierachy.Character ObjectHierachy.Accessory::<Match>k__BackingField
	Character_t3640641869 * ___U3CMatchU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CinitScaleU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Accessory_t4242569788, ___U3CinitScaleU3Ek__BackingField_12)); }
	inline Vector3_t2243707580  get_U3CinitScaleU3Ek__BackingField_12() const { return ___U3CinitScaleU3Ek__BackingField_12; }
	inline Vector3_t2243707580 * get_address_of_U3CinitScaleU3Ek__BackingField_12() { return &___U3CinitScaleU3Ek__BackingField_12; }
	inline void set_U3CinitScaleU3Ek__BackingField_12(Vector3_t2243707580  value)
	{
		___U3CinitScaleU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMatchU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Accessory_t4242569788, ___U3CMatchU3Ek__BackingField_13)); }
	inline Character_t3640641869 * get_U3CMatchU3Ek__BackingField_13() const { return ___U3CMatchU3Ek__BackingField_13; }
	inline Character_t3640641869 ** get_address_of_U3CMatchU3Ek__BackingField_13() { return &___U3CMatchU3Ek__BackingField_13; }
	inline void set_U3CMatchU3Ek__BackingField_13(Character_t3640641869 * value)
	{
		___U3CMatchU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMatchU3Ek__BackingField_13, value);
	}
};

struct Accessory_t4242569788_StaticFields
{
public:
	// System.Collections.ArrayList ObjectHierachy.Accessory::accessory
	ArrayList_t4252133567 * ___accessory_11;

public:
	inline static int32_t get_offset_of_accessory_11() { return static_cast<int32_t>(offsetof(Accessory_t4242569788_StaticFields, ___accessory_11)); }
	inline ArrayList_t4252133567 * get_accessory_11() const { return ___accessory_11; }
	inline ArrayList_t4252133567 ** get_address_of_accessory_11() { return &___accessory_11; }
	inline void set_accessory_11(ArrayList_t4252133567 * value)
	{
		___accessory_11 = value;
		Il2CppCodeGenWriteBarrier(&___accessory_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
