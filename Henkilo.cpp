#include "Henkilo.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Henkilo::Henkilo() : nimi(" "), ika(0)
{
	cout << "luodaan henkilo..." << endl;
}


Henkilo::Henkilo(const string& aNimi, int aIka) : nimi(aNimi), ika(aIka)
{
	cout << "luodaan " << aNimi << "..." << endl;
}

Henkilo::Henkilo(const string aNimi, int aIka, Osoite aOsoite) : nimi(aNimi), ika(aIka), osoite(aOsoite)

{
	cout << "luodaan " << aNimi << ", jolla osoite alustettuna " << endl;
}


Henkilo::Henkilo(const Henkilo& aHenkilo)
	:nimi(aHenkilo.nimi), ika(aHenkilo.ika), osoite(aHenkilo.osoite)
{
	cout << "Kopioidaan " << aHenkilo.nimi << endl;
}



void Henkilo::setIka(int aIka)
{
	if (aIka >= 0) {
		ika = aIka;
	}
}

int Henkilo::getIka() const
{
	return ika;
}

void Henkilo::setNimi(string aNimi) {
	nimi = aNimi;
}

string Henkilo::getNimi() const {
	return nimi;
}

void Henkilo::setOsoite(Osoite aOsoite)
{
	osoite = aOsoite;
}

Osoite Henkilo::getOsoite() const
{
	return osoite;
}

void Henkilo::tulostaTiedot() const
{
	cout << "Henkilon tiedot" << endl;
	cout << "Nimi: " << nimi << endl;
	cout << "Ika: " << ika << endl;
	osoite.tulostaTiedot();
}

void Henkilo::tervehdi() const
{
	cout << "olen " << nimi << " ja olen " << ika << endl;
	osoite.tulostaTiedot();
}

Henkilo::Henkilo(const string aNimi, int aIka, Koulu aKoulunNimi) : nimi(aNimi), ika(aIka), koulu(aKoulunNimi)

{
	cout << "luodaan " << aNimi << ", jolla koulu alustettuna " << endl;
}


void Henkilo::setKoulu(Koulu aKoulunNimi)
{
	mKoulunNimi = aKoulunNimi;
}