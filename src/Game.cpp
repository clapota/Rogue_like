//
// Created by antoine_dh on 5/22/18.
//

#include "Game.hpp"

Game::Game()
{
	_window = new sf::RenderWindow(sf::VideoMode::getDesktopMode(),
		"Rogue Like", sf::Style::Default, sf::ContextSettings());
	if (_window == nullptr)
		std::exit(1);
}

Game::~Game()
{
	delete (_window);
}

int Game::run()
{
	sf::Clock dtClock;

	while (_window->isOpen()) {
		while (_window->pollEvent(_event))
			handle_event(_event);
		update();
		draw();
		_dt = dtClock.restart().asSeconds();
	}
	return (0);
}

void Game::update()
{
}

void Game::draw()
{
	_window->clear();
	_window->display();
}

void Game::handle_event(sf::Event &event)
{
	if (event.type == sf::Event::Closed)
		_window->close();
}

float Game::getDt()
{
	return (this->_dt);
}
