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
	sf::Packet _packet;
	void set_packet(short int type, std::string data, short int player_id);

	public:
	Client(std::string server_ip_address, unsigned int port);
	~Client();
	std::string getServerIpToString(void);
	sf::IpAddress getServerIp(void);
	unsigned int getPort(void);
	bool send_data(short int type, std::string data, short int player_id);
};

#endif //ROGUE_LIKE_CLIENT_HPP