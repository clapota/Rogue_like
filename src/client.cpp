//
// Created by abel on 5/22/18.
//

#include "../include/client.hpp"
#include <iostream>

sf::IpAddress Client::getServerIp()
{
	return this->_server;
}

std::string Client::getServerIpToString()
{
	return this->_server.toString();
}

Client::Client(std::string & Ip_Address, unsigned int port)
	: _port(port)
{
	_server = new sf::IpAddress(Ip_Address);
	_socket = new sf::UdpSocket();
	_socket.setBlocking(false);
}

Client::~Client()
{
	delete(this->_server);
	delete(this->_socket);
}

unsigned int Client::getPort()
{
	return this->_port;
}

bool Client::send_data(sf::Packet packet, unsigned int data_length)
{
	if (_socket.send(packet, data_length, _server, _port) != sf::Socket::Done) {
		std::cerr << "Failed to send data of length " + data_length << std::endl;
		delete(packet);
		return (false);
	}
	delete(packet);
	return (true);
}