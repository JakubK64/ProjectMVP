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

	// Zliczanie danych dla dograñ
	tmp = kod_zawodnika;
	tmp.append("F");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		int pozycja_w_stringu = znalezione + tmp.length() + 1;
		char pom = kod_meczu.at(pozycja_w_stringu);
		if (pom == '#')
		{
			dogranie_perfekt += 1;
		}
		else if (pom == '+')
		{
			dogranie_dobre += 1;
		}
		else if (pom == '-')
		{
			dogranie_minus += 1;
		}
		else if (pom == '/')
		{
			dogranie_slash += 1;
		}
		else if (pom == '=')
		{
			dogranie_blad += 1;
		}
		if (znalezione == std::string::npos) break;

		dogranie_ilosc += 1;
		znalezione += 1;
	}

	// Zliczanie danych dla obron
	tmp = kod_zawodnika;
	tmp.append("D");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		int pozycja_w_stringu = znalezione + tmp.length() + 1;
		char pom = kod_meczu.at(pozycja_w_stringu);
		if (pom == '#')
		{
			obrona_perfekt += 1;
		}
		else if (pom == '+')
		{
			obrona_dobra += 1;
		}
		else if (pom == '-')
		{
			obrona_minus += 1;
		}
		else if (pom == '/')
		{
			obrona_asekuracja += 1;
		}
		else if (pom == '=')
		{
			obrona_blad += 1;
		}
		if (znalezione == std::string::npos) break;

		obrona_ilosc += 1;
		znalezione += 1;
	}

	// Zliczanie danych dla wystaw
	tmp = kod_zawodnika;
	tmp.append("E");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		int pozycja_w_stringu = znalezione + tmp.length() + 1;
		char pom = kod_meczu.at(pozycja_w_stringu);
		if (pom == '#' || pom == '+')
		{
			wystawa_dobra += 1;
		}
		else if (pom == '-')
		{
			wystawa_zla += 1;
		}
		else if (pom == '/')
		{
			wystawa_slash += 1;
		}
		else if (pom == '=')
		{
			wystawa_blad += 1;
		}
		if (znalezione == std::string::npos) break;

		wystawa_ilosc += 1;
		znalezione += 1;
	}
}