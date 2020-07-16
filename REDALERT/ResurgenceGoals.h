#pragma once
#include "GoalPlanner.h"
#include "ResurgencePlans.h"

class ChooseBuildingGoal : public GoalPlanner
{
public:
	ChooseBuildingGoal(HouseClass *faction)
	{
		auto build_power_plant = BuildPowerPlantPlan(faction);
		auto build_barracks_plan = BuildBarracksPlan(faction);
		auto build_ore_refinery = BuildOreRefineryPlan(faction);
		auto build_advanced_plant = BuildAdvancedPowerPlantPlan(faction);
		auto build_war_factory = BuildWarFactoryPlan(faction);
		auto build_pillbox = BuildPillboxPlan(faction);
		auto build_flame_tower = BuildFlameTowerPlan(faction);
		auto build_turret = BuildTurretPlan(faction);
		auto build_ore_silo = BuildOreSiloPlan(faction);
		auto build_tesla_coil = BuildTeslaCoilPlan(faction);
		auto build_service_depot = BuildServiceDepotPlan(faction);
		auto build_radar_dome = BuildRadarDomePlan(faction);
		auto build_allied_tech = BuildAlliedTechPlan(faction);
		auto build_soviet_tech = BuildSovietTechPlan(faction);
		auto build_air_strip = BuildAirStripPlan(faction);
		auto build_helipad = BuildHelipadPlan(faction);

		add_plan(&build_advanced_plant);
		add_plan(&build_power_plant);
		add_plan(&build_ore_refinery);
		add_plan(&build_barracks_plan);
		add_plan(&build_advanced_plant);
		add_plan(&build_war_factory);
		add_plan(&build_pillbox);
		add_plan(&build_flame_tower);
		add_plan(&build_turret);
		add_plan(&build_ore_silo);
		add_plan(&build_tesla_coil);
		add_plan(&build_service_depot);
		add_plan(&build_radar_dome);
		add_plan(&build_allied_tech);
		add_plan(&build_soviet_tech);
		add_plan(&build_air_strip);
		add_plan(&build_helipad);
	}
};
