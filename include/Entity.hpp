//
// Created by antoine_dh on 5/28/18.
//

#ifndef ROGUE_LIKE_ENTITY_HPP
#define ROGUE_LIKE_ENTITY_HPP

#include <SFML/Graphics.hpp>

class Entity {
public:
	Entity();
	~Entity();
	sf::Vector2f getPosition();
	sf::Vector2f getDirection();
	float getHp();

private:
	sf::Vector2f _position;
	sf::Vector2f _direction;
	float _hp;
};

#endif //ROGUE_LIKE_ENTITY_HPP
