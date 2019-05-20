#include "stdafx.h"
#include "Pozycja.h"


Pozycja::Pozycja()
{
}


Pozycja::~Pozycja()
{
}

void Pozycja::przeszukiwanie_tekstu_ogolne(string kod_zawodnika, string kod_meczu)
{
	string tmp; // string pomocniczy do wyszukiwania
	std::size_t znalezione = 0;
	
	tmp = kod_zawodnika.append("F");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_ilosc += 1;
		znalezione += 1;
	}
	tmp.clear();
	tmp = kod_zawodnika.append("FH#");
	cout << tmp << endl;
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_perfekt += 1;
		znalezione += 1;
	}
	cout << dogranie_ilosc << "\n" << dogranie_perfekt << "\n" << endl;
}