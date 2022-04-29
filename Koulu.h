#pragma once
#include <string>

class Koulu : public Henkilo
{
public:

	Koulu();
	Koulu(string mKoulunNimi, vector <Opiskelija> opiskelijat, vector <Opettaja>opettajat);

private:

	string mKoulunNimi;



};