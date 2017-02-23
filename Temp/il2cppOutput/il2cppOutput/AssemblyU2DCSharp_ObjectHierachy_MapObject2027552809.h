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
// UnityEngine.Transform
struct Transform_t3275118058;
// ObjectHierachy.Map
struct Map_t1278671608;
// ObjectHierachy.Point
struct Point_t484223784;
// System.Collections.Stack
struct Stack_t1043988394;
// ObjectHierachy.MapObject/PositionAction
struct PositionAction_t3515287509;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectHierachy.MapObject
struct  MapObject_t2027552809  : public Il2CppObject
{
public:
	// System.Int32 ObjectHierachy.MapObject::x
	int32_t ___x_1;
	// System.Int32 ObjectHierachy.MapObject::y
	int32_t ___y_2;
	// UnityEngine.Transform ObjectHierachy.MapObject::obj
	Transform_t3275118058 * ___obj_3;
	// ObjectHierachy.Map ObjectHierachy.MapObject::map
	Map_t1278671608 * ___map_4;
	// ObjectHierachy.Point ObjectHierachy.MapObject::<StartPoint>k__BackingField
	Point_t484223784 * ___U3CStartPointU3Ek__BackingField_5;
	// UnityEngine.Vector3 ObjectHierachy.MapObject::<initScale>k__BackingField
	Vector3_t2243707580  ___U3CinitScaleU3Ek__BackingField_6;
	// System.Collections.Stack ObjectHierachy.MapObject::pointStack
	Stack_t1043988394 * ___pointStack_7;
	// ObjectHierachy.MapObject/PositionAction ObjectHierachy.MapObject::positionAction
	PositionAction_t3515287509 * ___positionAction_8;
	// System.Int32 ObjectHierachy.MapObject::<index>k__BackingField
	int32_t ___U3CindexU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___x_1)); }
	inline int32_t get_x_1() const { return ___x_1; }
	inline int32_t* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(int32_t value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___y_2)); }
	inline int32_t get_y_2() const { return ___y_2; }
	inline int32_t* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(int32_t value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___obj_3)); }
	inline Transform_t3275118058 * get_obj_3() const { return ___obj_3; }
	inline Transform_t3275118058 ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(Transform_t3275118058 * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier(&___obj_3, value);
	}

	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___map_4)); }
	inline Map_t1278671608 * get_map_4() const { return ___map_4; }
	inline Map_t1278671608 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(Map_t1278671608 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier(&___map_4, value);
	}

	inline static int32_t get_offset_of_U3CStartPointU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___U3CStartPointU3Ek__BackingField_5)); }
	inline Point_t484223784 * get_U3CStartPointU3Ek__BackingField_5() const { return ___U3CStartPointU3Ek__BackingField_5; }
	inline Point_t484223784 ** get_address_of_U3CStartPointU3Ek__BackingField_5() { return &___U3CStartPointU3Ek__BackingField_5; }
	inline void set_U3CStartPointU3Ek__BackingField_5(Point_t484223784 * value)
	{
		___U3CStartPointU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStartPointU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CinitScaleU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___U3CinitScaleU3Ek__BackingField_6)); }
	inline Vector3_t2243707580  get_U3CinitScaleU3Ek__BackingField_6() const { return ___U3CinitScaleU3Ek__BackingField_6; }
	inline Vector3_t2243707580 * get_address_of_U3CinitScaleU3Ek__BackingField_6() { return &___U3CinitScaleU3Ek__BackingField_6; }
	inline void set_U3CinitScaleU3Ek__BackingField_6(Vector3_t2243707580  value)
	{
		___U3CinitScaleU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_pointStack_7() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___pointStack_7)); }
	inline Stack_t1043988394 * get_pointStack_7() const { return ___pointStack_7; }
	inline Stack_t1043988394 ** get_address_of_pointStack_7() { return &___pointStack_7; }
	inline void set_pointStack_7(Stack_t1043988394 * value)
	{
		___pointStack_7 = value;
		Il2CppCodeGenWriteBarrier(&___pointStack_7, value);
	}

	inline static int32_t get_offset_of_positionAction_8() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___positionAction_8)); }
	inline PositionAction_t3515287509 * get_positionAction_8() const { return ___positionAction_8; }
	inline PositionAction_t3515287509 ** get_address_of_positionAction_8() { return &___positionAction_8; }
	inline void set_positionAction_8(PositionAction_t3515287509 * value)
	{
		___positionAction_8 = value;
		Il2CppCodeGenWriteBarrier(&___positionAction_8, value);
	}

	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MapObject_t2027552809, ___U3CindexU3Ek__BackingField_9)); }
	inline int32_t get_U3CindexU3Ek__BackingField_9() const { return ___U3CindexU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CindexU3Ek__BackingField_9() { return &___U3CindexU3Ek__BackingField_9; }
	inline void set_U3CindexU3Ek__BackingField_9(int32_t value)
	{
		___U3CindexU3Ek__BackingField_9 = value;
	}
};

struct MapObject_t2027552809_StaticFields
{
public:
	// System.Collections.ArrayList ObjectHierachy.MapObject::ALLOBJECT
	ArrayList_t4252133567 * ___ALLOBJECT_0;
	// ObjectHierachy.MapObject/PositionAction ObjectHierachy.MapObject::<>f__am$cache0
	PositionAction_t3515287509 * ___U3CU3Ef__amU24cache0_10;

public:
	inline static int32_t get_offset_of_ALLOBJECT_0() { return static_cast<int32_t>(offsetof(MapObject_t2027552809_StaticFields, ___ALLOBJECT_0)); }
	inline ArrayList_t4252133567 * get_ALLOBJECT_0() const { return ___ALLOBJECT_0; }
	inline ArrayList_t4252133567 ** get_address_of_ALLOBJECT_0() { return &___ALLOBJECT_0; }
	inline void set_ALLOBJECT_0(ArrayList_t4252133567 * value)
	{
		___ALLOBJECT_0 = value;
		Il2CppCodeGenWriteBarrier(&___ALLOBJECT_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(MapObject_t2027552809_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline PositionAction_t3515287509 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline PositionAction_t3515287509 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(PositionAction_t3515287509 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
