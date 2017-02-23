#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Instruction.Instruction
struct Instruction_t3672569542;
// Instruction.Resource/FAILEVENT
struct FAILEVENT_t786503275;
// ObjectHierachy.Character
struct Character_t3640641869;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Sprite[][]
struct SpriteU5BU5DU5BU5D_t958601595;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Instruction_INSTRUCTION373603974.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Instruction.Resource
struct  Resource_t623794450  : public Il2CppObject
{
public:

public:
};

struct Resource_t623794450_StaticFields
{
public:
	// Instruction.Instruction Instruction.Resource::instruction
	Instruction_t3672569542 * ___instruction_0;
	// Instruction.Resource/FAILEVENT Instruction.Resource::failEvent
	FAILEVENT_t786503275 * ___failEvent_1;
	// ObjectHierachy.Character Instruction.Resource::character
	Character_t3640641869 * ___character_2;
	// UnityEngine.Vector3[] Instruction.Resource::starPosition
	Vector3U5BU5D_t1172311765* ___starPosition_3;
	// Instruction.INSTRUCTION Instruction.Resource::currentDirection
	int32_t ___currentDirection_4;
	// System.Boolean Instruction.Resource::instructionInput
	bool ___instructionInput_5;
	// System.Collections.ArrayList Instruction.Resource::COLORS
	ArrayList_t4252133567 * ___COLORS_6;
	// System.Boolean Instruction.Resource::canClear
	bool ___canClear_7;
	// System.Boolean Instruction.Resource::movStar
	bool ___movStar_8;
	// System.Boolean[] Instruction.Resource::movRuby
	BooleanU5BU5D_t3568034315* ___movRuby_9;
	// UnityEngine.GameObject[] Instruction.Resource::characters
	GameObjectU5BU5D_t3057952154* ___characters_10;
	// UnityEngine.GameObject[] Instruction.Resource::stars
	GameObjectU5BU5D_t3057952154* ___stars_11;
	// UnityEngine.GameObject Instruction.Resource::ring
	GameObject_t1756533147 * ___ring_12;
	// System.Int32 Instruction.Resource::stage
	int32_t ___stage_13;
	// UnityEngine.Color Instruction.Resource::clearedColor
	Color_t2020392075  ___clearedColor_14;
	// UnityEngine.Sprite Instruction.Resource::deadCharacter
	Sprite_t309593783 * ___deadCharacter_15;
	// UnityEngine.Sprite[][] Instruction.Resource::Accessories
	SpriteU5BU5DU5BU5D_t958601595* ___Accessories_16;
	// System.String Instruction.Resource::previousScene
	String_t* ___previousScene_17;

public:
	inline static int32_t get_offset_of_instruction_0() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___instruction_0)); }
	inline Instruction_t3672569542 * get_instruction_0() const { return ___instruction_0; }
	inline Instruction_t3672569542 ** get_address_of_instruction_0() { return &___instruction_0; }
	inline void set_instruction_0(Instruction_t3672569542 * value)
	{
		___instruction_0 = value;
		Il2CppCodeGenWriteBarrier(&___instruction_0, value);
	}

	inline static int32_t get_offset_of_failEvent_1() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___failEvent_1)); }
	inline FAILEVENT_t786503275 * get_failEvent_1() const { return ___failEvent_1; }
	inline FAILEVENT_t786503275 ** get_address_of_failEvent_1() { return &___failEvent_1; }
	inline void set_failEvent_1(FAILEVENT_t786503275 * value)
	{
		___failEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___failEvent_1, value);
	}

	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___character_2)); }
	inline Character_t3640641869 * get_character_2() const { return ___character_2; }
	inline Character_t3640641869 ** get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(Character_t3640641869 * value)
	{
		___character_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_2, value);
	}

	inline static int32_t get_offset_of_starPosition_3() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___starPosition_3)); }
	inline Vector3U5BU5D_t1172311765* get_starPosition_3() const { return ___starPosition_3; }
	inline Vector3U5BU5D_t1172311765** get_address_of_starPosition_3() { return &___starPosition_3; }
	inline void set_starPosition_3(Vector3U5BU5D_t1172311765* value)
	{
		___starPosition_3 = value;
		Il2CppCodeGenWriteBarrier(&___starPosition_3, value);
	}

	inline static int32_t get_offset_of_currentDirection_4() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___currentDirection_4)); }
	inline int32_t get_currentDirection_4() const { return ___currentDirection_4; }
	inline int32_t* get_address_of_currentDirection_4() { return &___currentDirection_4; }
	inline void set_currentDirection_4(int32_t value)
	{
		___currentDirection_4 = value;
	}

	inline static int32_t get_offset_of_instructionInput_5() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___instructionInput_5)); }
	inline bool get_instructionInput_5() const { return ___instructionInput_5; }
	inline bool* get_address_of_instructionInput_5() { return &___instructionInput_5; }
	inline void set_instructionInput_5(bool value)
	{
		___instructionInput_5 = value;
	}

	inline static int32_t get_offset_of_COLORS_6() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___COLORS_6)); }
	inline ArrayList_t4252133567 * get_COLORS_6() const { return ___COLORS_6; }
	inline ArrayList_t4252133567 ** get_address_of_COLORS_6() { return &___COLORS_6; }
	inline void set_COLORS_6(ArrayList_t4252133567 * value)
	{
		___COLORS_6 = value;
		Il2CppCodeGenWriteBarrier(&___COLORS_6, value);
	}

	inline static int32_t get_offset_of_canClear_7() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___canClear_7)); }
	inline bool get_canClear_7() const { return ___canClear_7; }
	inline bool* get_address_of_canClear_7() { return &___canClear_7; }
	inline void set_canClear_7(bool value)
	{
		___canClear_7 = value;
	}

	inline static int32_t get_offset_of_movStar_8() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___movStar_8)); }
	inline bool get_movStar_8() const { return ___movStar_8; }
	inline bool* get_address_of_movStar_8() { return &___movStar_8; }
	inline void set_movStar_8(bool value)
	{
		___movStar_8 = value;
	}

	inline static int32_t get_offset_of_movRuby_9() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___movRuby_9)); }
	inline BooleanU5BU5D_t3568034315* get_movRuby_9() const { return ___movRuby_9; }
	inline BooleanU5BU5D_t3568034315** get_address_of_movRuby_9() { return &___movRuby_9; }
	inline void set_movRuby_9(BooleanU5BU5D_t3568034315* value)
	{
		___movRuby_9 = value;
		Il2CppCodeGenWriteBarrier(&___movRuby_9, value);
	}

	inline static int32_t get_offset_of_characters_10() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___characters_10)); }
	inline GameObjectU5BU5D_t3057952154* get_characters_10() const { return ___characters_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_characters_10() { return &___characters_10; }
	inline void set_characters_10(GameObjectU5BU5D_t3057952154* value)
	{
		___characters_10 = value;
		Il2CppCodeGenWriteBarrier(&___characters_10, value);
	}

	inline static int32_t get_offset_of_stars_11() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___stars_11)); }
	inline GameObjectU5BU5D_t3057952154* get_stars_11() const { return ___stars_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_stars_11() { return &___stars_11; }
	inline void set_stars_11(GameObjectU5BU5D_t3057952154* value)
	{
		___stars_11 = value;
		Il2CppCodeGenWriteBarrier(&___stars_11, value);
	}

	inline static int32_t get_offset_of_ring_12() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___ring_12)); }
	inline GameObject_t1756533147 * get_ring_12() const { return ___ring_12; }
	inline GameObject_t1756533147 ** get_address_of_ring_12() { return &___ring_12; }
	inline void set_ring_12(GameObject_t1756533147 * value)
	{
		___ring_12 = value;
		Il2CppCodeGenWriteBarrier(&___ring_12, value);
	}

	inline static int32_t get_offset_of_stage_13() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___stage_13)); }
	inline int32_t get_stage_13() const { return ___stage_13; }
	inline int32_t* get_address_of_stage_13() { return &___stage_13; }
	inline void set_stage_13(int32_t value)
	{
		___stage_13 = value;
	}

	inline static int32_t get_offset_of_clearedColor_14() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___clearedColor_14)); }
	inline Color_t2020392075  get_clearedColor_14() const { return ___clearedColor_14; }
	inline Color_t2020392075 * get_address_of_clearedColor_14() { return &___clearedColor_14; }
	inline void set_clearedColor_14(Color_t2020392075  value)
	{
		___clearedColor_14 = value;
	}

	inline static int32_t get_offset_of_deadCharacter_15() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___deadCharacter_15)); }
	inline Sprite_t309593783 * get_deadCharacter_15() const { return ___deadCharacter_15; }
	inline Sprite_t309593783 ** get_address_of_deadCharacter_15() { return &___deadCharacter_15; }
	inline void set_deadCharacter_15(Sprite_t309593783 * value)
	{
		___deadCharacter_15 = value;
		Il2CppCodeGenWriteBarrier(&___deadCharacter_15, value);
	}

	inline static int32_t get_offset_of_Accessories_16() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___Accessories_16)); }
	inline SpriteU5BU5DU5BU5D_t958601595* get_Accessories_16() const { return ___Accessories_16; }
	inline SpriteU5BU5DU5BU5D_t958601595** get_address_of_Accessories_16() { return &___Accessories_16; }
	inline void set_Accessories_16(SpriteU5BU5DU5BU5D_t958601595* value)
	{
		___Accessories_16 = value;
		Il2CppCodeGenWriteBarrier(&___Accessories_16, value);
	}

	inline static int32_t get_offset_of_previousScene_17() { return static_cast<int32_t>(offsetof(Resource_t623794450_StaticFields, ___previousScene_17)); }
	inline String_t* get_previousScene_17() const { return ___previousScene_17; }
	inline String_t** get_address_of_previousScene_17() { return &___previousScene_17; }
	inline void set_previousScene_17(String_t* value)
	{
		___previousScene_17 = value;
		Il2CppCodeGenWriteBarrier(&___previousScene_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
