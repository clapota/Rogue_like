//
// Created by abel on 5/22/18.
//

#include "server.hpp"
#include <SFML/Network.hpp>
#include <iostream>

Server::Server()
{
	_listener.setBlocking(false);
	_listener.bind(25500);
}

void Server::listen()
{
	short int type;
	std::string data;
	short int player_id;

	while (is_listening) {
		sf::IpAddress new_address;
		unsigned short port;
		sf::Packet packet;
		if (_listener.receive(packet, new_address, port) == sf::Socket::Done) {
			this->add_address(new_address, port);
			packet >> type;
			packet >> data;
			packet >> player_id;
			std::cout << type << ' ' << data << ' ' << player_id << std::endl;
		}
	}
}

void Server::run()
{
	sf::Thread thread(&Server::listen, this);
	is_listening = true;
	thread.launch();
}

void Server::add_address(sf::IpAddress address, unsigned short port)
{
	std::string ip_string;
	std::pair <sf::IpAddress,unsigned short> pair;
	int i = 0;

	for (auto it = _vector.begin(); it != _vector.end(); it++) {
		std::cout << i << std::endl;
		i++;
		ip_string = it.base()->first.toString();
		if (ip_string == address.toString())
			return;
	}
	pair.first = address;
	pair.second = port;
	_vector.push_back(pair);
}

Server::~Server() = default;