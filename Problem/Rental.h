#pragma once
#include "Auto.h"
#include "Kunde.h"
#include "LKW.h"
#include "PKW.h"
#include<vector>

using namespace std;


class Rental
{
	private:
		vector<Auto> masini;

		vector<Kunde> clienti;

	public:
		Rental();

		void add_client(Kunde);

		void delete_client(Kunde);

		void update_client(Kunde&, string);

		void add_auto(Auto);

		void remove_auto(Auto);
		
		int size_auto();

		//~Rental();
};