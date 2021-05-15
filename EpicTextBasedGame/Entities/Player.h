#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
	Player();
	~Player();

	
	void setPos(int a, int x, int y);

	void onSave();
	void onLoad();

	void onEquip();


	//Accessors
	std::tuple<int, int, int> getPos();
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
	int a;
	int x;
	int y;

	//Main Stats
	std::string name;
	int level;
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


	//Players things
	std::vector<Item> Inventory;
	std::vector<Parts> bParts;
	std::vector<Item> Equipment;
};

