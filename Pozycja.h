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
	// Zmienne okreœlaj¹ce numer zawodniczki, string pocz¹tkiem wyszukiwanego kodu (kod dru¿yny + nr zawodnika)
	int x, y;
	string napis;
	// WzkaŸnik zmieniaj¹cy mno¿nik przy wyliczaniu wspó³czynnika dla danej pozycji
	//int *wsk_mnoznik;)
	// Przeszukiwanie tekstu pod k¹tem ogólnych zmiennych, dostêpnych dla ka¿dej pozycji
	void przeszukiwanie_tekstu_ogolne(string kod_zawodnika, string kod_meczu);

	// Przeliczanie indexu ka¿dego zagrania, stanowi¹cego bazê do wyliczenia wspó³czynnika
	double wyliczanie_indexu();

	// Wyliczanie wspó³czynnika - podzielenie indexu przez iloœæ zagrañ danego typu
	double wyliczanie_wspolczynnika();

	// Funkcja znajduj¹ca najlepszych zawodników (obiekty z najwy¿szymi parametrami ogólnymi) i wypisuj¹ca na ekran
	void funkcja_wynik();
public:
	Pozycja();
	~Pozycja();
};

