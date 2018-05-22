//
// Created by abel on 5/22/18.
//

#include <iostream>
#include "client.hpp"

int main()
{
	Client client("127.0.0.1", 25500);
	client.send_data(client.getActual_packet())
	return (0);
}