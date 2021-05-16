#include "Game.h"

Game::Game()
{
	this->tick = 0.0f;
	this->ticks = 0;
	this->tTime = 0.0f;
	
}

Game::~Game()
{
	delete cmd;
	tickth.join();
}

void Game::Setup()
{
	this->tp1 = std::chrono::system_clock::now();
	this->tp2 = std::chrono::system_clock::now();
	cmd = new Command();
	Running = true;
	tickth = std::thread(&Game::Tick, this, tTime, ticks, tick);
}

bool Game::Update()
{
	std::this_thread::sleep_for(std::chrono::milliseconds(200));
	std::cout << "Main thread" << std::endl;
	//std::cout << tTime << std::endl;
	CalcTime();
	if (tick >= 10.0f)
	{
#ifdef _DEBUG
		std::cout << ticks << std::endl;
#endif // DEBUG
		ticks++;
		tick = 0;
	}
	return true;
}

void Game::Tick(float tTime, float tick, int ticks)
{
	std::cout << "Tick started...." << std::endl;
	tick += tTime;
}

void Game::CalcTime()
{
	tp2 = std::chrono::system_clock::now();
	std::chrono::duration<float> elapsed = tp2 - tp1;
	tp1 = tp2;

	float Elapsed = elapsed.count();

	tTime = Elapsed;
}

float Game::GetElapsed()
{
	return this->tTime;
}

float Game::GetTick()
{
	return this->tick;
}

int Game::GetTicks()
{
	return this->ticks;
}

//void Game::GetPartyMembers()
//{
//	for (size_t i = 0; i < Party.size(); i++)
//	{
//		
//	}
//}

