#include "LKW.h"

LKW::LKW(int id, string marca, string model, double greutate_totala, double denumire):
	
	Auto(id, marca, model) {
	
	/*
	LKW l(0, "marca", "model", 23, 5)
	*/
	
	Greutate_totala = greutate_totala;
	Denumire = denumire;
}

void LKW::load(double kg)
{
	Greutate_totala += kg;
}

void LKW::unload(double kg) {
	Greutate_totala -= kg;
}

/*LKW::~LKW()
{

}
*/