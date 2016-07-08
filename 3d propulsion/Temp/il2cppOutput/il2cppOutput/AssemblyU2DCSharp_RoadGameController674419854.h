#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoadGameController
struct  RoadGameController_t674419854  : public MonoBehaviour_t3012272455
{
public:
	// System.Single RoadGameController::startWait
	float ___startWait_2;
	// System.Single RoadGameController::waveWait
	float ___waveWait_3;
	// System.Single RoadGameController::spawnWait
	float ___spawnWait_4;
	// UnityEngine.GameObject RoadGameController::Hazard
	GameObject_t4012695102 * ___Hazard_5;
	// System.Int32 RoadGameController::hazardCount
	int32_t ___hazardCount_6;

public:
	inline static int32_t get_offset_of_startWait_2() { return static_cast<int32_t>(offsetof(RoadGameController_t674419854, ___startWait_2)); }
	inline float get_startWait_2() const { return ___startWait_2; }
	inline float* get_address_of_startWait_2() { return &___startWait_2; }
	inline void set_startWait_2(float value)
	{
		___startWait_2 = value;
	}

	inline static int32_t get_offset_of_waveWait_3() { return static_cast<int32_t>(offsetof(RoadGameController_t674419854, ___waveWait_3)); }
	inline float get_waveWait_3() const { return ___waveWait_3; }
	inline float* get_address_of_waveWait_3() { return &___waveWait_3; }
	inline void set_waveWait_3(float value)
	{
		___waveWait_3 = value;
	}

	inline static int32_t get_offset_of_spawnWait_4() { return static_cast<int32_t>(offsetof(RoadGameController_t674419854, ___spawnWait_4)); }
	inline float get_spawnWait_4() const { return ___spawnWait_4; }
	inline float* get_address_of_spawnWait_4() { return &___spawnWait_4; }
	inline void set_spawnWait_4(float value)
	{
		___spawnWait_4 = value;
	}

	inline static int32_t get_offset_of_Hazard_5() { return static_cast<int32_t>(offsetof(RoadGameController_t674419854, ___Hazard_5)); }
	inline GameObject_t4012695102 * get_Hazard_5() const { return ___Hazard_5; }
	inline GameObject_t4012695102 ** get_address_of_Hazard_5() { return &___Hazard_5; }
	inline void set_Hazard_5(GameObject_t4012695102 * value)
	{
		___Hazard_5 = value;
		Il2CppCodeGenWriteBarrier(&___Hazard_5, value);
	}

	inline static int32_t get_offset_of_hazardCount_6() { return static_cast<int32_t>(offsetof(RoadGameController_t674419854, ___hazardCount_6)); }
	inline int32_t get_hazardCount_6() const { return ___hazardCount_6; }
	inline int32_t* get_address_of_hazardCount_6() { return &___hazardCount_6; }
	inline void set_hazardCount_6(int32_t value)
	{
		___hazardCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
