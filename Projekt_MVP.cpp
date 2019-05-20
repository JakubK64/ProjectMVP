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
	plik.open("test.txt", ios::in);
	if (plik.good() == true) {
		cout << "Plik otwarty pomyslnie!" << endl;
	}
	else {
		cout << "Nie udalo sie otworzyc pliku!" << endl;
		exit(0);
	}

	string zawartosc_pliku, tmp;
	int dlugosc_pliku=0, i=0;
	while(!plik.eof())
	{
		getline(plik, tmp);
		zawartosc_pliku.append(tmp);
	}

	Przyjmujaca jedynka; // obiekt dla zawodnika nr. 1
	jedynka.napis = "*01"; // prefix kodu dla zawodnika nr. 1
	jedynka.przeszukiwanie_tekstu_ogolne(jedynka.napis,zawartosc_pliku);




	


	plik.close();
	system("pause");
	return 0;
}

