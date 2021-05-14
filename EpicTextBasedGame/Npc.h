#pragma once
#include "Entity.h"

class Npc : public Entity
{
public:
	Npc();
	~Npc();

	std::tuple<int, int, int> getPos() const;
	void setPos(int a, int x, int y);
	void Interact();

private:
	std::string name;
	int a;
	int x;
	int y;
};

