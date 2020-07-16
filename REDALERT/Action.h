#pragma once
#pragma warning (disable : 4530)

enum class Actions
{
	NONE,
	BUILD_AIR_STRIP,
	BUILD_BARRACKS,
	BUILD_FLAME_TOWER,
	BUILD_HELIPAD,
	BUILD_ORE_REFINERY,
	BUILD_ORE_SILO,
	BUILD_PILLBOX,
	BUILD_POWER_PLANT,
	BUILD_POWER_PLANT_ADVANCED,
	BUILD_RADAR_DOME,
	BUILD_SERVICE_DEPOT,
	BUILD_SHIP_YARD,
	BUILD_SUB_PEN,
	BUILD_TECH_ALLIED,
	BUILD_TECH_SOVIET,
	BUILD_TESLA_COIL,
	BUILD_TURRET,
	BUILD_WAR_FACTORY,
	CHECK_FACTION,
	CHECK_CAN_BUILD,
	CHECK_HAS_CREDITS,
	CHECK_HAS_POWER,
	CHECK_HAS_BUILDING,
	CHECK_HAS_UNIT,
};

typedef enum class Actions action_type_t;

enum class Faction
{
	ALLIED,
	SOVIET,
};

typedef enum class Faction faction_type_t;

class Action
{
public:
	action_type_t action_type;
	int price;
	
	Action(action_type_t type, int cost) :
	action_type(type),
	price(cost)
	{}
	
	virtual bool meets_conditions() { return true; }
	
	virtual inline int cost() = 0;
};

