#pragma once
#include "Item/Item.h"
class Weapon : public Item
{
public:
	Weapon();
	~Weapon();


	//Accessors
	Item* getItem();
	int getDamage();
	int getType();
	int getEnch1();
	int getEnch2();
	int getEnch3();
	

private:
	int Damage;
	int type;
	int enchant1;
	int enchant2;
	int enchant3;
};

