#include "Rental.h"
#include <iostream>
#include <vector>

using namespace std;

Rental::Rental()
{

}

void Rental::add_client(Kunde client)
{
	for (int i = 0; i < clienti.size(); i++)
	{
		if (clienti.at(i).get_id() == client.get_id())
			return;
	}
	clienti.push_back(client);
}

void Rental::delete_client(Kunde client)
{
	for (int i = 0; i < clienti.size(); i++)
	{
		{if (clienti.at(i).get_id() == client.get_id())
			clienti.erase(clienti.begin() + i);
		    return;
		}
	}
}

void Rental::update_client(Kunde& client, string name)
{
	for (int i = 0; i < clienti.size(); i++)
	{
		if (clienti.at(i).get_id() == client.get_id())
			clienti[i].set_name(name);
			client.set_name(name);
	}
}

void Rental::add_auto(Auto car)
{
	for (auto i = masini.begin(); i != masini.end(); i++)
	{
		if (i->get_id() == car.get_id())
			return;
	}
	masini.push_back(car);
}

void Rental::remove_auto(Auto car)
{
	for (int i = 0; i < masini.size(); i++) {
		if (masini.at(i).get_id() == car.get_id()) {
			masini.erase(masini.begin() + i);
			return;
		}
	}
}

int Rental::size_auto()
{
	return masini.size();
}

/*Rental::~Rental()
{

}
*/






















