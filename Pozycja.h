#pragma once
#include <iostream>
#include <string>
using namespace std;
class Pozycja
{
protected:
	// Zmienne obrona
	int obrona_ilosc, obrona_perfekt, obrona_dobra, obrona_minus, obrona_asekuracja, obrona_blad;
	double obrona_index, obrona_wspolczynnik;
	// Zmienne wystawa
	int wystawa_ilosc, wystawa_dobra, wystawa_zla, wystawa_blad, wystawa_slash;
	double wystawa_index, wystawa_wspolczynnik;
	// Zmienne dogranie
	int dogranie_ilosc, dogranie_perfekt, dogranie_dobre, dogranie_minus, dogranie_slash, dogranie_blad;
	double dogranie_index, dogranie_wspolczynnik;
public:
	// Zmienne okre�laj�ce numer zawodniczki, string pocz�tkiem wyszukiwanego kodu (kod dru�yny + nr zawodnika)
	int x, y;
	string napis;
	// Wzka�nik zmieniaj�cy mno�nik przy wyliczaniu wsp�czynnika dla danej pozycji
	//int *wsk_mnoznik;)
	// Przeszukiwanie tekstu pod k�tem og�lnych zmiennych, dost�pnych dla ka�dej pozycji
	void przeszukiwanie_tekstu_ogolne(string kod_zawodnika, string kod_meczu);

	// Przeliczanie indexu ka�dego zagrania, stanowi�cego baz� do wyliczenia wsp�czynnika
	double wyliczanie_indexu();

	// Wyliczanie wsp�czynnika - podzielenie indexu przez ilo�� zagra� danego typu
	double wyliczanie_wspolczynnika();

	// Funkcja znajduj�ca najlepszych zawodnik�w (obiekty z najwy�szymi parametrami og�lnymi) i wypisuj�ca na ekran
	void funkcja_wynik();
public:
	Pozycja();
	~Pozycja();
};

