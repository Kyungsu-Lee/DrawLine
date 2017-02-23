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

// Instruction.Instruction
struct Instruction_t3672569542;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Instruction_Instruction3672569542.h"
#include "AssemblyU2DCSharp_Instruction_INSTRUCTION373603974.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Instruction.Instruction::.ctor()
extern "C"  void Instruction__ctor_m3676909965 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::get_next()
extern "C"  Instruction_t3672569542 * Instruction_get_next_m2751900624 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instruction.Instruction::set_next(Instruction.Instruction)
extern "C"  void Instruction_set_next_m2779555197 (Instruction_t3672569542 * __this, Instruction_t3672569542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::get_before()
extern "C"  Instruction_t3672569542 * Instruction_get_before_m3472245470 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instruction.Instruction::set_before(Instruction.Instruction)
extern "C"  void Instruction_set_before_m2361275835 (Instruction_t3672569542 * __this, Instruction_t3672569542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.INSTRUCTION Instruction.Instruction::get_instruction()
extern "C"  int32_t Instruction_get_instruction_m3719455149 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instruction.Instruction::set_instruction(Instruction.INSTRUCTION)
extern "C"  void Instruction_set_instruction_m1116635814 (Instruction_t3672569542 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Instruction.Instruction::checkValid()
extern "C"  bool Instruction_checkValid_m3172663581 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::op_Addition(Instruction.Instruction,Instruction.Instruction)
extern "C"  Instruction_t3672569542 * Instruction_op_Addition_m3798278180 (Il2CppObject * __this /* static, unused */, Instruction_t3672569542 * ___one0, Instruction_t3672569542 * ___other1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::make(Instruction.INSTRUCTION)
extern "C"  Instruction_t3672569542 * Instruction_make_m178577642 (Instruction_t3672569542 * __this, int32_t ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::make(System.String)
extern "C"  Instruction_t3672569542 * Instruction_make_m3516609684 (Instruction_t3672569542 * __this, String_t* ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.INSTRUCTION Instruction.Instruction::convert(System.String)
extern "C"  int32_t Instruction_convert_m3940484341 (Instruction_t3672569542 * __this, String_t* ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::one()
extern "C"  Instruction_t3672569542 * Instruction_one_m925706134 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::two()
extern "C"  Instruction_t3672569542 * Instruction_two_m3005185032 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::three()
extern "C"  Instruction_t3672569542 * Instruction_three_m994987354 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::four()
extern "C"  Instruction_t3672569542 * Instruction_four_m1980460096 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::five()
extern "C"  Instruction_t3672569542 * Instruction_five_m3566748692 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::move()
extern "C"  Instruction_t3672569542 * Instruction_move_m3861402881 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::breaks()
extern "C"  Instruction_t3672569542 * Instruction_breaks_m3190040412 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::jump()
extern "C"  Instruction_t3672569542 * Instruction_jump_m2046267044 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::up()
extern "C"  Instruction_t3672569542 * Instruction_up_m226050825 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::down()
extern "C"  Instruction_t3672569542 * Instruction_down_m1535994212 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::right()
extern "C"  Instruction_t3672569542 * Instruction_right_m1846074072 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.Instruction Instruction.Instruction::left()
extern "C"  Instruction_t3672569542 * Instruction_left_m128259479 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Instruction.INSTRUCTION Instruction.Instruction::typeCheck(Instruction.INSTRUCTION)
extern "C"  int32_t Instruction_typeCheck_m3678683630 (Instruction_t3672569542 * __this, int32_t ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Instruction.Instruction::ToString()
extern "C"  String_t* Instruction_ToString_m2952347098 (Instruction_t3672569542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instruction.Instruction::make(Instruction.Instruction)
extern "C"  void Instruction_make_m1707779413 (Instruction_t3672569542 * __this, Instruction_t3672569542 * ___instruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
