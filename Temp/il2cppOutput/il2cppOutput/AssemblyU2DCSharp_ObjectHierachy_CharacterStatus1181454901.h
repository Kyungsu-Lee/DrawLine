#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Queue
struct Queue_t1288490777;
// System.Collections.Stack
struct Stack_t1043988394;
// ObjectHierachy.Point
struct Point_t484223784;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Action930918764.h"
#include "AssemblyU2DCSharp_Instruction_INSTRUCTION373603974.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectHierachy.CharacterStatus
struct  CharacterStatus_t1181454901  : public Il2CppObject
{
public:
	// System.Collections.Queue ObjectHierachy.CharacterStatus::pointQueue
	Queue_t1288490777 * ___pointQueue_0;
	// System.Collections.Stack ObjectHierachy.CharacterStatus::pointStack
	Stack_t1043988394 * ___pointStack_1;
	// System.Collections.Stack ObjectHierachy.CharacterStatus::pointCursorStack
	Stack_t1043988394 * ___pointCursorStack_2;
	// ObjectHierachy.Point ObjectHierachy.CharacterStatus::<CurrentPositionPoint>k__BackingField
	Point_t484223784 * ___U3CCurrentPositionPointU3Ek__BackingField_3;
	// UnityEngine.Vector3 ObjectHierachy.CharacterStatus::<CurrentPositionVector>k__BackingField
	Vector3_t2243707580  ___U3CCurrentPositionVectorU3Ek__BackingField_4;
	// ObjectHierachy.Action ObjectHierachy.CharacterStatus::<action>k__BackingField
	int32_t ___U3CactionU3Ek__BackingField_5;
	// Instruction.INSTRUCTION ObjectHierachy.CharacterStatus::<direction>k__BackingField
	int32_t ___U3CdirectionU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_pointQueue_0() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___pointQueue_0)); }
	inline Queue_t1288490777 * get_pointQueue_0() const { return ___pointQueue_0; }
	inline Queue_t1288490777 ** get_address_of_pointQueue_0() { return &___pointQueue_0; }
	inline void set_pointQueue_0(Queue_t1288490777 * value)
	{
		___pointQueue_0 = value;
		Il2CppCodeGenWriteBarrier(&___pointQueue_0, value);
	}

	inline static int32_t get_offset_of_pointStack_1() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___pointStack_1)); }
	inline Stack_t1043988394 * get_pointStack_1() const { return ___pointStack_1; }
	inline Stack_t1043988394 ** get_address_of_pointStack_1() { return &___pointStack_1; }
	inline void set_pointStack_1(Stack_t1043988394 * value)
	{
		___pointStack_1 = value;
		Il2CppCodeGenWriteBarrier(&___pointStack_1, value);
	}

	inline static int32_t get_offset_of_pointCursorStack_2() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___pointCursorStack_2)); }
	inline Stack_t1043988394 * get_pointCursorStack_2() const { return ___pointCursorStack_2; }
	inline Stack_t1043988394 ** get_address_of_pointCursorStack_2() { return &___pointCursorStack_2; }
	inline void set_pointCursorStack_2(Stack_t1043988394 * value)
	{
		___pointCursorStack_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointCursorStack_2, value);
	}

	inline static int32_t get_offset_of_U3CCurrentPositionPointU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___U3CCurrentPositionPointU3Ek__BackingField_3)); }
	inline Point_t484223784 * get_U3CCurrentPositionPointU3Ek__BackingField_3() const { return ___U3CCurrentPositionPointU3Ek__BackingField_3; }
	inline Point_t484223784 ** get_address_of_U3CCurrentPositionPointU3Ek__BackingField_3() { return &___U3CCurrentPositionPointU3Ek__BackingField_3; }
	inline void set_U3CCurrentPositionPointU3Ek__BackingField_3(Point_t484223784 * value)
	{
		___U3CCurrentPositionPointU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentPositionPointU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CCurrentPositionVectorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___U3CCurrentPositionVectorU3Ek__BackingField_4)); }
	inline Vector3_t2243707580  get_U3CCurrentPositionVectorU3Ek__BackingField_4() const { return ___U3CCurrentPositionVectorU3Ek__BackingField_4; }
	inline Vector3_t2243707580 * get_address_of_U3CCurrentPositionVectorU3Ek__BackingField_4() { return &___U3CCurrentPositionVectorU3Ek__BackingField_4; }
	inline void set_U3CCurrentPositionVectorU3Ek__BackingField_4(Vector3_t2243707580  value)
	{
		___U3CCurrentPositionVectorU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CactionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___U3CactionU3Ek__BackingField_5)); }
	inline int32_t get_U3CactionU3Ek__BackingField_5() const { return ___U3CactionU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CactionU3Ek__BackingField_5() { return &___U3CactionU3Ek__BackingField_5; }
	inline void set_U3CactionU3Ek__BackingField_5(int32_t value)
	{
		___U3CactionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CharacterStatus_t1181454901, ___U3CdirectionU3Ek__BackingField_6)); }
	inline int32_t get_U3CdirectionU3Ek__BackingField_6() const { return ___U3CdirectionU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CdirectionU3Ek__BackingField_6() { return &___U3CdirectionU3Ek__BackingField_6; }
	inline void set_U3CdirectionU3Ek__BackingField_6(int32_t value)
	{
		___U3CdirectionU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
