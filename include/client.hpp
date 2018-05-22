//
// Created by abel on 5/22/18.
//

#ifndef ROGUE_LIKE_CLIENT_HPP
#define ROGUE_LIKE_CLIENT_HPP

#include <SFML/Network.hpp>

class Client {
	private:
	sf::IpAddress _server;
	sf::UdpSocket _socket;
	unsigned int _port;

	public:
	Client(std::string server_ip_address, unsigned int port);
	~Client();
	std::string getServerIpToString(void);
	sf::IpAddress getServerIp(void);
	unsigned int getPort(void);
	void send_data(void *data, unsigned int data_length);
};

#endif //ROGUE_LIKE_CLIENT_HPP