#include "Opiskelija.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//Aina kun luodaan opiskelija, luodaan myös henkilö, koska Class Opiskelija : public Henkilö

Opiskelija::Opiskelija() : Henkilo()
{
	cout << "opiskelija -luokan rakentaja" << endl;
}

Opiskelija::Opiskelija(const string& aNimi, int aIka, const string& aOpNro) : Henkilo (aNimi, aIka), mOpNro(aOpNro)
{
	cout << "Opiskelija -luokan parametrillinen rakenta" << endl;
}

void Opiskelija::lisaaKurssi(const string& aKurssi)
{
	mKurssit.push_back(aKurssi);
}

void Opiskelija::lisaaOpintopisteita(int aOpintopisteet)
{
	mOpintopisteet += aOpintopisteet;
}

int Opiskelija::getOpintopisteet() const
{
	return mOpintopisteet;
}

//Nimi on Private tietoluokka Henkilo classissä, joten Opiskelija class joutuu käyttämään Public rajapintaa

void Opiskelija::tulostaTiedot()
{
	cout << "Nimi: " << getNimi() <<endl;
	cout << "Opiskelijanumero: " << mOpNro << endl;
	//protected notaatio = ulospäin "private" mutta periytyteille luokille "public"
}

string Opiskelija::getOpNro() const
{
	return mOpNro;
}
