#pragma once
#include "EXTERNS.H"
#include "Plan.h"
#include "ResurgenceActions.h"

class BuildAirStripPlan : public Plan
{
public:
	BuildAirStripPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_AIRSTRIP);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power = std::make_shared <CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_airstrip = std::make_shared<BuildAirStripAction>(faction);

		add_action(check_faction);
		add_action(check_power);
		//add_action(check_credit);
		add_action(build_airstrip);
	}
};

class BuildAlliedTechPlan : public Plan
{
public:
	BuildAlliedTechPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_ADVANCED_TECH);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 1, false);
		const auto build_tech = std::make_shared<BuildAlliedTechAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_tech);
	}
};

class BuildAdvancedPowerPlantPlan : public Plan
{
public:
	BuildAdvancedPowerPlantPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_ADVANCED_POWER);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power = std::make_shared <CheckPowerRatioAction>(faction, 1.25f, false);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_plant = std::make_shared<BuildAdvancedPowerPlantAction>(faction);

		add_action(check_faction);
		add_action(check_power);
		//add_action(check_credit);
		add_action(build_plant);
	}
};

class BuildBarracksPlan : public Plan
{
public:
	BuildBarracksPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_BARRACKS);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 4, false);
		const auto build_barracks = std::make_shared<BuildBarracksAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_barracks);
	}
};

class BuildFlameTowerPlan : public Plan
{
public:
	BuildFlameTowerPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_FLAME_TURRET);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_tower = std::make_shared<BuildFlameTowerAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(build_tower);
	}
};

class BuildHelipadPlan : public Plan
{
public:
	BuildHelipadPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_HELIPAD);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power = std::make_shared <CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_helipad = std::make_shared<BuildHelipadAction>(faction);

		add_action(check_faction);
		add_action(check_power);
		//add_action(check_credit);
		add_action(build_helipad);
	}
};

class BuildOreRefineryPlan : public Plan
{
public:
	BuildOreRefineryPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_REFINERY);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 4, false);
		const auto build_refinery = std::make_shared<BuildOreRefineryAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_refinery);
	}
};

class BuildOreSiloPlan : public Plan
{
public:
	BuildOreSiloPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_STORAGE);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		const auto check_ore_capacity = std::make_shared<CheckOreCapacityAction>(faction, 0.9f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_silo = std::make_shared<BuildOreSiloAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(build_silo);
	}
};

class BuildPillboxPlan : public Plan
{
public:
	BuildPillboxPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_PILLBOX);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_turret = std::make_shared<BuildPillboxAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(build_turret);
	}
};

class BuildPowerPlantPlan : public Plan
{
public:
	BuildPowerPlantPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_POWER);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power = std::make_shared <CheckPowerRatioAction>(faction, 1.25f, false);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_plant = std::make_shared<BuildPowerPlantAction>(faction);

		add_action(check_faction);
		add_action(check_power);
		//add_action(check_credit);
		add_action(build_plant);
	}
};

class BuildRadarDomePlan : public Plan
{
public:
	BuildRadarDomePlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_RADAR);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 1, false);
		const auto build_radar = std::make_shared<BuildRadarDomeAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_radar);
	}
};

class BuildServiceDepotPlan : public Plan
{
public:
	BuildServiceDepotPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_REPAIR);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 2, false);
		const auto build_depot = std::make_shared<BuildServiceDepotAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_depot);
	}
};

class BuildSovietTechPlan : public Plan
{
public:
	BuildSovietTechPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_SOVIET_TECH);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 1, false);
		const auto build_tech = std::make_shared<BuildAlliedTechAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_tech);
	}
};

class BuildTurretPlan : public Plan
{
public:
	BuildTurretPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_TURRET);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_turret = std::make_shared<BuildTurretAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(build_turret);
	}
};

class BuildTeslaCoilPlan : public Plan
{
public:
	BuildTeslaCoilPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_TESLA);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto build_turret = std::make_shared<BuildTurretAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(build_turret);
	}
};

class BuildWarFactoryPlan : public Plan
{
public:
	BuildWarFactoryPlan(HouseClass* faction)
	{
		const auto building = BuildingTypes.Ptr(STRUCT_WEAP);
		const auto check_faction = std::make_shared<CheckCanBuildAction>(faction, *building);
		const auto check_power_ratio = std::make_shared<CheckPowerRatioAction>(faction, 1.1f);
		//const auto check_credit = std::make_shared<CheckCreditsAction>(faction, building->Cost);
		const auto check_building = std::make_shared<CheckBuildingAction>(faction, *building, 4, false);
		const auto build_factory = std::make_shared<BuildWarFactoryAction>(faction);

		add_action(check_faction);
		add_action(check_power_ratio);
		//add_action(check_credit);
		add_action(check_building);
		add_action(build_factory);
	}
};

