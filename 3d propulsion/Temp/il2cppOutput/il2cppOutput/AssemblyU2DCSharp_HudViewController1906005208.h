#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HudViewController
struct HudViewController_t1906005208;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HudViewController
struct  HudViewController_t1906005208  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject HudViewController::signalLeft
	GameObject_t4012695102 * ___signalLeft_3;
	// UnityEngine.GameObject HudViewController::signalCenter
	GameObject_t4012695102 * ___signalCenter_4;
	// UnityEngine.GameObject HudViewController::signalRight
	GameObject_t4012695102 * ___signalRight_5;
	// System.Single HudViewController::timeThreshold
	float ___timeThreshold_6;
	// System.Int32 HudViewController::countdown
	int32_t ___countdown_7;
	// System.Single HudViewController::leftCountdown
	float ___leftCountdown_8;
	// System.Single HudViewController::rightCountdown
	float ___rightCountdown_9;
	// System.Single HudViewController::centerCountdown
	float ___centerCountdown_10;

public:
	inline static int32_t get_offset_of_signalLeft_3() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___signalLeft_3)); }
	inline GameObject_t4012695102 * get_signalLeft_3() const { return ___signalLeft_3; }
	inline GameObject_t4012695102 ** get_address_of_signalLeft_3() { return &___signalLeft_3; }
	inline void set_signalLeft_3(GameObject_t4012695102 * value)
	{
		___signalLeft_3 = value;
		Il2CppCodeGenWriteBarrier(&___signalLeft_3, value);
	}

	inline static int32_t get_offset_of_signalCenter_4() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___signalCenter_4)); }
	inline GameObject_t4012695102 * get_signalCenter_4() const { return ___signalCenter_4; }
	inline GameObject_t4012695102 ** get_address_of_signalCenter_4() { return &___signalCenter_4; }
	inline void set_signalCenter_4(GameObject_t4012695102 * value)
	{
		___signalCenter_4 = value;
		Il2CppCodeGenWriteBarrier(&___signalCenter_4, value);
	}

	inline static int32_t get_offset_of_signalRight_5() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___signalRight_5)); }
	inline GameObject_t4012695102 * get_signalRight_5() const { return ___signalRight_5; }
	inline GameObject_t4012695102 ** get_address_of_signalRight_5() { return &___signalRight_5; }
	inline void set_signalRight_5(GameObject_t4012695102 * value)
	{
		___signalRight_5 = value;
		Il2CppCodeGenWriteBarrier(&___signalRight_5, value);
	}

	inline static int32_t get_offset_of_timeThreshold_6() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___timeThreshold_6)); }
	inline float get_timeThreshold_6() const { return ___timeThreshold_6; }
	inline float* get_address_of_timeThreshold_6() { return &___timeThreshold_6; }
	inline void set_timeThreshold_6(float value)
	{
		___timeThreshold_6 = value;
	}

	inline static int32_t get_offset_of_countdown_7() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___countdown_7)); }
	inline int32_t get_countdown_7() const { return ___countdown_7; }
	inline int32_t* get_address_of_countdown_7() { return &___countdown_7; }
	inline void set_countdown_7(int32_t value)
	{
		___countdown_7 = value;
	}

	inline static int32_t get_offset_of_leftCountdown_8() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___leftCountdown_8)); }
	inline float get_leftCountdown_8() const { return ___leftCountdown_8; }
	inline float* get_address_of_leftCountdown_8() { return &___leftCountdown_8; }
	inline void set_leftCountdown_8(float value)
	{
		___leftCountdown_8 = value;
	}

	inline static int32_t get_offset_of_rightCountdown_9() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___rightCountdown_9)); }
	inline float get_rightCountdown_9() const { return ___rightCountdown_9; }
	inline float* get_address_of_rightCountdown_9() { return &___rightCountdown_9; }
	inline void set_rightCountdown_9(float value)
	{
		___rightCountdown_9 = value;
	}

	inline static int32_t get_offset_of_centerCountdown_10() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208, ___centerCountdown_10)); }
	inline float get_centerCountdown_10() const { return ___centerCountdown_10; }
	inline float* get_address_of_centerCountdown_10() { return &___centerCountdown_10; }
	inline void set_centerCountdown_10(float value)
	{
		___centerCountdown_10 = value;
	}
};

struct HudViewController_t1906005208_StaticFields
{
public:
	// HudViewController HudViewController::Instance
	HudViewController_t1906005208 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(HudViewController_t1906005208_StaticFields, ___Instance_2)); }
	inline HudViewController_t1906005208 * get_Instance_2() const { return ___Instance_2; }
	inline HudViewController_t1906005208 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(HudViewController_t1906005208 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
