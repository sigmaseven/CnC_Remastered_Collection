#pragma once
#pragma warning (disable : 4530)

#include <vector>
#include <memory>
#include "Action.h"

class Plan
{
public:
	std::vector<std::shared_ptr<Action>> actions;

	inline void add_action(std::shared_ptr<Action> action)
	{
		for(auto& a : actions)
		{
			if(a->action_type == action->action_type)
			{
				return;
			}
		}

		actions.emplace_back(action);
	}

	inline bool execute()
	{
		for(unsigned x = 0; x < actions.size(); ++x)
		{
			auto action = actions[x];
			
			if(!action->meets_conditions())
			{
				return false;
			}
		}

		return true;
	}

	inline int cost()
	{
		int cost = 0;
		
		for(unsigned x = 0; x < actions.size(); ++x)
		{
			cost += actions[x]->cost();
		}

		return cost;
	}

	inline Action* goal()
	{
		if(actions.empty())
		{
			return nullptr;
		}

		const unsigned index = actions.size() - 1;
		return actions[index].get();
	}
};

