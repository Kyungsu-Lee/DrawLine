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

// FileHelper.FileStreamHelper
struct FileStreamHelper_t3206080108;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void FileHelper.FileStreamHelper::.ctor()
extern "C"  void FileStreamHelper__ctor_m3459310725 (FileStreamHelper_t3206080108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileHelper.FileStreamHelper::writeStringToFile(System.String,System.String)
extern "C"  void FileStreamHelper_writeStringToFile_m4150035962 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileHelper.FileStreamHelper::writeStringToFileAppend(System.String,System.String)
extern "C"  void FileStreamHelper_writeStringToFileAppend_m1389332734 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileHelper.FileStreamHelper::readStringFromFile(System.String)
extern "C"  String_t* FileStreamHelper_readStringFromFile_m2709095001 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FileHelper.FileStreamHelper::pathForDocumentsFile(System.String)
extern "C"  String_t* FileStreamHelper_pathForDocumentsFile_m2025365602 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileHelper.FileStreamHelper::log(System.String)
extern "C"  void FileStreamHelper_log_m3963568183 (Il2CppObject * __this /* static, unused */, String_t* ___log0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileHelper.FileStreamHelper::log(System.Int32)
extern "C"  void FileStreamHelper_log_m971279266 (Il2CppObject * __this /* static, unused */, int32_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FileHelper.FileStreamHelper::.cctor()
extern "C"  void FileStreamHelper__cctor_m3938983652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
