#include "Resurgence.h"

#include "ResurgenceGoals.h"

void Resurgence::on_kill_event(TechnoClass* victor, TechnoClass* victim)
{
	if(!victor || !victim)
	{
		return;
	}
	
	victor->Experience += calculate_experience(victor, victim);
}

unsigned int Resurgence::calculate_experience(TechnoClass* victor, TechnoClass* victim)
{
	return 100;
}

unsigned int Resurgence::calculate_level(TechnoClass* unit)
{
	if(!unit)
	{
		return 0;
	}
	
	return (unit->Experience / 1000) % 5;
}

int Resurgence::building_ai(HouseClass* faction)
{
	if (!faction || faction->IsHuman || faction->BuildStructure != STRUCT_NONE)
	{
		switch (faction->Difficulty)
		{
		case DIFF_EASY:
			return TICKS_PER_SECOND * 20;
		case DIFF_NORMAL:
			return TICKS_PER_SECOND * 10;
		case DIFF_HARD:
			return TICKS_PER_SECOND * 5;
		default:
			return TICKS_PER_SECOND;
		}
	}
	
	auto goal = ChooseBuildingGoal(faction);
	
	switch(goal.execute())
	{
	case Actions::BUILD_AIR_STRIP:
		faction->BuildStructure = STRUCT_AIRSTRIP;
		break;
	case Actions::BUILD_BARRACKS:
		faction->BuildStructure = STRUCT_BARRACKS;
		break;
	case Actions::BUILD_FLAME_TOWER:
		faction->BuildStructure = STRUCT_FLAME_TURRET;
		break;
	case Actions::BUILD_HELIPAD:
		faction->BuildStructure = STRUCT_HELIPAD;
		break;
	case Actions::BUILD_ORE_REFINERY:
		faction->BuildStructure = STRUCT_REFINERY;
		break;
	case Actions::BUILD_ORE_SILO:
		faction->BuildStructure = STRUCT_STORAGE;
		break;
	case Actions::BUILD_PILLBOX:
		faction->BuildStructure = STRUCT_PILLBOX;
		break;
	case Actions::BUILD_POWER_PLANT:
		faction->BuildStructure = STRUCT_POWER;
		break;
	case Actions::BUILD_POWER_PLANT_ADVANCED:
		faction->BuildStructure = STRUCT_ADVANCED_POWER;
		break;
	case Actions::BUILD_SERVICE_DEPOT:
		faction->BuildStructure = STRUCT_REPAIR;
		break;
	case Actions::BUILD_TECH_ALLIED:
		faction->BuildStructure = STRUCT_ADVANCED_TECH;
		break;
	case Actions::BUILD_TECH_SOVIET:
		faction->BuildStructure = STRUCT_SOVIET_TECH;
		break;
	case Actions::BUILD_RADAR_DOME:
		faction->BuildStructure = STRUCT_RADAR;
		break;
	case Actions::BUILD_SHIP_YARD:
		faction->BuildStructure = STRUCT_SHIP_YARD;
		break;
	case Actions::BUILD_SUB_PEN:
		faction->BuildStructure = STRUCT_SUB_PEN;
		break;
	case Actions::BUILD_TESLA_COIL:
		faction->BuildStructure = STRUCT_TESLA;
		break;
	case Actions::BUILD_TURRET:
		faction->BuildStructure = STRUCT_TURRET;
		break;
	case Actions::BUILD_WAR_FACTORY:
		faction->BuildStructure = STRUCT_WEAP;
		break;
	default:
		faction->BuildStructure = STRUCT_NONE;
		break;
	}

	switch(faction->Difficulty)
	{
	case DIFF_EASY:
		return TICKS_PER_SECOND * 20;
	case DIFF_NORMAL:
		return TICKS_PER_SECOND * 10;
	case DIFF_HARD:
		return TICKS_PER_SECOND * 5;
	default:
		return TICKS_PER_SECOND;
	}

}
