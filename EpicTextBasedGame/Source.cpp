#include "Game.h"

int main()
{
	Game g;

	g.Setup();
	while (g.Running)
	{

		g.Running = g.Update();
	}
}


