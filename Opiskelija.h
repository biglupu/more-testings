#pragma once
#include "Henkilo.h"
#include <vector>
using std::vector;

//Public Henkil� h�m�� v�h�n, Javan "extends" selitt�� paremmin. Opiskelija luokka laajentaa luokkaa Henkilo
class Opiskelija : public Henkilo
{
	//metodit henkil�luokasta ovat jo valmiina
public:
	Opiskelija();
	Opiskelija(const string& aNimi, int aIka, const string& aOpNro);
	void lisaaKurssi(const string& aKurssi);
	void lisaaOpintopisteita(int aOpintopisteet);
	int getOpintopisteet() const;
	void tulostaTiedot();
	string getOpNro() const;
	

	//tietoj�senet henkil�luokasta ovat jo valmiina
private:
	string mOpNro = "xxxxxxxx";
	int mOpintopisteet = 0;
	vector<string> mKurssit;
};

