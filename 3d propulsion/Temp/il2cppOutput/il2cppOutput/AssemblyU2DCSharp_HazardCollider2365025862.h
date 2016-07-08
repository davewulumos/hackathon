#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HazardCollider
struct  HazardCollider_t2365025862  : public MonoBehaviour_t3012272455
{
public:
	// System.String HazardCollider::position
	String_t* ___position_2;

public:
	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(HazardCollider_t2365025862, ___position_2)); }
	inline String_t* get_position_2() const { return ___position_2; }
	inline String_t** get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(String_t* value)
	{
		___position_2 = value;
		Il2CppCodeGenWriteBarrier(&___position_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
