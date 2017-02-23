#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ObjectHierachy.Block[]
struct BlockU5BU5D_t1707711492;
// ObjectHierachy.Block
struct Block_t2982227961;

#include "mscorlib_System_Array3829468939.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "AssemblyU2DCSharp_ObjectHierachy_Block2982227961.h"

#pragma once
// ObjectHierachy.Block[][]
struct BlockU5BU5DU5BU5D_t1947926381  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BlockU5BU5D_t1707711492* m_Items[1];

public:
	inline BlockU5BU5D_t1707711492* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BlockU5BU5D_t1707711492** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BlockU5BU5D_t1707711492* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BlockU5BU5D_t1707711492* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BlockU5BU5D_t1707711492** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BlockU5BU5D_t1707711492* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ObjectHierachy.Block[]
struct BlockU5BU5D_t1707711492  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Block_t2982227961 * m_Items[1];

public:
	inline Block_t2982227961 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Block_t2982227961 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Block_t2982227961 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Block_t2982227961 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Block_t2982227961 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Block_t2982227961 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
