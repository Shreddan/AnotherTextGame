#pragma once
#include "Entity.h"

struct Parts
{
	int ID;
	int health;

};

class Player : public Entity
{
public:
	Player();
	~Player();

	void GetPos();
	void SetPos();

};

