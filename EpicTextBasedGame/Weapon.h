#pragma once
#include "Item/Item.h"
class Weapon : public Item
{
public:
	Weapon();
	~Weapon();

	enum class wType
	{
		Hand = 0,
		Dagger = 1,
		ShortSword = 2,
		Estoc = 3,
		Club = 4,
		Mace = 5,
		WarHammer = 6,
		WarAxe = 7,
		Spear = 8,
		Halberd = 9,
		Flail = 10
	};


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

