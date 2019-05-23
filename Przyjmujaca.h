#pragma once
#include "Pozycja.h"
#include <iostream>
#include <string>
using namespace std;

class Przyjmujaca :
	public Pozycja
{
private:
	// Zmienne atak
	int atak_ilosc, atak_skonczone_blok_2_3, atak_skocznone_blok_1_4, atak_plus_blok_2_3, atak_plus_blok_1_4,
		atak_minus_blok_2_3, atak_minus_blok_1_4, atak_zablokowane_blok_2_3, atak_zablokowane_blok_1_4,
		atak_blad_blok_2_3, atak_blad_blok_1_4;
	double atak_index, atak_wspolczynnik;
	// Zmienne przyjêcie
	int przyjecie_ilosc, przyjecie_perfekt, przyjecie_dobre, przyjecie_minus_numer, przyjecie_minus, przyjecie_slash,
		przyjecie_blad;
	double przyjecie_index, przyjecie_wspolczynnik;
	// Zmienne zagrywka
	int zagrywka_ilosc, zagrywka_asy, zagrywka_plus, zagrywka_minus, zagrywka_slash, zagrywka_blad;
	double zagrywka_index, zagrywka_wspolczynnik;
	// Zmienne blok
	int blok_ilosc, blok_skonczone, blok_plus, blok_minus, blok_blad, blok_blad_wlasny;
	double blok_index, blok_wspolczynnik;

public:
	// Konstruktor
	Przyjmujaca();

	// Destruktor
	~Przyjmujaca();

	// Przeszukiwanie tekstu dla zmiennych dotycz¹cych konkretnej pozycji
	void przeszukiwanie_tekstu_pozycja(string kod_zawodnika,string kod_meczu);
};

