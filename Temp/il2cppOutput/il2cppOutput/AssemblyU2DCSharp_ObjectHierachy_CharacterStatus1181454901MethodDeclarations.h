#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ObjectHierachy.CharacterStatus
struct CharacterStatus_t1181454901;
// ObjectHierachy.Point
struct Point_t484223784;
// System.Collections.Queue
struct Queue_t1288490777;
// System.Collections.Stack
struct Stack_t1043988394;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Point484223784.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Action930918764.h"
#include "AssemblyU2DCSharp_Instruction_INSTRUCTION373603974.h"

// System.Void ObjectHierachy.CharacterStatus::.ctor()
extern "C"  void CharacterStatus__ctor_m2339390378 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Point ObjectHierachy.CharacterStatus::get_CurrentPositionPoint()
extern "C"  Point_t484223784 * CharacterStatus_get_CurrentPositionPoint_m3065275174 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.CharacterStatus::set_CurrentPositionPoint(ObjectHierachy.Point)
extern "C"  void CharacterStatus_set_CurrentPositionPoint_m4070474871 (CharacterStatus_t1181454901 * __this, Point_t484223784 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObjectHierachy.CharacterStatus::get_CurrentPositionVector()
extern "C"  Vector3_t2243707580  CharacterStatus_get_CurrentPositionVector_m168847066 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.CharacterStatus::set_CurrentPositionVector(UnityEngine.Vector3)
extern "C"  void CharacterStatus_set_CurrentPositionVector_m1046262901 (CharacterStatus_t1181454901 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Action ObjectHierachy.CharacterStatus::get_action()
extern "C"  int32_t CharacterStatus_get_action_m1906486518 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.CharacterStatus::set_action(ObjectHierachy.Action)
extern "C"  void CharacterStatus_set_action_m3607281103 (CharacterStatus_t1181454901 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Point ObjectHierachy.CharacterStatus::get_NextPositionPoint()
extern "C"  Point_t484223784 * CharacterStatus_get_NextPositionPoint_m640536804 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.INSTRUCTION ObjectHierachy.CharacterStatus::get_direction()
extern "C"  int32_t CharacterStatus_get_direction_m3270668593 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.CharacterStatus::set_direction(Instruction.INSTRUCTION)
extern "C"  void CharacterStatus_set_direction_m3505779476 (CharacterStatus_t1181454901 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue ObjectHierachy.CharacterStatus::get_PointQueue()
extern "C"  Queue_t1288490777 * CharacterStatus_get_PointQueue_m1819375074 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack ObjectHierachy.CharacterStatus::get_PointStack()
extern "C"  Stack_t1043988394 * CharacterStatus_get_PointStack_m2417762168 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack ObjectHierachy.CharacterStatus::get_PointCursorStack()
extern "C"  Stack_t1043988394 * CharacterStatus_get_PointCursorStack_m1452725210 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObjectHierachy.CharacterStatus::get_NextPositionVector()
extern "C"  Vector3_t2243707580  CharacterStatus_get_NextPositionVector_m727784650 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.CharacterStatus::clear()
extern "C"  void CharacterStatus_clear_m4051484745 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ObjectHierachy.CharacterStatus::ToString()
extern "C"  String_t* CharacterStatus_ToString_m3442845859 (CharacterStatus_t1181454901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
