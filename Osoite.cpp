#include "Osoite.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Osoite::Osoite()
{
	cout << "Osoite -luokan oletusrakentaja" << endl;
}

Osoite::Osoite(string aKatu, string aPostinumero, string aKunta)
	:mKatu(aKatu), mPostinumero(aPostinumero), mKunta(aKunta)
{
	cout << "Osoite -luokan parametrillinen rakentaja " << endl;
}

void Osoite::setKatu(string aKatu)
{
	mKatu = aKatu;
}

string Osoite::getKatu() const
{
	return mKatu;
}

void Osoite::tulostaTiedot() const
{
	cout << "Osoitetiedot: " << "\n";
	cout << mKatu << "\n" << mPostinumero << " " << mKunta << endl;
}