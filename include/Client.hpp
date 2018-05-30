//
// Created by abel on 5/22/18.
//

#ifndef ROGUE_LIKE_CLIENT_HPP
#define ROGUE_LIKE_CLIENT_HPP

#include <SFML/Network.hpp>

class Client {
public:
	Client();
	Client(std::string &ipAddress, unsigned short port);
	~Client();
	std::string getServerIpToString();
	sf::IpAddress getServerIp();
	unsigned short getPort();
	bool send_data(short int type, std::string data, short int player_id);

private:
	sf::IpAddress _server;
	sf::UdpSocket _socket;
	unsigned short _port;
	sf::Packet _packet;
	void set_packet(short int type, std::string data, short int player_id);
};

#endif //ROGUE_LIKE_CLIENT_HPP
