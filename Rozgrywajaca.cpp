#include "stdafx.h"
#include "Rozgrywajaca.h"


Rozgrywajaca::Rozgrywajaca()
{
	obrona_ilosc = 0, obrona_perfekt = 0, obrona_dobra = 0, obrona_minus = 0, obrona_asekuracja = 0, obrona_blad = 0,
	obrona_wspolczynnik = 0, obrona_index = 0,

	wystawa_ilosc = 0, wystawa_dobra = 0, wystawa_zla = 0, wystawa_blad = 0, wystawa_slash = 0,
	wystawa_wspolczynnik = 0, wystawa_index = 0,

	dogranie_ilosc = 0, dogranie_perfekt = 0, dogranie_dobre = 0, dogranie_minus = 0, dogranie_slash = 0, dogranie_blad = 0;
	dogranie_wspolczynnik = 0, dogranie_index = 0,

	atak_ilosc = 0, atak_skonczone_blok_2_3 = 0, atak_skocznone_blok_1_4 = 0, atak_plus_blok_2_3 = 0, atak_plus_blok_1_4 = 0,
	atak_minus_blok_2_3 = 0, atak_minus_blok_1_4 = 0, atak_zablokowane_blok_2_3 = 0, atak_zablokowane_blok_1_4 = 0,
	atak_blad_blok_2_3 = 0, atak_blad_blok_1_4 = 0;
	atak_wspolczynnik = 0, atak_index = 0,

	zagrywka_ilosc = 0, zagrywka_asy = 0, zagrywka_plus = 0, zagrywka_minus = 0, zagrywka_slash = 0, zagrywka_blad = 0,
	zagrywka_wspolczynnik = 0, zagrywka_index = 0,

	blok_ilosc = 0, blok_skonczone = 0, blok_plus = 0, blok_minus = 0, blok_blad = 0, blok_blad_wlasny = 0,
	blok_wspolczynnik = 0, blok_index = 0;
}


Rozgrywajaca::~Rozgrywajaca()
{
}

void Rozgrywajaca::przeszukiwanie_tekstu_pozycja(string kod_zawodnika, string kod_meczu)
{
	string tmp; // string pomocniczy do wyszukiwania
	std::size_t znalezione = 0;


	// Zliczanie danych dla bloku
	tmp = kod_zawodnika;
	tmp.append("B");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		int pozycja_w_stringu = znalezione + tmp.length() + 1;
		char pom = kod_meczu.at(pozycja_w_stringu);
		if (pom == '#')
		{
			blok_skonczone += 1;
		}
		else if (pom == '+')
		{
			blok_plus += 1;
		}
		else if (pom == '-')
		{
			blok_minus += 1;
		}
		else if (pom == '/')
		{
			blok_blad_wlasny += 1;
		}
		else if (pom == '=')
		{
			blok_blad += 1;
		}
		if (znalezione == std::string::npos) break;

		blok_ilosc += 1;
		znalezione += 1;
	}

	// Zliczanie danych dla zagrywek
	tmp = kod_zawodnika;
	tmp.append("S");

	// Zliczanie danych dla ataku
	tmp = kod_zawodnika;
	tmp.append("A");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		int pozycja_w_stringu = znalezione + tmp.length() + 1;
		char pom = kod_meczu.at(pozycja_w_stringu);
		if (pom == '#')
		{
			int pozycja_perfekt = znalezione + tmp.length() + 9;
			char numer_atak_perfekt = kod_meczu.at(pozycja_perfekt);
			int numer_do_atak_perfekt = (int)numer_atak_perfekt;
			if (numer_do_atak_perfekt == 49 || numer_do_atak_perfekt == 52)
			{
				atak_skocznone_blok_1_4 += 1;
			}
			else if (numer_do_atak_perfekt == 50 || numer_do_atak_perfekt == 51)
			{
				atak_blad_blok_2_3 += 1;
			}
		}
		else if (pom == '+')
		{
			int pozycja_plus = znalezione + tmp.length() + 9;
			char numer_atak_plus = kod_meczu.at(pozycja_plus);
			int numer_do_atak_plus = (int)numer_atak_plus;
			if (numer_do_atak_plus == 49 || numer_do_atak_plus == 52)
			{
				atak_plus_blok_1_4 += 1;
			}
			else if (numer_do_atak_plus == 50 || numer_do_atak_plus == 51)
			{
				atak_plus_blok_2_3 += 1;
			}
		}
		else if (pom == '-')
		{
			int pozycja_minus = znalezione + tmp.length() + 9;
			char numer_atak_minus = kod_meczu.at(pozycja_minus);
			int numer_do_atak_minus = (int)numer_atak_minus;
			if (numer_do_atak_minus == 49 || numer_do_atak_minus == 52)
			{
				atak_minus_blok_1_4 += 1;
			}
			else if (numer_do_atak_minus == 50 || numer_do_atak_minus == 51)
			{
				atak_minus_blok_2_3 += 1;
			}
		}
		else if (pom == '/')
		{
			int pozycja_slash = znalezione + tmp.length() + 9;
			char numer_atak_slash = kod_meczu.at(pozycja_slash);
			int numer_do_atak_slash = (int)numer_atak_slash;
			if (numer_do_atak_slash == 49 || numer_do_atak_slash == 52)
			{
				atak_zablokowane_blok_1_4 += 1;
			}
			else if (numer_do_atak_slash == 50 || numer_do_atak_slash == 51)
			{
				atak_zablokowane_blok_2_3 += 1;
			}
		}
		else if (pom == '=')
		{
			int pozycja_blad = znalezione + tmp.length() + 9;
			char numer_atak_blad = kod_meczu.at(pozycja_blad);
			int numer_do_atak_blad = (int)numer_atak_blad;
			if (numer_do_atak_blad == 49 || numer_do_atak_blad == 52)
			{
				atak_blad_blok_1_4 += 1;
			}
			else if (numer_do_atak_blad == 50 || numer_do_atak_blad == 51)
			{
				atak_blad_blok_2_3 += 1;
			}
		}
		if (znalezione == std::string::npos) break;

		atak_ilosc += 1;
		znalezione += 1;
	}
}