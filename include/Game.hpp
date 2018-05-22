//
// Created by antoine_dh on 5/22/18.
//

#ifndef ROGUE_LIKE_GAME_HPP
#define ROGUE_LIKE_GAME_HPP

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Game {
	private:
	sf::RenderWindow *_window;
	sf::Event _event;
	float _dt = 0.0f;

	public:
	Game();
	~Game();
	int run();
	void update();
	void draw();
	void handle_event(sf::Event &event);
	float getDt();
};

#endif //ROGUE_LIKE_GAME_HPP
