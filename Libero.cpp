#include "stdafx.h"
#include "Libero.h"


Libero::Libero()
{
	obrona_ilosc = 0, obrona_perfekt = 0, obrona_dobra = 0, obrona_minus = 0, obrona_asekuracja = 0, obrona_blad = 0,
	obrona_wspolczynnik = 0, obrona_index = 0,

	wystawa_ilosc = 0, wystawa_dobra = 0, wystawa_zla = 0, wystawa_blad = 0, wystawa_slash = 0,
	wystawa_wspolczynnik = 0, wystawa_index = 0,

	dogranie_ilosc = 0, dogranie_perfekt = 0, dogranie_dobre = 0, dogranie_minus = 0, dogranie_slash = 0, dogranie_blad = 0;
	dogranie_wspolczynnik = 0, dogranie_index = 0,

	przyjecie_ilosc = 0, przyjecie_perfekt = 0, przyjecie_dobre = 0, przyjecie_minus_numer = 0, przyjecie_minus = 0, przyjecie_slash = 0,
	przyjecie_blad = 0,
	przyjecie_wspolczynnik = 0, przyjecie_index = 0;
}


Libero::~Libero()
{
}

void Libero::przeszukiwanie_tekstu_pozycja(string kod_zawodnika, string kod_meczu)
{
	string tmp; // string pomocniczy do wyszukiwania
	std::size_t znalezione = 0;

	// Zliczanie danych dla przyjêcia
	tmp = kod_zawodnika;
	tmp.append("R");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		int pozycja_w_stringu = znalezione + tmp.length() + 1;
		char pom = kod_meczu.at(pozycja_w_stringu);
		if (pom == '#')
		{
			przyjecie_perfekt += 1;
		}
		else if (pom == '+')
		{
			przyjecie_dobre += 1;
		}
		else if (pom == '-')
		{
			int pozycja_minus = znalezione + tmp.length() + 9;
			char numer_przyjecie = kod_meczu.at(pozycja_minus);
			int numer_do_przyjecia = (int)numer_przyjecie;
			if (numer_do_przyjecia >= 49 && numer_do_przyjecia <= 54)
			{
				przyjecie_minus_numer += 1;
			}
			else if (numer_do_przyjecia == 59)
			{
				przyjecie_minus += 1;
			}
		}
		else if (pom == '/')
		{
			przyjecie_slash += 1;
		}
		else if (pom == '=')
		{
			przyjecie_blad += 1;
		}
		if (znalezione == std::string::npos) break;

		przyjecie_ilosc += 1;
		znalezione += 1;
	}
}
