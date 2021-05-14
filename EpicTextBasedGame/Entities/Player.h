#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	~Player();

	
	void setPos(int x, int y);

	void Load();


	//Accessors
	std::pair<int, int> getPos();
	std::string getName();
	int getHPMax();
	int getHP();
	int GetMPMax();
	int getMP();
	int getStamMax();
	int getStamina();
	int getExp();
	int getTNL();


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
	int exp;
	int tilNext;

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

