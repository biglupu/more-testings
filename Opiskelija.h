#pragma once
#include "Henkilo.h"
#include <vector>
using std::vector;

//Public Henkilö hämää vähän, Javan "extends" selittää paremmin. Opiskelija luokka laajentaa luokkaa Henkilo
class Opiskelija : public Henkilo
{
	//metodit henkilöluokasta ovat jo valmiina
public:
	Opiskelija();
	Opiskelija(const string& aNimi, int aIka, const string& aOpNro);
	void lisaaKurssi(const string& aKurssi);
	void lisaaOpintopisteita(int aOpintopisteet);
	int getOpintopisteet() const;
	void tulostaTiedot();
	string getOpNro() const;
	

	//tietojäsenet henkilöluokasta ovat jo valmiina
private:
	string mOpNro = "xxxxxxxx";
	int mOpintopisteet = 0;
	vector<string> mKurssit;
};

