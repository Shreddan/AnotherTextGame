#pragma once
class Item
{
public:
	Item();
	~Item();

	virtual Item* getItem() = 0;
};

