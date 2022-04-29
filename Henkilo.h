#pragma once

#include <string>
#include "Osoite.h"


using std::string;


//kopiorakentaja on rakentaja, joka saa parametrin��n const viitteen saman luokan olioon
//K��nt�j� tekee default kopiojan jos ei m��ritelty
class Henkilo {
public:

	Henkilo();

	Henkilo(const string& aNimi, int aIka);
	Henkilo(const string& aNimi, int aIka, const Osoite& aOsoite);

	Henkilo(string aNimi, int aIka, Osoite aOsoite);
	Henkilo(string aNimi, int aIka, Koulu aKoulunNimi);

	//K��nt�j� tekee oletuksena kopiorakentajan jokaiselle luokalle, esmes alla
	Henkilo(const Henkilo& aHenkilo);


	/*destruktori *~Henkilo();*/



	void setIka(int aIka);
	int getIka() const;
	void setNimi(string aNimi);
	string getNimi() const;

	//Setterit ja getterit osoitteelle
	void setOsoite(Osoite aOsoite);
	Osoite getOsoite() const;

	virtual void tulostaTiedot() const;
	//"virtual" staattinen sidonta => dynaaminen sidonta. My�h�inen sidonta eli ajonaikaisesti katsotaan onko Henkil� vai Opettaja/Oppilas -luokkaa

	void tervehdi() const;

	void setKoulu(Koulu aKoulunNimi);

private:

	string nimi;
	int ika;
	Osoite osoite;
};