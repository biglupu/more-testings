#pragma once
#include <string>


using std::string;

class Osoite {
public:

	Osoite();
	Osoite(string aKatu, string aPostinumero, string aKunta);

	//setters getters
	void setKatu(string aKatu);
	string getKatu() const;

	void setPostinumero(string aPostinumero);
	string getPostinumero() const;

	void setKunta(string aKunta);
	string getKunta() const;

	void tulostaTiedot() const;

private:

	string mKatu;
	string mPostinumero;
	string mKunta;
};