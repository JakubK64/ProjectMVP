// Projekt_MVP.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "baza.h"
#include "Przyjmujaca.h"
#include "Atakujaca.h"
#include "Srodkowa.h"
#include "Libero.h"
#include "Rozgrywajaca.h"
using namespace std;

int main()
{
	fstream plik; 
	plik.open("test.txt", ios::in); // otwieranie pliku do operacji
	if (plik.good() == true) {
		cout << "Plik otwarty pomyslnie!" << endl;
	}
	else {
		cout << "Nie udalo sie otworzyc pliku!" << endl;
		exit(0);
	}

	

	string zawartosc_pliku, tmp; 
	int dlugosc_pliku=0, i=0;
	while(!plik.eof()) //przepisywanie zawartości pliku tekstowego do zmiennej typu string
	{
		getline(plik, tmp);
		zawartosc_pliku.append(tmp);
	}

	Przyjmujaca jedynka; // obiekt dla zawodnika nr. 1
	jedynka.napis = "*01"; // prefix kodu dla zawodnika nr. 1
	jedynka.przeszukiwanie_tekstu_ogolne(jedynka.napis,zawartosc_pliku); // wywołanie funkcji zliczającej dogrania,obrony i wystawy
	jedynka.przeszukiwanie_tekstu_pozycja(jedynka.napis,zawartosc_pliku); // wywołanie funkcji zliczającej elementy charakterystyczne
																		   // dla konkretnej pozycji
	Atakujaca dwojka;
	dwojka.napis = "*02";
	dwojka.przeszukiwanie_tekstu_ogolne(dwojka.napis, zawartosc_pliku);
	dwojka.przeszukiwanie_tekstu_pozycja(dwojka.napis, zawartosc_pliku);
	
	Libero trojka;
	trojka.napis = "*03";
	trojka.przeszukiwanie_tekstu_ogolne(trojka.napis, zawartosc_pliku);
	trojka.przeszukiwanie_tekstu_pozycja(trojka.napis, zawartosc_pliku);
	
	Srodkowa szostka;
	szostka.napis = "*06";
	szostka.przeszukiwanie_tekstu_ogolne(szostka.napis, zawartosc_pliku);
	szostka.przeszukiwanie_tekstu_pozycja(szostka.napis, zawartosc_pliku);
	
	Rozgrywajaca piatka;
	piatka.napis = "*05";
	piatka.przeszukiwanie_tekstu_ogolne(piatka.napis, zawartosc_pliku);
	piatka.przeszukiwanie_tekstu_pozycja(piatka.napis, zawartosc_pliku);

	


	plik.close();
	system("pause");
	return 0;
}

