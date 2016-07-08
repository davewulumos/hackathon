#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarController
struct  CarController_t1094858352  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3 CarController::waypoint
	Vector3_t3525329789  ___waypoint_2;
	// UnityEngine.Vector3[] CarController::waypoints
	Vector3U5BU5D_t3227571696* ___waypoints_3;
	// System.Int32 CarController::WPindexPointer
	int32_t ___WPindexPointer_4;
	// System.Int32 CarController::shields
	int32_t ___shields_5;
	// System.Int32 CarController::numSections
	int32_t ___numSections_6;
	// System.Boolean CarController::reachedNextWaypoint
	bool ___reachedNextWaypoint_7;
	// System.Single CarController::speed
	float ___speed_8;
	// System.Int32 CarController::nextWaypointIndex
	int32_t ___nextWaypointIndex_9;
	// System.Single CarController::rotationDamping
	float ___rotationDamping_10;
	// System.String CarController::position
	String_t* ___position_11;

public:
	inline static int32_t get_offset_of_waypoint_2() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___waypoint_2)); }
	inline Vector3_t3525329789  get_waypoint_2() const { return ___waypoint_2; }
	inline Vector3_t3525329789 * get_address_of_waypoint_2() { return &___waypoint_2; }
	inline void set_waypoint_2(Vector3_t3525329789  value)
	{
		___waypoint_2 = value;
	}

	inline static int32_t get_offset_of_waypoints_3() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___waypoints_3)); }
	inline Vector3U5BU5D_t3227571696* get_waypoints_3() const { return ___waypoints_3; }
	inline Vector3U5BU5D_t3227571696** get_address_of_waypoints_3() { return &___waypoints_3; }
	inline void set_waypoints_3(Vector3U5BU5D_t3227571696* value)
	{
		___waypoints_3 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_3, value);
	}

	inline static int32_t get_offset_of_WPindexPointer_4() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___WPindexPointer_4)); }
	inline int32_t get_WPindexPointer_4() const { return ___WPindexPointer_4; }
	inline int32_t* get_address_of_WPindexPointer_4() { return &___WPindexPointer_4; }
	inline void set_WPindexPointer_4(int32_t value)
	{
		___WPindexPointer_4 = value;
	}

	inline static int32_t get_offset_of_shields_5() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___shields_5)); }
	inline int32_t get_shields_5() const { return ___shields_5; }
	inline int32_t* get_address_of_shields_5() { return &___shields_5; }
	inline void set_shields_5(int32_t value)
	{
		___shields_5 = value;
	}

	inline static int32_t get_offset_of_numSections_6() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___numSections_6)); }
	inline int32_t get_numSections_6() const { return ___numSections_6; }
	inline int32_t* get_address_of_numSections_6() { return &___numSections_6; }
	inline void set_numSections_6(int32_t value)
	{
		___numSections_6 = value;
	}

	inline static int32_t get_offset_of_reachedNextWaypoint_7() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___reachedNextWaypoint_7)); }
	inline bool get_reachedNextWaypoint_7() const { return ___reachedNextWaypoint_7; }
	inline bool* get_address_of_reachedNextWaypoint_7() { return &___reachedNextWaypoint_7; }
	inline void set_reachedNextWaypoint_7(bool value)
	{
		___reachedNextWaypoint_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_nextWaypointIndex_9() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___nextWaypointIndex_9)); }
	inline int32_t get_nextWaypointIndex_9() const { return ___nextWaypointIndex_9; }
	inline int32_t* get_address_of_nextWaypointIndex_9() { return &___nextWaypointIndex_9; }
	inline void set_nextWaypointIndex_9(int32_t value)
	{
		___nextWaypointIndex_9 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_10() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___rotationDamping_10)); }
	inline float get_rotationDamping_10() const { return ___rotationDamping_10; }
	inline float* get_address_of_rotationDamping_10() { return &___rotationDamping_10; }
	inline void set_rotationDamping_10(float value)
	{
		___rotationDamping_10 = value;
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(CarController_t1094858352, ___position_11)); }
	inline String_t* get_position_11() const { return ___position_11; }
	inline String_t** get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(String_t* value)
	{
		___position_11 = value;
		Il2CppCodeGenWriteBarrier(&___position_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
