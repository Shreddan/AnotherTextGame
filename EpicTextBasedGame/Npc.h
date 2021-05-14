#pragma once
#include "Entity.h"

class Npc : public Entity
{
public:
	Npc();
	~Npc();

	std::tuple<int, int, int> getPos();
	void SetPos(int x, int y);
	void Interact();

private:
	std::string name;
	int a;
	int x;
	int y;
};

