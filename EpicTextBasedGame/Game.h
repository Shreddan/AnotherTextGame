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

	//Main Funcs
	void Setup();
	bool Update();
	bool Running;

	//Time Funcs
	void Tick();
	void CalcTime();

	//Accessors
	float GetElapsed();
	float GetTick();
	int GetTicks();
	void GetPartyMembers();

private:
	float tTime;
	float tick;

	int ticks;


	std::chrono::system_clock::time_point tp1;
	std::chrono::system_clock::time_point tp2;

	std::vector<Entity> Party;

};

