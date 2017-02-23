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

// ObjectHierachy.MapObject
struct MapObject_t2027552809;
// ObjectHierachy.Point
struct Point_t484223784;
// ObjectHierachy.Block
struct Block_t2982227961;
// ObjectHierachy.Map
struct Map_t1278671608;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Point484223784.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Map1278671608.h"

// System.Void ObjectHierachy.MapObject::.ctor()
extern "C"  void MapObject__ctor_m3110747830 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Point ObjectHierachy.MapObject::get_StartPoint()
extern "C"  Point_t484223784 * MapObject_get_StartPoint_m1643862168 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::set_StartPoint(ObjectHierachy.Point)
extern "C"  void MapObject_set_StartPoint_m2396030647 (MapObject_t2027552809 * __this, Point_t484223784 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObjectHierachy.MapObject::get_initScale()
extern "C"  Vector3_t2243707580  MapObject_get_initScale_m1227455569 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::set_initScale(UnityEngine.Vector3)
extern "C"  void MapObject_set_initScale_m2262069278 (MapObject_t2027552809 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObjectHierachy.MapObject::get_locaScale()
extern "C"  Vector3_t2243707580  MapObject_get_locaScale_m2145874998 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::set_locaScale(UnityEngine.Vector3)
extern "C"  void MapObject_set_locaScale_m3671698517 (MapObject_t2027552809 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ObjectHierachy.MapObject::get_position()
extern "C"  Vector3_t2243707580  MapObject_get_position_m1966924924 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::set_position(UnityEngine.Vector3)
extern "C"  void MapObject_set_position_m286522533 (MapObject_t2027552809 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectHierachy.Block ObjectHierachy.MapObject::onBlock()
extern "C"  Block_t2982227961 * MapObject_onBlock_m4005847114 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjectHierachy.MapObject::get_index()
extern "C"  int32_t MapObject_get_index_m3195438921 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::set_index(System.Int32)
extern "C"  void MapObject_set_index_m3489547964 (MapObject_t2027552809 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::setPosition()
extern "C"  void MapObject_setPosition_m3460540399 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::locateAt(System.Int32,System.Int32)
extern "C"  void MapObject_locateAt_m1008486781 (MapObject_t2027552809 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::locateAt(ObjectHierachy.Point)
extern "C"  void MapObject_locateAt_m1880067603 (MapObject_t2027552809 * __this, Point_t484223784 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::toStartPoint()
extern "C"  void MapObject_toStartPoint_m2379358643 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::toInitialScale()
extern "C"  void MapObject_toInitialScale_m2650624241 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::connectMap(ObjectHierachy.Map)
extern "C"  void MapObject_connectMap_m2918027584 (MapObject_t2027552809 * __this, Map_t1278671608 * ___map0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ObjectHierachy.MapObject::ToString()
extern "C"  String_t* MapObject_ToString_m1090265503 (MapObject_t2027552809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.MapObject::<positionAction>m__0()
extern "C"  void MapObject_U3CpositionActionU3Em__0_m2791997774 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
