#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Move
struct  Move_t2404337  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Move::dx
	float ___dx_2;
	// System.Single Move::dy
	float ___dy_3;
	// System.Single Move::dz
	float ___dz_4;
	// UnityEngine.Rigidbody Move::rb
	Rigidbody_t1972007546 * ___rb_5;
	// System.Single Move::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_dx_2() { return static_cast<int32_t>(offsetof(Move_t2404337, ___dx_2)); }
	inline float get_dx_2() const { return ___dx_2; }
	inline float* get_address_of_dx_2() { return &___dx_2; }
	inline void set_dx_2(float value)
	{
		___dx_2 = value;
	}

	inline static int32_t get_offset_of_dy_3() { return static_cast<int32_t>(offsetof(Move_t2404337, ___dy_3)); }
	inline float get_dy_3() const { return ___dy_3; }
	inline float* get_address_of_dy_3() { return &___dy_3; }
	inline void set_dy_3(float value)
	{
		___dy_3 = value;
	}

	inline static int32_t get_offset_of_dz_4() { return static_cast<int32_t>(offsetof(Move_t2404337, ___dz_4)); }
	inline float get_dz_4() const { return ___dz_4; }
	inline float* get_address_of_dz_4() { return &___dz_4; }
	inline void set_dz_4(float value)
	{
		___dz_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(Move_t2404337, ___rb_5)); }
	inline Rigidbody_t1972007546 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t1972007546 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Move_t2404337, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
