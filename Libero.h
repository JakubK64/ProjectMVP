#pragma once
#include "Pozycja.h"
class Libero :
	public Pozycja
{
private:
	// Zmienne przyjêcie
	int przyjecie_ilosc, przyjecie_perfekt, przyjecie_dobre, przyjecie_minus_numer, przyjecie_minus, przyjecie_slash,
		przyjecie_blad;
	double przyjecie_index, przyjecie_wspolczynnik;
public:
	// Kontruktor
	Libero();

	// Destruktor
	~Libero();

	// Przeszukiwanie tekstu dla zmiennych dotycz¹cych konkretnej pozycji
	void przeszukiwanie_tekstu_pozycja(string kod_zawodnika, string kod_meczu);
};

