#include "Weapon.h"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Item* Weapon::getItem()
{
}

int Weapon::getDamage()
{
	return this->Damage;
}

int Weapon::getType()
{
	return this->type;
}

int Weapon::getEnch1()
{
	return this->enchant1;
}

int Weapon::getEnch2()
{
	return this->enchant2;
}

int Weapon::getEnch3()
{
	return this->enchant3;
}
