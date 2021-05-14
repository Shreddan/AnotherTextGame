#include "Npc.h"

Npc::Npc()
{
}

Npc::~Npc()
{
}

std::tuple<int, int, int> Npc::getPos()
{
	return std::make_tuple(this->a, this->x, this->y);
}

void Npc::setPos(int a, int x, int y)
{
	this->a = a;
	this->x = x;
	this->y = y;
}

void Npc::Interact()
{
}
