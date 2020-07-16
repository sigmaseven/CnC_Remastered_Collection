#pragma once
#pragma warning (disable : 4530)

#include "Plan.h"

class GoalPlanner
{
	std::vector<Plan> plans;

public:
	GoalPlanner() = default;

	inline void add_plan(Plan* plan)
	{
		plans.emplace_back(*plan);
	}

	inline static Plan* find_lowest_cost(std::vector<Plan> p)
	{
		Plan* current_plan = nullptr;
		
		if(p.empty())
		{
			return current_plan;
		}

		for(auto& plan : p)
		{
			if(!current_plan && plan.execute() || plan.cost() < current_plan->cost() && plan.execute())
			{
				current_plan = &plan;
			}
		}

		return current_plan;
	}
	
	virtual action_type_t execute()
	{
		int cost = INT_MAX;
		Plan* current_plan = nullptr;
		
		for(auto& plan : plans)
		{
			if(plan.execute() && plan.cost() < cost)
			{
				current_plan = &plan;
				cost = plan.cost();
			}
		}

		return current_plan != nullptr ? current_plan->goal()->action_type : Actions::NONE;
	}
};

