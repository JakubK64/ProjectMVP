#pragma once
#include "Pozycja.h"
class Atakujaca :
	public Pozycja
{
private:
	// Zmienne atak
	int atak_ilosc, atak_skonczone_blok_2_3, atak_skocznone_blok_1_4, atak_plus_blok_2_3, atak_plus_blok_1_4,
		atak_minus_blok_2_3, atak_minus_blok_1_4, atak_zablokowane_blok_2_3, atak_zablokowane_blok_1_4,
		atak_blad_blok_2_3, atak_blad_blok_1_4;
	double atak_index, atak_wspolczynnik;
	// Zmienne zagrywka
	int zagrywka_ilosc, zagrywka_asy, zagrywka_plus, zagrywka_minus, zagrywka_slash, zagrywka_blad;
	double zagrywka_index, zagrywka_wspolczynnik;
	// Zmienne blok
	int blok_ilosc, blok_skonczone, blok_plus, blok_minus, blok_blad, blok_blad_wlasny;
	double blok_index, blok_wspolczynnik;

public:
	// Konstruktor
	Atakujaca();

	// Destruktor
	~Atakujaca();

	// Przeszukiwanie tekstu dla zmiennych dotycz¹cych konkretnej pozycji
	void przeszukiwanie_tekstu_pozycja(string kod_zawodnika, string kod_meczu);

};

