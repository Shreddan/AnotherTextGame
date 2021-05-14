#pragma once
#include <vector>

struct Room
{
	int a;
	int x;
	int y;

};

class Area
{
public:
	Area();
	~Area();

	void onLoad();
	void onSave();

private:
	std::vector<Room> map;

	int ID;
};

