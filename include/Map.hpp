//
// Created by antoine_dh on 5/22/18.
//

#ifndef ROGUE_LIKE_MAP_HPP
#define ROGUE_LIKE_MAP_HPP

#include <SFML/Window.hpp>

class Map {
	private:
	sf::Vector2i _size;

	public:
	Map();
	Map(const std::string &filename);
	~Map();
	sf::Vector2i getSize();
};

#endif //ROGUE_LIKE_MAP_HPP
