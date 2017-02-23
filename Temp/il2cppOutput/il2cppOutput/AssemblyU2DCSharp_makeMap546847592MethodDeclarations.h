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

// makeMap
struct makeMap_t546847592;
// System.String
struct String_t;
// ObjectHierachy.Character
struct Character_t3640641869;
// ObjectHierachy.Block
struct Block_t2982227961;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Character3640641869.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Block2982227961.h"

// System.Void makeMap::.ctor()
extern "C"  void makeMap__ctor_m2822646773 (makeMap_t546847592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::Start()
extern "C"  void makeMap_Start_m3744533357 (makeMap_t546847592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::loadStage(System.Int32)
extern "C"  void makeMap_loadStage_m3463494716 (makeMap_t546847592 * __this, int32_t ___stage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::Update()
extern "C"  void makeMap_Update_m3885109842 (makeMap_t546847592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::createMap(System.Int32)
extern "C"  void makeMap_createMap_m3474710700 (makeMap_t546847592 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::createCharacter(System.Int32,System.Int32)
extern "C"  void makeMap_createCharacter_m3766105256 (makeMap_t546847592 * __this, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::createObtacle(System.Int32,System.Int32,System.String)
extern "C"  void makeMap_createObtacle_m1884708277 (makeMap_t546847592 * __this, int32_t ___x0, int32_t ___y1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::createAccessory(System.Int32,System.Int32,System.Int32)
extern "C"  void makeMap_createAccessory_m1189145618 (makeMap_t546847592 * __this, int32_t ___x0, int32_t ___y1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::match()
extern "C"  void makeMap_match_m753198430 (makeMap_t546847592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::activate(ObjectHierachy.Character)
extern "C"  void makeMap_activate_m2381575547 (makeMap_t546847592 * __this, Character_t3640641869 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::OnMouseUp()
extern "C"  void makeMap_OnMouseUp_m2148512226 (makeMap_t546847592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::clear()
extern "C"  void makeMap_clear_m41723818 (makeMap_t546847592 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void makeMap::blockAction(ObjectHierachy.Block)
extern "C"  void makeMap_blockAction_m2597995725 (makeMap_t546847592 * __this, Block_t2982227961 * ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
