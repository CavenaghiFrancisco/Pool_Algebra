#include <iostream>
#include "Game.h"

int main()
{
	Game* game = new Game();
	game->GameLoop();
	delete game;
}
