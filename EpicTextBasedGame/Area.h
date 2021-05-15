#pragma once
#include <vector>
#include "Entities/Player.h"

struct Room
{
	int a;
	int x;
	int y;
	std::vector<Entity> occupants;
	std::vector<Room*> exits;
};

class Area
{
public:
	Area();
	~Area();

	void onLoad();
	void onSave();

private:
	std::vector<Room> map;

	int ID;
};

