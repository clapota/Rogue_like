//
// Created by abel on 5/22/18.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::Vector3f bite(1, 2, 3);
	sf::RenderWindow *window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Rlike", sf::Style::Default, sf::ContextSettings());

	std::cout << "Hello World !" << bite.x << bite.y << bite.z << std::endl;
	while (window->isOpen()) {
		std::cout << "toto" << std::endl;
	}
	return (0);
}