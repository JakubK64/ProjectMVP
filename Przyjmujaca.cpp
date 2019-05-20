#include "stdafx.h"
#include "Przyjmujaca.h"


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
