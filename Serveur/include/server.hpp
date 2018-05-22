//
// Created by abel on 5/22/18.
//

#ifndef ROGUE_LIKE_SERVER_HPP
#define ROGUE_LIKE_SERVER_HPP

#include <SFML/Network.hpp>
#include <list>

class Server {
	private:
	std::vector<std::pair<sf::IpAddress,unsigned short>> _vector;
	sf::UdpSocket _listener;
	sf::Packet _packet;
	void listen();
	void send_packet_to_users(sf::Packet);
	void add_address(sf::IpAddress, unsigned short port);

	public:
	bool is_listening;
	Server();
	~Server();
	void run();
};

#endif //ROGUE_LIKE_SERVER_HPP
