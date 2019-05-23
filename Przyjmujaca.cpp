#include "stdafx.h"
#include "Przyjmujaca.h"
#include "Pozycja.h"

Przyjmujaca::Przyjmujaca()
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

	przyjecie_ilosc = 0, przyjecie_perfekt = 0, przyjecie_dobre = 0, przyjecie_minus_numer = 0, przyjecie_minus = 0, przyjecie_slash = 0,
	przyjecie_blad = 0,
	przyjecie_wspolczynnik = 0, przyjecie_index = 0,

	zagrywka_ilosc = 0, zagrywka_asy = 0, zagrywka_plus = 0, zagrywka_minus = 0, zagrywka_slash = 0, zagrywka_blad = 0,
	zagrywka_wspolczynnik = 0, zagrywka_index = 0,

	blok_ilosc = 0, blok_skonczone = 0, blok_plus = 0, blok_minus = 0, blok_blad = 0, blok_blad_wlasny = 0,
	blok_wspolczynnik = 0, blok_index = 0;
}


Przyjmujaca::~Przyjmujaca()
{
}

void Przyjmujaca::przeszukiwanie_tekstu_pozycja(string kod_zawodnika, string kod_meczu)
{
	string tmp; // string pomocniczy do wyszukiwania
	std::size_t znalezione = 0;

	// Zliczanie iloœci bloków
	tmp = kod_zawodnika;
	tmp.append("B");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_ilosc += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie iloœci bloków punktowych (pi³ka wysoka)
	tmp = kod_zawodnika;
	tmp.append("BH#");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_skonczone += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie iloœci bloków punktowych (pi³ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("BM#");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_skonczone += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie iloœci bloków punktowych (szybka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BQ#");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_skonczone += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie iloœci wybloków (wysoka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BH+");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_plus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie iloœci wybloków (pi³ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("BM+");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_plus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie iloœci wybloków (szybka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BQ+");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_plus += 1;
		znalezione += 1;
	}
	znalezione = 0;
	
	// Zliczanie bloków nieskoñczonych (wysoka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BH-");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie bloków nieskoñczonych (pi³ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("BM-");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie bloków nieskoñczonych (szybka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BQ-");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b³êdów w³asnych w bloku (pi³ka wysoka)
	tmp = kod_zawodnika;
	tmp.append("BH/");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_blad_wlasny += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b³êdów w³asnych w bloku (pi³ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("BM/");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_blad_wlasny += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b³êdów w³asnych w bloku (szybka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BQ/");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_blad_wlasny += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b³êdów bloku (pi³ka wysoka)
	tmp = kod_zawodnika;
	tmp.append("BH=");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b³êdów bloku (pi³ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("BM=");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b³êdów bloku (szybka pi³ka)
	tmp = kod_zawodnika;
	tmp.append("BQ/");

	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		blok_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	//
}