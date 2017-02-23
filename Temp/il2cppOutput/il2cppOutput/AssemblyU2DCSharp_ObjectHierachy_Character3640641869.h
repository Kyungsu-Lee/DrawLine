#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// ObjectHierachy.CharacterStatus
struct CharacterStatus_t1181454901;
// ObjectHierachy.ACTION
struct ACTION_t3578698124;
// ObjectHierachy.Accessory
struct Accessory_t4242569788;

#include "AssemblyU2DCSharp_ObjectHierachy_MapObject2027552809.h"
#include "AssemblyU2DCSharp_ObjectHierachy_ObtacleKind3365440996.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectHierachy.Character
struct  Character_t3640641869  : public MapObject_t2027552809
{
public:
	// ObjectHierachy.CharacterStatus ObjectHierachy.Character::characterstatus
	CharacterStatus_t1181454901 * ___characterstatus_12;
	// ObjectHierachy.ACTION ObjectHierachy.Character::before
	ACTION_t3578698124 * ___before_13;
	// ObjectHierachy.ACTION ObjectHierachy.Character::after
	ACTION_t3578698124 * ___after_14;
	// ObjectHierachy.ACTION ObjectHierachy.Character::UnitAction
	ACTION_t3578698124 * ___UnitAction_15;
	// ObjectHierachy.Accessory ObjectHierachy.Character::<Match>k__BackingField
	Accessory_t4242569788 * ___U3CMatchU3Ek__BackingField_16;
	// System.Boolean ObjectHierachy.Character::<Cleared>k__BackingField
	bool ___U3CClearedU3Ek__BackingField_17;
	// System.Single ObjectHierachy.Character::<Speed>k__BackingField
	float ___U3CSpeedU3Ek__BackingField_18;
	// ObjectHierachy.ObtacleKind ObjectHierachy.Character::<obtacles>k__BackingField
	int32_t ___U3CobtaclesU3Ek__BackingField_19;
	// System.Boolean ObjectHierachy.Character::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_characterstatus_12() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___characterstatus_12)); }
	inline CharacterStatus_t1181454901 * get_characterstatus_12() const { return ___characterstatus_12; }
	inline CharacterStatus_t1181454901 ** get_address_of_characterstatus_12() { return &___characterstatus_12; }
	inline void set_characterstatus_12(CharacterStatus_t1181454901 * value)
	{
		___characterstatus_12 = value;
		Il2CppCodeGenWriteBarrier(&___characterstatus_12, value);
	}

	inline static int32_t get_offset_of_before_13() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___before_13)); }
	inline ACTION_t3578698124 * get_before_13() const { return ___before_13; }
	inline ACTION_t3578698124 ** get_address_of_before_13() { return &___before_13; }
	inline void set_before_13(ACTION_t3578698124 * value)
	{
		___before_13 = value;
		Il2CppCodeGenWriteBarrier(&___before_13, value);
	}

	inline static int32_t get_offset_of_after_14() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___after_14)); }
	inline ACTION_t3578698124 * get_after_14() const { return ___after_14; }
	inline ACTION_t3578698124 ** get_address_of_after_14() { return &___after_14; }
	inline void set_after_14(ACTION_t3578698124 * value)
	{
		___after_14 = value;
		Il2CppCodeGenWriteBarrier(&___after_14, value);
	}

	inline static int32_t get_offset_of_UnitAction_15() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___UnitAction_15)); }
	inline ACTION_t3578698124 * get_UnitAction_15() const { return ___UnitAction_15; }
	inline ACTION_t3578698124 ** get_address_of_UnitAction_15() { return &___UnitAction_15; }
	inline void set_UnitAction_15(ACTION_t3578698124 * value)
	{
		___UnitAction_15 = value;
		Il2CppCodeGenWriteBarrier(&___UnitAction_15, value);
	}

	inline static int32_t get_offset_of_U3CMatchU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___U3CMatchU3Ek__BackingField_16)); }
	inline Accessory_t4242569788 * get_U3CMatchU3Ek__BackingField_16() const { return ___U3CMatchU3Ek__BackingField_16; }
	inline Accessory_t4242569788 ** get_address_of_U3CMatchU3Ek__BackingField_16() { return &___U3CMatchU3Ek__BackingField_16; }
	inline void set_U3CMatchU3Ek__BackingField_16(Accessory_t4242569788 * value)
	{
		___U3CMatchU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMatchU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CClearedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___U3CClearedU3Ek__BackingField_17)); }
	inline bool get_U3CClearedU3Ek__BackingField_17() const { return ___U3CClearedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CClearedU3Ek__BackingField_17() { return &___U3CClearedU3Ek__BackingField_17; }
	inline void set_U3CClearedU3Ek__BackingField_17(bool value)
	{
		___U3CClearedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CSpeedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___U3CSpeedU3Ek__BackingField_18)); }
	inline float get_U3CSpeedU3Ek__BackingField_18() const { return ___U3CSpeedU3Ek__BackingField_18; }
	inline float* get_address_of_U3CSpeedU3Ek__BackingField_18() { return &___U3CSpeedU3Ek__BackingField_18; }
	inline void set_U3CSpeedU3Ek__BackingField_18(float value)
	{
		___U3CSpeedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CobtaclesU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___U3CobtaclesU3Ek__BackingField_19)); }
	inline int32_t get_U3CobtaclesU3Ek__BackingField_19() const { return ___U3CobtaclesU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CobtaclesU3Ek__BackingField_19() { return &___U3CobtaclesU3Ek__BackingField_19; }
	inline void set_U3CobtaclesU3Ek__BackingField_19(int32_t value)
	{
		___U3CobtaclesU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsActivatedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Character_t3640641869, ___U3CIsActivatedU3Ek__BackingField_20)); }
	inline bool get_U3CIsActivatedU3Ek__BackingField_20() const { return ___U3CIsActivatedU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsActivatedU3Ek__BackingField_20() { return &___U3CIsActivatedU3Ek__BackingField_20; }
	inline void set_U3CIsActivatedU3Ek__BackingField_20(bool value)
	{
		___U3CIsActivatedU3Ek__BackingField_20 = value;
	}
};

struct Character_t3640641869_StaticFields
{
public:
	// System.Collections.ArrayList ObjectHierachy.Character::characters
	ArrayList_t4252133567 * ___characters_11;

public:
	inline static int32_t get_offset_of_characters_11() { return static_cast<int32_t>(offsetof(Character_t3640641869_StaticFields, ___characters_11)); }
	inline ArrayList_t4252133567 * get_characters_11() const { return ___characters_11; }
	inline ArrayList_t4252133567 ** get_address_of_characters_11() { return &___characters_11; }
	inline void set_characters_11(ArrayList_t4252133567 * value)
	{
		___characters_11 = value;
		Il2CppCodeGenWriteBarrier(&___characters_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
