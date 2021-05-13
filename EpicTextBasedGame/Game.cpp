#include "Game.h"

Game::Game()
{
	this->tick = 0.0f;
	this->ticks = 0;
	this->tTime = 0.0f;
}

Game::~Game()
{
}

void Game::Setup()
{
	this->tp1 = std::chrono::system_clock::now();
	this->tp2 = std::chrono::system_clock::now();
}

bool Game::Update()
{
	//std::cout << tTime << std::endl;
	CalcTime();
	Tick();
	return true;
}

void Game::Tick()
{
	tick += tTime;

	//std::cout << tick << std::endl;
	if (tick >= 10.0f)
	{
#ifdef _DEBUG
		std::cout << ticks << std::endl;
#endif // DEBUG
		ticks++;
		tick = 0;
	}
}

void Game::CalcTime()
{
	tp2 = std::chrono::system_clock::now();
	std::chrono::duration<float> elapsed = tp2 - tp1;
	tp1 = tp2;

	float Elapsed = elapsed.count();

	tTime = Elapsed;
}
