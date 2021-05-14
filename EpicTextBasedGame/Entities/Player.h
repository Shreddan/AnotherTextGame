#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	~Player();

	
	void setPos();


	//Accessors
	std::pair<int, int> getPos();
	std::string getName();
	int getHPMax();
	int getHP();



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

