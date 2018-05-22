//
// Created by abel on 5/22/18.
//

#ifndef ROGUE_LIKE_CLIENT_HPP
#define ROGUE_LIKE_CLIENT_HPP

#include <SFML/Network.hpp>

class Client {
	private:
	sf::IpAddress server;
	sf::UdpSocket socket;

	public:
	Client(void);
	~Client();
};

#endif //ROGUE_LIKE_CLIENT_HPP