#pragma once
#include <utility>
#include <vector>
#include <string>

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

	 virtual std::pair<int, int> getPos() = 0;
	 virtual void setPos(int x, int y) = 0;
	 virtual void interact() = 0;

	 
};

