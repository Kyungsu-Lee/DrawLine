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

// ObjectHierachy.BlockAction
struct BlockAction_t2126287875;
// System.Object
struct Il2CppObject;
// ObjectHierachy.Block
struct Block_t2982227961;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Block2982227961.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ObjectHierachy.BlockAction::.ctor(System.Object,System.IntPtr)
extern "C"  void BlockAction__ctor_m2653307320 (BlockAction_t2126287875 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.BlockAction::Invoke(ObjectHierachy.Block)
extern "C"  void BlockAction_Invoke_m1627676301 (BlockAction_t2126287875 * __this, Block_t2982227961 * ___block0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ObjectHierachy.BlockAction::BeginInvoke(ObjectHierachy.Block,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BlockAction_BeginInvoke_m2692111746 (BlockAction_t2126287875 * __this, Block_t2982227961 * ___block0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectHierachy.BlockAction::EndInvoke(System.IAsyncResult)
extern "C"  void BlockAction_EndInvoke_m1710428394 (BlockAction_t2126287875 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
