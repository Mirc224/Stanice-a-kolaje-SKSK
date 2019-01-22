#include "Manazer.h"



Manazer::Manazer()
{
	nacitajStanice();
}

void Manazer::nacitajStanice()
{
	{
		std::ifstream inputFile("Stanice.txt");
		while (!inputFile.eof())
		{
			std::string tempNazov;
			int tempCislo;
			inputFile >> tempCislo;
			inputFile >> tempNazov;
			Stanica* temp = new Stanica(tempNazov, tempCislo);
			m_stanice.insert(std::make_pair(tempCislo, temp));
		}
	}
	std::ifstream inputFile("Kolaje.txt");
	while (!inputFile.eof())
	{
		int cisloStanice;
		int cisloKolaje;
		inputFile >> cisloStanice;
		inputFile >> cisloKolaje;
		m_stanice.find(cisloStanice)->second->pridajKolaj(cisloKolaje);
	}
}

void Manazer::vypisStanice()
{
	for (auto &stanica : m_stanice)
	{
		std::cout << stanica.second->getNazov() << std::endl;
	}
}


void Manazer::vypisStaniceAKolaje()
{
	for (auto &stanica : m_stanice)
	{
		stanica.second->usporiadanyVypis();
	}
}

void Manazer::zapisDoSuboru()
{
	std::ofstream outputFile("Vystup.txt");
	for (auto &stanica : m_stanice)
	{
		outputFile << stanica.second;
	}
}

Manazer::~Manazer()
{
	for (auto &stanica : m_stanice)
	{
		delete stanica.second;
	}
}
