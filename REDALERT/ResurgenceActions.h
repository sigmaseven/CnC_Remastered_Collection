#pragma once
#include "Action.h"
#include "EXTERNS.H"
#include "HOUSE.H"
#include "DEFINES.H"

class NoAction : public Action
{
public:
	NoAction() :
		Action(Actions::NONE, 0)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}
};

class BuildAirStripAction : public Action
{
	HouseClass* faction;

public:
	BuildAirStripAction(HouseClass* faction) :
		Action(Actions::BUILD_AIR_STRIP, 20),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_AIRSTRIP);
		return quantity > 0 ? price * quantity : price;
	}

};

class BuildAlliedTechAction : public Action
{
	HouseClass* faction;

public:
	BuildAlliedTechAction(HouseClass* faction) :
		Action(Actions::BUILD_TECH_ALLIED, 18),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_ADVANCED_TECH);
		return quantity > 0 ? price * quantity : price;
	}

};

class BuildSovietTechAction : public Action
{
	HouseClass* faction;

public:
	BuildSovietTechAction(HouseClass* faction) :
		Action(Actions::BUILD_TECH_SOVIET, 18),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_SOVIET_TECH);
		return quantity > 0 ? price * quantity : price;
	}

};

class BuildAdvancedPowerPlantAction : public Action
{
	HouseClass* faction;

public:
	BuildAdvancedPowerPlantAction(HouseClass* faction) :
		Action(Actions::BUILD_POWER_PLANT_ADVANCED, 5),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_ADVANCED_POWER);
		return quantity > 0 ? price * quantity : price;
	}

};

class BuildPowerPlantAction : public Action
{
	HouseClass* faction;
	
public:
	BuildPowerPlantAction(HouseClass* faction) :
		Action(Actions::BUILD_POWER_PLANT, 6),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_POWER);
		return quantity > 0 ? price * quantity : price;
	}
	
};

class BuildBarracksAction : public Action
{
	HouseClass* faction;

public:
	BuildBarracksAction(HouseClass* faction) :
		Action(Actions::BUILD_BARRACKS, 7),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_BARRACKS);
		return quantity > 0 ? price * quantity * 1.25f : price;
	}
};

class BuildFlameTowerAction : public Action
{
	HouseClass* faction;

public:
	BuildFlameTowerAction(HouseClass* faction) :
		Action(Actions::BUILD_FLAME_TOWER, 15),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_FLAME_TURRET);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildHelipadAction : public Action
{
	HouseClass* faction;

public:
	BuildHelipadAction(HouseClass* faction) :
		Action(Actions::BUILD_HELIPAD, 20),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_HELIPAD);
		return quantity > 0 ? price * quantity : price;
	}

};
class BuildOreRefineryAction : public Action
{
	HouseClass* faction;

public:
	BuildOreRefineryAction(HouseClass* faction) :
		Action(Actions::BUILD_ORE_REFINERY, 8),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_REFINERY);
		return quantity > 0 ? price * quantity * 0.75f : price;
	}
};

class BuildOreSiloAction : public Action
{
	HouseClass* faction;

public:
	BuildOreSiloAction(HouseClass* faction) :
		Action(Actions::BUILD_ORE_SILO, 20),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_STORAGE);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildPillboxAction : public Action
{
	HouseClass* faction;

public:
	BuildPillboxAction(HouseClass* faction) :
		Action(Actions::BUILD_PILLBOX, 15),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_PILLBOX);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildServiceDepotAction : public Action
{
	HouseClass* faction;

public:
	BuildServiceDepotAction(HouseClass* faction) :
		Action(Actions::BUILD_SERVICE_DEPOT, 24),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_REPAIR);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildRadarDomeAction : public Action
{
	HouseClass* faction;

public:
	BuildRadarDomeAction(HouseClass* faction) :
		Action(Actions::BUILD_RADAR_DOME, 15),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_RADAR);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildTurretAction : public Action
{
	HouseClass* faction;

public:
	BuildTurretAction(HouseClass* faction) :
		Action(Actions::BUILD_TURRET, 17),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_TURRET);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildTeslaCoilAction: public Action
{
	HouseClass* faction;

public:
	BuildTeslaCoilAction(HouseClass* faction) :
		Action(Actions::BUILD_TESLA_COIL, 17),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_TESLA);
		return quantity > 0 ? price * quantity : price;
	}
};

class BuildWarFactoryAction : public Action
{
	HouseClass* faction;

public:
	BuildWarFactoryAction(HouseClass* faction) :
		Action(Actions::BUILD_WAR_FACTORY, 9),
		faction(faction)
	{}

	inline bool meets_conditions() override
	{
		return true;
	}

	inline int cost() override
	{
		const auto quantity = faction->QuantityB(STRUCT_WEAP);
		return quantity > 0 ?  price * faction->QuantityB(STRUCT_WEAP) * 0.75f  : price;
	}
};

class CheckCanBuildAction : public Action
{
	HouseClass* faction;
	StructType building;
	
public:
	CheckCanBuildAction(HouseClass* faction, StructType building) :
		Action(Actions::CHECK_CAN_BUILD, 0),
		faction(faction),
		building(building)
	{}

	inline bool meets_conditions() override
	{
		return faction->Can_Build(&BuildingTypeClass::As_Reference(building), faction->ActLike);
	}

	inline int cost() override
	{
		return 0;
	}
};

class CheckBuildingAction : public Action
{
	HouseClass* faction;
	StructType building;
	int amount;
	bool greater;

public:
	CheckBuildingAction(HouseClass* faction, StructType building, int amount, bool greater = true) :
		Action(Actions::CHECK_HAS_BUILDING, 0),
		faction(faction),
		building(building),
		amount(amount),
		greater(greater)
	{}

	inline bool meets_conditions() override
	{
		return greater == true ? faction->QuantityB(building) > amount : faction->QuantityB(building) < amount;
	}

	inline int cost() override { return 0; }
};

class CheckCreditsAction : public Action
{
	HouseClass* faction;
	int amount;
	bool greater;
	
public:
	CheckCreditsAction(HouseClass* faction, int amount, bool greater = true) :
		Action(Actions::CHECK_HAS_CREDITS, 0),
		faction(faction),
		amount(amount),
		greater(greater)
	{}

	inline bool meets_conditions() override
	{
		return greater == true ? faction->Credits > amount : faction->Credits < amount;
	}

	inline int cost() override { return 0; }
};

class CheckFactionAction : public Action
{
	HouseClass* faction;
	faction_type_t faction_type;

public:
	CheckFactionAction(HouseClass* faction, faction_type_t faction_type) :
		Action(Actions::CHECK_FACTION, 0),
		faction(faction),
		faction_type(faction_type)
	{}

	inline bool meets_conditions() override
	{
		bool soviet = (1 << faction->ActLike) & HOUSEF_ALLIES;
		bool allied = (1 << faction->ActLike) & HOUSEF_SOVIET;

		return faction_type == Faction::ALLIED ? allied : soviet;
	}

	inline int cost() override { return 0; }
};

class CheckOreCapacityAction : public Action
{
	HouseClass* faction;
	float amount;
	bool greater;

public:
	CheckOreCapacityAction(HouseClass* faction, float amount, bool greater = true) :
		Action(Actions::CHECK_HAS_CREDITS, 0),
		faction(faction),
		amount(amount),
		greater(greater)
	{}

	inline bool meets_conditions() override
	{
		return greater == true ? ((float)faction->Tiberium / (float)faction->Capacity) > amount : ((float)faction->Tiberium / (float)faction->Capacity) < amount;
	}

	inline int cost() override { return 0; }
};

class CheckPowerAction : public Action
{
	HouseClass* faction;
	int amount;
	bool greater;
	
public:
	CheckPowerAction(HouseClass* faction, int amount, bool greater = true) :
		Action(Actions::CHECK_HAS_POWER, 0),
		faction(faction),
		amount(amount),
		greater(greater)
	{}

	inline bool meets_conditions() override
	{
		return greater == true ? (faction->Power - faction->Drain) > amount : (faction->Power - faction->Drain) < amount;
	}

	inline int cost() override { return 0; }
};

class CheckPowerRatioAction : public Action
{
	HouseClass* faction;
	float amount;
	bool greater;
	
public:
	CheckPowerRatioAction(HouseClass* faction, float amount, bool greater = true) :
		Action(Actions::CHECK_HAS_POWER, 0),
		faction(faction),
		amount(amount),
		greater(greater)
	{}

	inline bool meets_conditions() override
	{
		if(faction->Drain == 0 && faction->Power == 0)
		{
			return greater == true ? 1.0f > amount : 1.0f < amount;
		}
		
		return greater == true ? ((float)faction->Power / (float)faction->Drain) > amount : ((float)faction->Power / (float)faction->Drain) < amount;
	}

	inline int cost() override { return 0; }
};

class CheckInfantryAction : public Action
{
	HouseClass* faction;
	InfantryType unit;
	int amount;

public:
	CheckInfantryAction(HouseClass* faction, InfantryType unit, int amount) :
		Action(Actions::CHECK_HAS_UNIT, 0),
		faction(faction),
		unit(unit),
		amount(amount)
	{}

	inline bool meets_conditions() override { return faction->QuantityI(unit) >= amount; }

	inline int cost() override { return 0; }
};

class CheckUnitAction : public Action
{
	HouseClass* faction;
	UnitType unit;
	int amount;

public:
	CheckUnitAction(HouseClass* faction, UnitType unit, int amount) :
		Action(Actions::CHECK_HAS_UNIT, 0),
		faction(faction),
		unit(unit),
		amount(amount)
	{}

	inline bool meets_conditions() override
	{
		return faction->QuantityU(unit) >= amount;
	}

	inline int cost() override { return 0; }
};

class CheckVesselAction : public Action
{
	HouseClass* faction;
	VesselType unit;
	int amount;

public:
	CheckVesselAction(HouseClass* faction, VesselType unit, int amount) :
		Action(Actions::CHECK_HAS_UNIT, 0),
		faction(faction),
		unit(unit),
		amount(amount)
	{}

	inline bool meets_conditions() override
	{
		return faction->QuantityV(unit) >= amount;
	}

	inline int cost() override { return 0; }
};
