#pragma once
#include "GoalPlanner.h"
#include "ResurgencePlans.h"

class BuildingPlanner : public GoalPlanner
{
public:
	BuildingPlanner(HouseClass* faction) :
		GoalPlanner()
	{
		auto build_barracks = BuildBarracksPlan(faction);
		auto build_plant = BuildPowerPlantPlan(faction);
		auto build_war_factory = BuildWarFactoryPlan(faction);
		
		//auto build_refinery = BuildOreRefineryPlan(faction);
		
		add_plan(&build_barracks);
		add_plan(&build_plant);
		add_plan(&build_war_factory);
	}
};
