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
