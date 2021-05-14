#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	~Player();

	std::pair<int, int> GetPos();
	void SetPos();

private:
	
	//Position variables
	int x;
	int y;

	//Main Stats
	std::string name;
	int hpMax;
	int hp;
	int mpMax;
	int mp;
	int stamMax;
	int stamina;

	//Character Stats
	int Strength;
	int Endurance;
	int Intelligence;
	int Wisdom;
	int Perception;
	int Luck;

	//Secondary Stats
	int CarryCap;

};

