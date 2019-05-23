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
	
	// Zliczanie iloœci dograñ w meczu
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

	// Zliczanie iloœci perfekcyjnych dograñ w meczu
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

	// Zliczanie dobrych, ale nie perfekcyjnych dograñ w meczu
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

	// Zliczanie z³ych dograñ w meczu
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

	// Zliczanie dograñ na drug¹ stronê siatki w meczu
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

	// Zliczanie b³êdów dogrania w meczu
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
	// Zliczanie iloœci obron w meczu
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
	
	// Zliczanie iloœci perfekcyjnych obron (atak z wysokiej pi³ki)
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

	// Zliczanie iloœci perfekcyjnych obron (atak z pi³ki typu "super")
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

	// Zliczanie iloœci perfekcyjnych obron (atak na szybkiej pi³ce)
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

	// Zliczanie iloœci dobrych obron (atak z wysokiej pi³ki)
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

	// Zliczanie iloœci dobrych obron (atak z pi³ki typu "super")
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

	// Zliczanie iloœci dobrych obron (atak na szybkiej pi³ce)
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

	// Zliczanie iloœci z³ych obron (atak na wysokiej pi³ce)
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

	// Zliczanie iloœci z³ych obron (atak na pi³ce typu "super")
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

	// Zliczanie iloœci z³ych obron (atak z szybkiej pi³ki)
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

	// Zliczanie iloœci b³êdów obrony (atak z wysokiej pi³ki)
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

	// Zliczanie iloœci b³êdów obrony (atak z pi³ki typu "super")
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

	// Zliczanie iloœci b³êdów obrony (atak z szybkiej pi³ki)
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

	// Zliczanie iloœci asekuracji 
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
	
	// Zliczanie iloœci wystaw
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

	// Zliczanie iloœci wystaw dobrych (wysoka pi³ka)
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

	// Zliczanie iloœci wystaw dobrych (pi³ka typu "super")
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

	// Zliczanie iloœci wystaw dobrych (szybka pi³ka)
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

	// Zliczanie iloœci wystaw z³ych (wysoka pi³ka)
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

	// Zliczanie iloœci wystaw z³ych (pi³ka typu "super")
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

	// Zliczanie iloœci wystaw z³ych (szybka pi³ka)
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

	// Zliczanie iloœci wystaw na drug¹ stronê (wysoka pi³ka)
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

	// Zliczanie iloœci wystaw na drug¹ stronê (pi³ka typu "super")
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

	// Zliczanie iloœci wystaw na drug¹ stornê (szybka pi³ka)
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

	// Zliczanie iloœci b³êdów wystawy (pi³ka wysoka)
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

	// Zliczanie iloœci b³êdów wystawy (pi³ka typu "super")
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

	// Zliczanie iloœci b³êdów wystawy (szybka pi³ka)
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