//
// Created by abel on 5/22/18.
//

#include <iostream>
#include "Game.hpp"
#include "client.hpp"


int main()
{
	Client client("10.26.112.117", 25500);
	Game game;

	client.send_data(1, "zizibite", 0);
	return (game.run());
}
