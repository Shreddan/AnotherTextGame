#pragma once
#include "Entity.h"

class Npc : public Entity
{
public:
	Npc();
	~Npc();

	std::pair<int, int> GetPos();
	void SetPos(int x, int y);
	void Interact();

private:
	std::string name;
	int demeanor;
	int x;
	int y;
};

