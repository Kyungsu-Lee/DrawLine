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

// ObjectHierachy.Character
struct Character_t3640641869;
// UnityEngine.Transform
struct Transform_t3275118058;
// ObjectHierachy.CharacterStatus
struct CharacterStatus_t1181454901;
// ObjectHierachy.Accessory
struct Accessory_t4242569788;
// ObjectHierachy.Point
struct Point_t484223784;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// ObjectHierachy.Block
struct Block_t2982227961;
// Instruction.Instruction
struct Instruction_t3672569542;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Accessory4242569788.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Point484223784.h"
#include "AssemblyU2DCSharp_ObjectHierachy_ObtacleKind3365440996.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Block2982227961.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_Instruction_Instruction3672569542.h"

// System.Void ObjectHierachy.Character::.ctor()
extern "C"  void Character__ctor_m3036350812 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::.ctor(UnityEngine.Transform)
extern "C"  void Character__ctor_m3531087967 (Character_t3640641869 * __this, Transform_t3275118058 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.CharacterStatus ObjectHierachy.Character::get_characterStatus()
extern "C"  CharacterStatus_t1181454901 * Character_get_characterStatus_m1651868520 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Accessory ObjectHierachy.Character::get_Match()
extern "C"  Accessory_t4242569788 * Character_get_Match_m1283759455 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_Match(ObjectHierachy.Accessory)
extern "C"  void Character_set_Match_m802265942 (Character_t3640641869 * __this, Accessory_t4242569788 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::get_Cleared()
extern "C"  bool Character_get_Cleared_m3799908993 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_Cleared(System.Boolean)
extern "C"  void Character_set_Cleared_m2550785942 (Character_t3640641869 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectHierachy.Character::get_Count()
extern "C"  int32_t Character_get_Count_m586398222 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectHierachy.Character::get_clearedCharacter()
extern "C"  int32_t Character_get_clearedCharacter_m3442471498 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ObjectHierachy.Character::get_Speed()
extern "C"  float Character_get_Speed_m629906374 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_Speed(System.Single)
extern "C"  void Character_set_Speed_m1352325619 (Character_t3640641869 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_Moving(System.Boolean)
extern "C"  void Character_set_Moving_m808446976 (Character_t3640641869 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::get_Moving()
extern "C"  bool Character_get_Moving_m2806369261 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ObjectHierachy.Character::get_Color()
extern "C"  Color_t2020392075  Character_get_Color_m3955338493 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Point ObjectHierachy.Character::get_currentPosition()
extern "C"  Point_t484223784 * Character_get_currentPosition_m1884531228 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_currentPosition(ObjectHierachy.Point)
extern "C"  void Character_set_currentPosition_m3657028483 (Character_t3640641869 * __this, Point_t484223784 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.ObtacleKind ObjectHierachy.Character::get_obtacles()
extern "C"  int32_t Character_get_obtacles_m3074493407 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_obtacles(ObjectHierachy.ObtacleKind)
extern "C"  void Character_set_obtacles_m3116342238 (Character_t3640641869 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Character ObjectHierachy.Character::find(UnityEngine.GameObject)
extern "C"  Character_t3640641869 * Character_find_m3604860473 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::beforeAction()
extern "C"  void Character_beforeAction_m899160555 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ObjectHierachy.Character::ToStringQueue()
extern "C"  String_t* Character_ToStringQueue_m3704274920 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ObjectHierachy.Character::ToStringStack()
extern "C"  String_t* Character_ToStringStack_m1364811893 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ObjectHierachy.Character::get_name()
extern "C"  String_t* Character_get_name_m1852821903 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::afterAction()
extern "C"  void Character_afterAction_m3763882492 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::Stop()
extern "C"  void Character_Stop_m2687280046 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::checkDistance(ObjectHierachy.Block,System.Single)
extern "C"  bool Character_checkDistance_m2984124499 (Character_t3640641869 * __this, Block_t2982227961 * ___block0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::checkDistance(ObjectHierachy.Point,System.Single)
extern "C"  bool Character_checkDistance_m2382707814 (Character_t3640641869 * __this, Point_t484223784 * ___p0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::checkDistance(UnityEngine.Vector3,System.Single)
extern "C"  bool Character_checkDistance_m3092558101 (Character_t3640641869 * __this, Vector3_t2243707580  ___vector0, float ___delta1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::onNext()
extern "C"  bool Character_onNext_m2455194488 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::moveUp()
extern "C"  void Character_moveUp_m4098907518 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::moveDown()
extern "C"  void Character_moveDown_m2679301223 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::moveLeft()
extern "C"  void Character_moveLeft_m3382280286 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::moveRight()
extern "C"  void Character_moveRight_m1877700025 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::fitPosition()
extern "C"  void Character_fitPosition_m3644506980 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Character::get_IsActivated()
extern "C"  bool Character_get_IsActivated_m3090646074 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::set_IsActivated(System.Boolean)
extern "C"  void Character_set_IsActivated_m1015022169 (Character_t3640641869 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::activate()
extern "C"  void Character_activate_m2555790977 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::toStartPoint()
extern "C"  void Character_toStartPoint_m2444538495 (Character_t3640641869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::toPoint(ObjectHierachy.Point,ObjectHierachy.Point)
extern "C"  void Character_toPoint_m3319322955 (Character_t3640641869 * __this, Point_t484223784 * ___from0, Point_t484223784 * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Character::changeStatus(Instruction.Instruction)
extern "C"  void Character_changeStatus_m142550844 (Character_t3640641869 * __this, Instruction_t3672569542 * ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
