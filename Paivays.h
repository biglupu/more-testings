#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Paivays {
public:
	Paivays();
	Paivays(int aPaiva, int aKuukausi, int aVuosi);

	void setKuukausi(int aKuukausi);
	void setPaiva(int aPaiva);
	void setVuosi(int aVuosi);

	void syotaKuukausi();
	void syotaPaiva();
	void syotaVuosi();
	void kysyPaivays();

	int getKuukausi();
	int getPaiva();
	int getVuosi();
	void tulostaPaivays() const;
	void lisaaPaiva();



private:
	int mPaiva;
	int mKuukausi;
	int mVuosi;
};