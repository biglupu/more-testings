#include "Kalenterimerkinta.h"
#include "Paivays.h"



Kalenterimerkinta::Kalenterimerkinta() : mPaivays(), mAsia("ei aihetta"), mMuistutus(false)
{

}

Kalenterimerkinta::Kalenterimerkinta(Paivays aPaivays, string aAsia, bool aMuistutus)
	: mPaivays(aPaivays), mAsia(aAsia), mMuistutus(aMuistutus)
{


}


Kalenterimerkinta::Kalenterimerkinta(const Kalenterimerkinta& aKalenterimerkinta)
: mAsia(aKalenterimerkinta.mAsia), mMuistutus(aKalenterimerkinta.mMuistutus)
{
	cout << "Kopiodaan asia ja muistutus\n";
}

//Henkilo::Henkilo(const Henkilo& aHenkilo)
//	:nimi(aHenkilo.nimi), ika(aHenkilo.ika), osoite(aHenkilo.osoite)
//{
//	cout << "Kopioidaan " << aHenkilo.nimi << endl;
//}

void Kalenterimerkinta::kysyTiedot()
{

	mPaivays.kysyPaivays();
	cout << "Syota asia\n";
	cin >> mAsia;
	cout << "laitetaanko muistutus (k/e): ";
	char muistutus;
	cin >> muistutus;
	if (muistutus == 'k') {
		mMuistutus = true;
	}
	else {
		mMuistutus = false;
	}
}

//const metodissa voidaan kutsua vai const tyyppisiä metodeita
void Kalenterimerkinta::tulostaMerkinta() const
{
	cout << "Kalenterimerkinta" << endl;
	mPaivays.tulostaPaivays();
	cout << endl;
	cout << mAsia << endl;
	if (mMuistutus == true)
	{
		cout << "Muistutus asetettu" << endl;
	}
	else
	{
		cout << "Ei muistutusta\n";
	}
}

Paivays Kalenterimerkinta::getPaivays() const
{
	return Paivays();
}

void Kalenterimerkinta::setPaivays(Paivays aPaivays)
{
	mPaivays = aPaivays;
}

string Kalenterimerkinta::getAsia() const
{
	return mAsia;
}

void Kalenterimerkinta::setAsia(string aAsia)
{
	mAsia = aAsia;
}

bool Kalenterimerkinta::getMuistutus() const
{
	return mMuistutus;
}

void Kalenterimerkinta::setMuistutus(bool aMuistutus)
{
	mMuistutus = aMuistutus;
}
