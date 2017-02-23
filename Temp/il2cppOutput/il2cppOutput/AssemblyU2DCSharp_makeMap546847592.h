#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// makeMap/Clear
struct Clear_t340742046;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// ObjectHierachy.Map
struct Map_t1278671608;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// makeMap
struct  makeMap_t546847592  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject makeMap::block
	GameObject_t1756533147 * ___block_3;
	// UnityEngine.GameObject makeMap::mapBackground
	GameObject_t1756533147 * ___mapBackground_4;
	// UnityEngine.GameObject makeMap::ring
	GameObject_t1756533147 * ___ring_5;
	// UnityEngine.GameObject[] makeMap::character
	GameObjectU5BU5D_t3057952154* ___character_6;
	// UnityEngine.GameObject[] makeMap::obtacle
	GameObjectU5BU5D_t3057952154* ___obtacle_7;
	// UnityEngine.GameObject[] makeMap::accessory
	GameObjectU5BU5D_t3057952154* ___accessory_8;
	// UnityEngine.GameObject[] makeMap::colorObject
	GameObjectU5BU5D_t3057952154* ___colorObject_9;
	// UnityEngine.GameObject[] makeMap::stars
	GameObjectU5BU5D_t3057952154* ___stars_10;
	// UnityEngine.Sprite[] makeMap::rubies
	SpriteU5BU5D_t3359083662* ___rubies_11;
	// UnityEngine.Vector3[] makeMap::startPosition
	Vector3U5BU5D_t1172311765* ___startPosition_12;
	// System.Collections.ArrayList makeMap::unclearedCharacter
	ArrayList_t4252133567 * ___unclearedCharacter_13;
	// ObjectHierachy.Map makeMap::map
	Map_t1278671608 * ___map_14;
	// System.Int32 makeMap::characterIndex
	int32_t ___characterIndex_15;
	// System.Boolean makeMap::initialState
	bool ___initialState_16;

public:
	inline static int32_t get_offset_of_block_3() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___block_3)); }
	inline GameObject_t1756533147 * get_block_3() const { return ___block_3; }
	inline GameObject_t1756533147 ** get_address_of_block_3() { return &___block_3; }
	inline void set_block_3(GameObject_t1756533147 * value)
	{
		___block_3 = value;
		Il2CppCodeGenWriteBarrier(&___block_3, value);
	}

	inline static int32_t get_offset_of_mapBackground_4() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___mapBackground_4)); }
	inline GameObject_t1756533147 * get_mapBackground_4() const { return ___mapBackground_4; }
	inline GameObject_t1756533147 ** get_address_of_mapBackground_4() { return &___mapBackground_4; }
	inline void set_mapBackground_4(GameObject_t1756533147 * value)
	{
		___mapBackground_4 = value;
		Il2CppCodeGenWriteBarrier(&___mapBackground_4, value);
	}

	inline static int32_t get_offset_of_ring_5() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___ring_5)); }
	inline GameObject_t1756533147 * get_ring_5() const { return ___ring_5; }
	inline GameObject_t1756533147 ** get_address_of_ring_5() { return &___ring_5; }
	inline void set_ring_5(GameObject_t1756533147 * value)
	{
		___ring_5 = value;
		Il2CppCodeGenWriteBarrier(&___ring_5, value);
	}

	inline static int32_t get_offset_of_character_6() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___character_6)); }
	inline GameObjectU5BU5D_t3057952154* get_character_6() const { return ___character_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_character_6() { return &___character_6; }
	inline void set_character_6(GameObjectU5BU5D_t3057952154* value)
	{
		___character_6 = value;
		Il2CppCodeGenWriteBarrier(&___character_6, value);
	}

	inline static int32_t get_offset_of_obtacle_7() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___obtacle_7)); }
	inline GameObjectU5BU5D_t3057952154* get_obtacle_7() const { return ___obtacle_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_obtacle_7() { return &___obtacle_7; }
	inline void set_obtacle_7(GameObjectU5BU5D_t3057952154* value)
	{
		___obtacle_7 = value;
		Il2CppCodeGenWriteBarrier(&___obtacle_7, value);
	}

	inline static int32_t get_offset_of_accessory_8() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___accessory_8)); }
	inline GameObjectU5BU5D_t3057952154* get_accessory_8() const { return ___accessory_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_accessory_8() { return &___accessory_8; }
	inline void set_accessory_8(GameObjectU5BU5D_t3057952154* value)
	{
		___accessory_8 = value;
		Il2CppCodeGenWriteBarrier(&___accessory_8, value);
	}

	inline static int32_t get_offset_of_colorObject_9() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___colorObject_9)); }
	inline GameObjectU5BU5D_t3057952154* get_colorObject_9() const { return ___colorObject_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_colorObject_9() { return &___colorObject_9; }
	inline void set_colorObject_9(GameObjectU5BU5D_t3057952154* value)
	{
		___colorObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___colorObject_9, value);
	}

	inline static int32_t get_offset_of_stars_10() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___stars_10)); }
	inline GameObjectU5BU5D_t3057952154* get_stars_10() const { return ___stars_10; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_stars_10() { return &___stars_10; }
	inline void set_stars_10(GameObjectU5BU5D_t3057952154* value)
	{
		___stars_10 = value;
		Il2CppCodeGenWriteBarrier(&___stars_10, value);
	}

	inline static int32_t get_offset_of_rubies_11() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___rubies_11)); }
	inline SpriteU5BU5D_t3359083662* get_rubies_11() const { return ___rubies_11; }
	inline SpriteU5BU5D_t3359083662** get_address_of_rubies_11() { return &___rubies_11; }
	inline void set_rubies_11(SpriteU5BU5D_t3359083662* value)
	{
		___rubies_11 = value;
		Il2CppCodeGenWriteBarrier(&___rubies_11, value);
	}

	inline static int32_t get_offset_of_startPosition_12() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___startPosition_12)); }
	inline Vector3U5BU5D_t1172311765* get_startPosition_12() const { return ___startPosition_12; }
	inline Vector3U5BU5D_t1172311765** get_address_of_startPosition_12() { return &___startPosition_12; }
	inline void set_startPosition_12(Vector3U5BU5D_t1172311765* value)
	{
		___startPosition_12 = value;
		Il2CppCodeGenWriteBarrier(&___startPosition_12, value);
	}

	inline static int32_t get_offset_of_unclearedCharacter_13() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___unclearedCharacter_13)); }
	inline ArrayList_t4252133567 * get_unclearedCharacter_13() const { return ___unclearedCharacter_13; }
	inline ArrayList_t4252133567 ** get_address_of_unclearedCharacter_13() { return &___unclearedCharacter_13; }
	inline void set_unclearedCharacter_13(ArrayList_t4252133567 * value)
	{
		___unclearedCharacter_13 = value;
		Il2CppCodeGenWriteBarrier(&___unclearedCharacter_13, value);
	}

	inline static int32_t get_offset_of_map_14() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___map_14)); }
	inline Map_t1278671608 * get_map_14() const { return ___map_14; }
	inline Map_t1278671608 ** get_address_of_map_14() { return &___map_14; }
	inline void set_map_14(Map_t1278671608 * value)
	{
		___map_14 = value;
		Il2CppCodeGenWriteBarrier(&___map_14, value);
	}

	inline static int32_t get_offset_of_characterIndex_15() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___characterIndex_15)); }
	inline int32_t get_characterIndex_15() const { return ___characterIndex_15; }
	inline int32_t* get_address_of_characterIndex_15() { return &___characterIndex_15; }
	inline void set_characterIndex_15(int32_t value)
	{
		___characterIndex_15 = value;
	}

	inline static int32_t get_offset_of_initialState_16() { return static_cast<int32_t>(offsetof(makeMap_t546847592, ___initialState_16)); }
	inline bool get_initialState_16() const { return ___initialState_16; }
	inline bool* get_address_of_initialState_16() { return &___initialState_16; }
	inline void set_initialState_16(bool value)
	{
		___initialState_16 = value;
	}
};

struct makeMap_t546847592_StaticFields
{
public:
	// makeMap/Clear makeMap::clearEvent
	Clear_t340742046 * ___clearEvent_2;

public:
	inline static int32_t get_offset_of_clearEvent_2() { return static_cast<int32_t>(offsetof(makeMap_t546847592_StaticFields, ___clearEvent_2)); }
	inline Clear_t340742046 * get_clearEvent_2() const { return ___clearEvent_2; }
	inline Clear_t340742046 ** get_address_of_clearEvent_2() { return &___clearEvent_2; }
	inline void set_clearEvent_2(Clear_t340742046 * value)
	{
		___clearEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___clearEvent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
