#pragma once
#include "Paivays.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Kalenterimerkinta

{
public:
	Kalenterimerkinta();
	Kalenterimerkinta(Paivays aPaivays, string aAsia, bool aMuistutus);


	Kalenterimerkinta(const Kalenterimerkinta& aKalenterimerkinta);

	void kysyTiedot();
	void tulostaMerkinta() const;

	//getters setters
	Paivays getPaivays() const;
	void setPaivays(Paivays aPaivays);
	string getAsia()const;
	void setAsia(string aAsia);
	bool getMuistutus()const;
	void setMuistutus(bool aMuistutus);



private:

	Paivays mPaivays;
	string mAsia;
	bool mMuistutus;

};

