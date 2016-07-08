#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CardboardHead
struct CardboardHead_t2975823030;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// CardboardHead PlayerController::head
	CardboardHead_t2975823030 * ___head_2;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_3;
	// System.Single PlayerController::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___head_2)); }
	inline CardboardHead_t2975823030 * get_head_2() const { return ___head_2; }
	inline CardboardHead_t2975823030 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(CardboardHead_t2975823030 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier(&___head_2, value);
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_3)); }
	inline Rigidbody_t1972007546 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t1972007546 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
