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

// ObjectHierachy.Map
struct Map_t1278671608;
// ObjectHierachy.Block
struct Block_t2982227961;
// ObjectHierachy.Point
struct Point_t484223784;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Block2982227961.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Point484223784.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ObjectHierachy.Map::.ctor(ObjectHierachy.Block,System.Int32,System.Single,System.Single)
extern "C"  void Map__ctor_m1630491579 (Map_t1278671608 * __this, Block_t2982227961 * ___block0, int32_t ___numOfBlocks1, float ___totalSize2, float ___border3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ObjectHierachy.Map::get_border()
extern "C"  float Map_get_border_m1168511922 (Map_t1278671608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Map::set_border(System.Single)
extern "C"  void Map_set_border_m240351005 (Map_t1278671608 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ObjectHierachy.Map::get_Length()
extern "C"  float Map_get_Length_m1910084128 (Map_t1278671608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Map::setPosition(System.Single,System.Single)
extern "C"  void Map_setPosition_m134717934 (Map_t1278671608 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Map::setPositionAtCenter(System.Single,System.Single)
extern "C"  void Map_setPositionAtCenter_m2568564754 (Map_t1278671608 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Block ObjectHierachy.Map::get(System.Int32,System.Int32)
extern "C"  Block_t2982227961 * Map_get_m1224183207 (Map_t1278671608 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Block ObjectHierachy.Map::get(ObjectHierachy.Point)
extern "C"  Block_t2982227961 * Map_get_m3715681997 (Map_t1278671608 * __this, Point_t484223784 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Map::checkBound(System.Int32,System.Int32)
extern "C"  bool Map_checkBound_m77060109 (Map_t1278671608 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Map::checkBound(ObjectHierachy.Point)
extern "C"  bool Map_checkBound_m3750906511 (Map_t1278671608 * __this, Point_t484223784 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Map::checkBoundWithIndex(System.Int32,System.Int32,System.Int32)
extern "C"  bool Map_checkBoundWithIndex_m3767094318 (Map_t1278671608 * __this, int32_t ___index0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectHierachy.Map::checkObtcle(System.Int32,System.Int32)
extern "C"  bool Map_checkObtcle_m4283183118 (Map_t1278671608 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ObjectHierachy.Map::get_Unitlength()
extern "C"  float Map_get_Unitlength_m4043730478 (Map_t1278671608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Map::allBlockAction()
extern "C"  void Map_allBlockAction_m3761748571 (Map_t1278671608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObjectHierachy.Map::positionParse(ObjectHierachy.Point)
extern "C"  Vector3_t2243707580  Map_positionParse_m2928872561 (Map_t1278671608 * __this, Point_t484223784 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.Map::<blockAction>m__0(ObjectHierachy.Block)
extern "C"  void Map_U3CblockActionU3Em__0_m2949474278 (Il2CppObject * __this /* static, unused */, Block_t2982227961 * ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
