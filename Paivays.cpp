#include "Paivays.h"
#include <iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


void Paivays::setVuosi(int aVuosi)
{
	mVuosi = aVuosi;
}

void Paivays::setKuukausi(int aKuukausi) {

	mKuukausi = aKuukausi;
}
void Paivays::setPaiva(int aPaiva)
{
	mPaiva = aPaiva;
}

void Paivays::kysyPaivays()
{
	syotaPaiva();
	syotaKuukausi();
	syotaVuosi();
}

void Paivays::syotaVuosi()
{
	int bVuosi;
	cout << "Syota Vuosi\n";
	cin >> bVuosi;
	mVuosi = bVuosi;
}

void Paivays::syotaKuukausi() {
	int bKuukausi;
	cout << "Syota kuukausi\n";
	cin >> bKuukausi;
	mKuukausi = bKuukausi;
}

void Paivays::syotaPaiva()
{
	int bPaiva;
	cout << "Syota paiva\n";
	cin >> bPaiva;
	mPaiva = bPaiva;
}

Paivays::Paivays() : mPaiva(1), mKuukausi(1), mVuosi(2000)
{

}

Paivays::Paivays(int aPaiva, int aKuukausi, int aVuosi)
	: mPaiva(aPaiva), mKuukausi(aKuukausi), mVuosi(aVuosi)
{


}

int Paivays::getVuosi() {
	return mVuosi;
}

int Paivays::getKuukausi() {
	return mKuukausi;
}

int Paivays::getPaiva() {
	return mPaiva;
}

void Paivays::lisaaPaiva()
{
	bool OK = false;
	cout << "Paivamaaraan " << mPaiva << ":" << mKuukausi << ":" << mVuosi << " Lisataan 1 paiva jos mahdollista\n";

	if (mKuukausi == 1 || mKuukausi == 3 || mKuukausi == 5 || mKuukausi == 7 || mKuukausi == 8 || mKuukausi == 10)
	{
		OK = true;
		if (mPaiva == 31)
		{
			mKuukausi++;
			mPaiva = 1;
		}
		else
			mPaiva++;

	}
	else if (mKuukausi == 4 || mKuukausi == 6 || mKuukausi == 9 || mKuukausi == 11)
	{
		OK = true;
		if (mPaiva == 30)
		{
			mKuukausi++;
			mPaiva = 1;
		}
		else
			mPaiva++;
	}
	else if (mKuukausi == 2)
	{
		OK = true;
		if (mPaiva == 28)
		{
			mKuukausi++;
			mPaiva = 1;
		}
		else
			mPaiva++;
	}
	if (mKuukausi == 12)
	{
		OK = true;
		if (mPaiva == 31)
		{
			mPaiva = 1;
			mKuukausi = 1;
			mVuosi++;
		}
		else
			mPaiva++;
	}
	if (mKuukausi == 2 && mPaiva > 28)
	{
		cout << "error, virheellinen pvm";
		mPaiva = 0;
		mKuukausi = 0;
		mVuosi = 0;
		OK = false;
	}
	if (mPaiva > 30) {
		if (mKuukausi == 4 || mKuukausi == 6 || mKuukausi == 9 || mKuukausi == 11 && mPaiva > 30)
		{
			cout << "Error, Virheellinen pvm";
			mPaiva = 0;
			mKuukausi = 0;
			mVuosi = 0;
			OK = false;
		}
	}
	if (mPaiva > 31)
	{
		if (mKuukausi == 1 || mKuukausi == 3 || mKuukausi == 5 || mKuukausi == 7 || mKuukausi == 8 || mKuukausi == 10 || mKuukausi == 12)
		{
			cout << "Error, virheellinen Pvm";
			mPaiva = 0;
			mKuukausi = 0;
			mVuosi = 0;
			OK = false;

		}
	}

	if (OK == true)
	{
		cout << "\nUusi paivamaara on " << mPaiva << ":" << mKuukausi << ":" << mVuosi;
	}
}

void Paivays::tulostaPaivays() const
{
	cout << "\n" << mPaiva << ":" << mKuukausi << ":" << mVuosi;
}