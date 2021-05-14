#pragma once
#include <utility>
#include <tuple>
#include <vector>
#include <string>
#include <single_include/nlohmann/json.hpp>
#include "../Item/Item.h"

struct Parts
{
	enum class part
	{
		Head = 0,
		Arms = 1,
		Torso = 2,
		Legs = 3
	};
	int ID;
	int health;

};

class Entity
{
public:
	 Entity();
	 ~Entity();

	 virtual std::tuple<int, int, int> getPos() = 0;
	 virtual void setPos(int a, int x, int y) = 0;
	 virtual void interact() = 0;

	 virtual void onLoad() = 0;
	 virtual void onSave() = 0;

	 
};

