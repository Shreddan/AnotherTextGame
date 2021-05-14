#pragma once
#include "Entities/Player.h"
#include <chrono>
#include <thread>
#include <iostream>

class Game
{
public:
	Game();
	~Game();

	void Setup();

	bool Update();

	bool Running = Update();

	void Tick();

	void CalcTime();


	float tTime;
	float tick;

	int ticks;


	std::chrono::system_clock::time_point tp1;
	std::chrono::system_clock::time_point tp2;

	std::vector<Entity> Party;

};

