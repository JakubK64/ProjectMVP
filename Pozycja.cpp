#include "stdafx.h"
#include "Pozycja.h"


Pozycja::Pozycja()
{
}


Pozycja::~Pozycja()
{
}

void Pozycja::przeszukiwanie_tekstu_ogolne(string kod_zawodnika, string kod_meczu)
{
	string tmp; // string pomocniczy do wyszukiwania
	std::size_t znalezione = 0;
	
	// Zliczanie ilo�ci dogra� w meczu
	tmp = kod_zawodnika;
		tmp.append("F");
	
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_ilosc += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci perfekcyjnych dogra� w meczu
	tmp = kod_zawodnika;
	tmp.append("FH#");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_perfekt += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie dobrych, ale nie perfekcyjnych dogra� w meczu
	tmp = kod_zawodnika;
	tmp.append("FH+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_dobre += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie z�ych dogra� w meczu
	tmp = kod_zawodnika;
	tmp.append("FH-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie dogra� na drug� stron� siatki w meczu
	tmp = kod_zawodnika;
	tmp.append("FH/");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_slash += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie b��d�w dogrania w meczu
	tmp = kod_zawodnika;
	tmp.append("FH=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		dogranie_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;
	
	// >----------------------------------------------------------------------------------------------------------------------
	// Zliczanie ilo�ci obron w meczu
	tmp = kod_zawodnika;
	tmp.append("D");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_ilosc += 1;
		znalezione += 1;
	}
	znalezione = 0;
	
	// Zliczanie ilo�ci perfekcyjnych obron (atak z wysokiej pi�ki)
	tmp = kod_zawodnika;
	tmp.append("DH#");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_perfekt += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci perfekcyjnych obron (atak z pi�ki typu "super")
	tmp = kod_zawodnika;
	tmp.append("DM#");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_perfekt += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci perfekcyjnych obron (atak na szybkiej pi�ce)
	tmp = kod_zawodnika;
	tmp.append("DQ#");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_perfekt += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci dobrych obron (atak z wysokiej pi�ki)
	tmp = kod_zawodnika;
	tmp.append("DH+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_dobra += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci dobrych obron (atak z pi�ki typu "super")
	tmp = kod_zawodnika;
	tmp.append("DM+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_dobra += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci dobrych obron (atak na szybkiej pi�ce)
	tmp = kod_zawodnika;
	tmp.append("DQ+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_dobra += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci z�ych obron (atak na wysokiej pi�ce)
	tmp = kod_zawodnika;
	tmp.append("DH-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci z�ych obron (atak na pi�ce typu "super")
	tmp = kod_zawodnika;
	tmp.append("DM-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci z�ych obron (atak z szybkiej pi�ki)
	tmp = kod_zawodnika;
	tmp.append("DQ-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_minus += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci b��d�w obrony (atak z wysokiej pi�ki)
	tmp = kod_zawodnika;
	tmp.append("DH=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci b��d�w obrony (atak z pi�ki typu "super")
	tmp = kod_zawodnika;
	tmp.append("DM=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci b��d�w obrony (atak z szybkiej pi�ki)
	tmp = kod_zawodnika;
	tmp.append("DQ=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci asekuracji 
	tmp = kod_zawodnika;
	tmp.append("DH/");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		obrona_asekuracja += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// >----------------------------------------------------------------------------------------------------------------------------
	
	// Zliczanie ilo�ci wystaw
	tmp = kod_zawodnika;
	tmp.append("E");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_ilosc += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw dobrych (wysoka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EH+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_dobra += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw dobrych (pi�ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("EM+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_dobra += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw dobrych (szybka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EQ+");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_dobra += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw z�ych (wysoka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EH-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_zla += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw z�ych (pi�ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("EM-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_zla += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw z�ych (szybka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EQ-");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_zla += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw na drug� stron� (wysoka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EH/");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_slash += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw na drug� stron� (pi�ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("EM/");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_slash += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci wystaw na drug� storn� (szybka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EQ/");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_slash += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci b��d�w wystawy (pi�ka wysoka)
	tmp = kod_zawodnika;
	tmp.append("EH=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci b��d�w wystawy (pi�ka typu "super")
	tmp = kod_zawodnika;
	tmp.append("EM=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;

	// Zliczanie ilo�ci b��d�w wystawy (szybka pi�ka)
	tmp = kod_zawodnika;
	tmp.append("EQ=");
	while (1)
	{
		znalezione = kod_meczu.find(tmp, znalezione);
		if (znalezione == std::string::npos) break;

		wystawa_blad += 1;
		znalezione += 1;
	}
	znalezione = 0;
	
}