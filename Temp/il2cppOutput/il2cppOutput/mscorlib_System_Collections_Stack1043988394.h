#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t1043988394  : public Il2CppObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t3614634134* ___contents_1;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_2;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_3;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_4;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_5;

public:
	inline static int32_t get_offset_of_contents_1() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___contents_1)); }
	inline ObjectU5BU5D_t3614634134* get_contents_1() const { return ___contents_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_contents_1() { return &___contents_1; }
	inline void set_contents_1(ObjectU5BU5D_t3614634134* value)
	{
		___contents_1 = value;
		Il2CppCodeGenWriteBarrier(&___contents_1, value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_capacity_4() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___capacity_4)); }
	inline int32_t get_capacity_4() const { return ___capacity_4; }
	inline int32_t* get_address_of_capacity_4() { return &___capacity_4; }
	inline void set_capacity_4(int32_t value)
	{
		___capacity_4 = value;
	}

	inline static int32_t get_offset_of_modCount_5() { return static_cast<int32_t>(offsetof(Stack_t1043988394, ___modCount_5)); }
	inline int32_t get_modCount_5() const { return ___modCount_5; }
	inline int32_t* get_address_of_modCount_5() { return &___modCount_5; }
	inline void set_modCount_5(int32_t value)
	{
		___modCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
