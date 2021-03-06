//
// Created by abel on 5/22/18.
//

#include "Client.hpp"
#include <iostream>

Client::Client() = default;

Client::Client(std::string &ipAddress, unsigned short port)
	: _port(port), _server(ipAddress)
{
	_socket.setBlocking(false);
}

Client::~Client()
{
	_socket.unbind();
}

sf::IpAddress Client::getServerIp()
{
	return this->_server;
}

std::string Client::getServerIpToString()
{
	return this->_server.toString();
}

unsigned short Client::getPort()
{
	return this->_port;
}

bool Client::send_data(short int type, std::string data, short int player_id)
{
	set_packet(type, data, player_id);
	if (_socket.send(_packet, _server, _port) != sf::Socket::Done) {
		std::cerr << "Failed to send data of length " + _packet.getDataSize() << std::endl;
		_packet.clear();
		return (false);
	}
	_packet.clear();
	return (true);
}

void Client::set_packet(short int type, std::string data, short int player_id)
{
	_packet << type << data << player_id;
}
