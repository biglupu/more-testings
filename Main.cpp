#include <iostream>
#include <string>
#include "Henkilo.h"
#include "Osoite.h"
#include "Paivays.h"
#include "Kalenterimerkinta.h"
#include "Opiskelija.h"


using std::cout;
using std::endl;
using std::string;



int main() {

	Opiskelija kalle;
	kalle.tervehdi();


	return 0;
}



//Henkilo pekka("Pekka", 20);
//Henkilo x(pekka);
//pekka.tervehdi();
//
//cout << "Kopio x tervehdi!" << endl;
//x.tervehdi();
//
//Kalenterimerkinta ohjelmoinninTunnit(Paivays(1, 4, 2022), "Tunnit", true);
//ohjelmoinninTunnit.tulostaMerkinta();
//Kalenterimerkinta uusiMerkinta;
//uusiMerkinta.kysyTiedot();
//uusiMerkinta.tulostaMerkinta();
//Kalenterimerkinta p(uusiMerkinta);
//p.tulostaMerkinta();
