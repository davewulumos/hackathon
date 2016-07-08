#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// CardboardHead
struct CardboardHead_t2975823030;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// RoadGamePlayerController
struct RoadGamePlayerController_t601614543;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoadGamePlayerController
struct  RoadGamePlayerController_t601614543  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] RoadGamePlayerController::sectionMarkers
	GameObjectU5BU5D_t3499186955* ___sectionMarkers_2;
	// System.Single RoadGamePlayerController::rotationDamping
	float ___rotationDamping_3;
	// System.Single RoadGamePlayerController::maxSpeed
	float ___maxSpeed_4;
	// System.Single RoadGamePlayerController::acceleration
	float ___acceleration_5;
	// System.Int32 RoadGamePlayerController::rotationSensitivity
	int32_t ___rotationSensitivity_6;
	// System.Single RoadGamePlayerController::maxOffset
	float ___maxOffset_7;
	// UnityEngine.GameObject RoadGamePlayerController::sectionMarkerObject
	GameObject_t4012695102 * ___sectionMarkerObject_8;
	// System.Int32 RoadGamePlayerController::endSection
	int32_t ___endSection_9;
	// CardboardHead RoadGamePlayerController::head
	CardboardHead_t2975823030 * ___head_10;
	// UnityEngine.Rigidbody RoadGamePlayerController::rb
	Rigidbody_t1972007546 * ___rb_11;
	// UnityEngine.GameObject RoadGamePlayerController::cardboardMain
	GameObject_t4012695102 * ___cardboardMain_12;
	// System.Single RoadGamePlayerController::xOffset
	float ___xOffset_13;
	// UnityEngine.Vector3 RoadGamePlayerController::waypoint
	Vector3_t3525329789  ___waypoint_14;
	// UnityEngine.Vector3[] RoadGamePlayerController::waypoints
	Vector3U5BU5D_t3227571696* ___waypoints_15;
	// System.Int32 RoadGamePlayerController::WPindexPointer
	int32_t ___WPindexPointer_16;
	// System.Int32 RoadGamePlayerController::shields
	int32_t ___shields_17;
	// System.Int32 RoadGamePlayerController::numSections
	int32_t ___numSections_18;
	// System.Boolean RoadGamePlayerController::reachedNextWaypoint
	bool ___reachedNextWaypoint_19;
	// System.Boolean RoadGamePlayerController::endOfRoad
	bool ___endOfRoad_20;
	// System.Single RoadGamePlayerController::speed
	float ___speed_21;

public:
	inline static int32_t get_offset_of_sectionMarkers_2() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___sectionMarkers_2)); }
	inline GameObjectU5BU5D_t3499186955* get_sectionMarkers_2() const { return ___sectionMarkers_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_sectionMarkers_2() { return &___sectionMarkers_2; }
	inline void set_sectionMarkers_2(GameObjectU5BU5D_t3499186955* value)
	{
		___sectionMarkers_2 = value;
		Il2CppCodeGenWriteBarrier(&___sectionMarkers_2, value);
	}

	inline static int32_t get_offset_of_rotationDamping_3() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___rotationDamping_3)); }
	inline float get_rotationDamping_3() const { return ___rotationDamping_3; }
	inline float* get_address_of_rotationDamping_3() { return &___rotationDamping_3; }
	inline void set_rotationDamping_3(float value)
	{
		___rotationDamping_3 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_4() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___maxSpeed_4)); }
	inline float get_maxSpeed_4() const { return ___maxSpeed_4; }
	inline float* get_address_of_maxSpeed_4() { return &___maxSpeed_4; }
	inline void set_maxSpeed_4(float value)
	{
		___maxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_acceleration_5() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___acceleration_5)); }
	inline float get_acceleration_5() const { return ___acceleration_5; }
	inline float* get_address_of_acceleration_5() { return &___acceleration_5; }
	inline void set_acceleration_5(float value)
	{
		___acceleration_5 = value;
	}

	inline static int32_t get_offset_of_rotationSensitivity_6() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___rotationSensitivity_6)); }
	inline int32_t get_rotationSensitivity_6() const { return ___rotationSensitivity_6; }
	inline int32_t* get_address_of_rotationSensitivity_6() { return &___rotationSensitivity_6; }
	inline void set_rotationSensitivity_6(int32_t value)
	{
		___rotationSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_maxOffset_7() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___maxOffset_7)); }
	inline float get_maxOffset_7() const { return ___maxOffset_7; }
	inline float* get_address_of_maxOffset_7() { return &___maxOffset_7; }
	inline void set_maxOffset_7(float value)
	{
		___maxOffset_7 = value;
	}

	inline static int32_t get_offset_of_sectionMarkerObject_8() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___sectionMarkerObject_8)); }
	inline GameObject_t4012695102 * get_sectionMarkerObject_8() const { return ___sectionMarkerObject_8; }
	inline GameObject_t4012695102 ** get_address_of_sectionMarkerObject_8() { return &___sectionMarkerObject_8; }
	inline void set_sectionMarkerObject_8(GameObject_t4012695102 * value)
	{
		___sectionMarkerObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___sectionMarkerObject_8, value);
	}

	inline static int32_t get_offset_of_endSection_9() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___endSection_9)); }
	inline int32_t get_endSection_9() const { return ___endSection_9; }
	inline int32_t* get_address_of_endSection_9() { return &___endSection_9; }
	inline void set_endSection_9(int32_t value)
	{
		___endSection_9 = value;
	}

	inline static int32_t get_offset_of_head_10() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___head_10)); }
	inline CardboardHead_t2975823030 * get_head_10() const { return ___head_10; }
	inline CardboardHead_t2975823030 ** get_address_of_head_10() { return &___head_10; }
	inline void set_head_10(CardboardHead_t2975823030 * value)
	{
		___head_10 = value;
		Il2CppCodeGenWriteBarrier(&___head_10, value);
	}

	inline static int32_t get_offset_of_rb_11() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___rb_11)); }
	inline Rigidbody_t1972007546 * get_rb_11() const { return ___rb_11; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_11() { return &___rb_11; }
	inline void set_rb_11(Rigidbody_t1972007546 * value)
	{
		___rb_11 = value;
		Il2CppCodeGenWriteBarrier(&___rb_11, value);
	}

	inline static int32_t get_offset_of_cardboardMain_12() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___cardboardMain_12)); }
	inline GameObject_t4012695102 * get_cardboardMain_12() const { return ___cardboardMain_12; }
	inline GameObject_t4012695102 ** get_address_of_cardboardMain_12() { return &___cardboardMain_12; }
	inline void set_cardboardMain_12(GameObject_t4012695102 * value)
	{
		___cardboardMain_12 = value;
		Il2CppCodeGenWriteBarrier(&___cardboardMain_12, value);
	}

	inline static int32_t get_offset_of_xOffset_13() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___xOffset_13)); }
	inline float get_xOffset_13() const { return ___xOffset_13; }
	inline float* get_address_of_xOffset_13() { return &___xOffset_13; }
	inline void set_xOffset_13(float value)
	{
		___xOffset_13 = value;
	}

	inline static int32_t get_offset_of_waypoint_14() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___waypoint_14)); }
	inline Vector3_t3525329789  get_waypoint_14() const { return ___waypoint_14; }
	inline Vector3_t3525329789 * get_address_of_waypoint_14() { return &___waypoint_14; }
	inline void set_waypoint_14(Vector3_t3525329789  value)
	{
		___waypoint_14 = value;
	}

	inline static int32_t get_offset_of_waypoints_15() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___waypoints_15)); }
	inline Vector3U5BU5D_t3227571696* get_waypoints_15() const { return ___waypoints_15; }
	inline Vector3U5BU5D_t3227571696** get_address_of_waypoints_15() { return &___waypoints_15; }
	inline void set_waypoints_15(Vector3U5BU5D_t3227571696* value)
	{
		___waypoints_15 = value;
		Il2CppCodeGenWriteBarrier(&___waypoints_15, value);
	}

	inline static int32_t get_offset_of_WPindexPointer_16() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___WPindexPointer_16)); }
	inline int32_t get_WPindexPointer_16() const { return ___WPindexPointer_16; }
	inline int32_t* get_address_of_WPindexPointer_16() { return &___WPindexPointer_16; }
	inline void set_WPindexPointer_16(int32_t value)
	{
		___WPindexPointer_16 = value;
	}

	inline static int32_t get_offset_of_shields_17() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___shields_17)); }
	inline int32_t get_shields_17() const { return ___shields_17; }
	inline int32_t* get_address_of_shields_17() { return &___shields_17; }
	inline void set_shields_17(int32_t value)
	{
		___shields_17 = value;
	}

	inline static int32_t get_offset_of_numSections_18() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___numSections_18)); }
	inline int32_t get_numSections_18() const { return ___numSections_18; }
	inline int32_t* get_address_of_numSections_18() { return &___numSections_18; }
	inline void set_numSections_18(int32_t value)
	{
		___numSections_18 = value;
	}

	inline static int32_t get_offset_of_reachedNextWaypoint_19() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___reachedNextWaypoint_19)); }
	inline bool get_reachedNextWaypoint_19() const { return ___reachedNextWaypoint_19; }
	inline bool* get_address_of_reachedNextWaypoint_19() { return &___reachedNextWaypoint_19; }
	inline void set_reachedNextWaypoint_19(bool value)
	{
		___reachedNextWaypoint_19 = value;
	}

	inline static int32_t get_offset_of_endOfRoad_20() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___endOfRoad_20)); }
	inline bool get_endOfRoad_20() const { return ___endOfRoad_20; }
	inline bool* get_address_of_endOfRoad_20() { return &___endOfRoad_20; }
	inline void set_endOfRoad_20(bool value)
	{
		___endOfRoad_20 = value;
	}

	inline static int32_t get_offset_of_speed_21() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543, ___speed_21)); }
	inline float get_speed_21() const { return ___speed_21; }
	inline float* get_address_of_speed_21() { return &___speed_21; }
	inline void set_speed_21(float value)
	{
		___speed_21 = value;
	}
};

struct RoadGamePlayerController_t601614543_StaticFields
{
public:
	// RoadGamePlayerController RoadGamePlayerController::Instance
	RoadGamePlayerController_t601614543 * ___Instance_22;

public:
	inline static int32_t get_offset_of_Instance_22() { return static_cast<int32_t>(offsetof(RoadGamePlayerController_t601614543_StaticFields, ___Instance_22)); }
	inline RoadGamePlayerController_t601614543 * get_Instance_22() const { return ___Instance_22; }
	inline RoadGamePlayerController_t601614543 ** get_address_of_Instance_22() { return &___Instance_22; }
	inline void set_Instance_22(RoadGamePlayerController_t601614543 * value)
	{
		___Instance_22 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
