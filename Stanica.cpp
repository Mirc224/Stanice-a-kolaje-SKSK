#include "Stanica.h"



Stanica::Stanica()
{
}


void Stanica::vypis(std::ostream & os)
{
	os << m_nazov << std::endl;
	os << "--------------------" << std::endl;
	std::set<int> neparneCisla;
	std::set<int> parneCisla;
	for (auto &cislo : m_cislaKolaji)
	{
		if ((cislo % 2) == 0)
		{
			parneCisla.insert(cislo);
		}
		else
		{
			neparneCisla.insert(cislo);
		}
	}
	std::set<int>::reverse_iterator rit;
	for (rit = neparneCisla.rbegin(); rit != neparneCisla.rend(); ++rit)
	{
		os << *rit << std::endl;
	}
	for (auto &parCislo : parneCisla)
	{
		os << parCislo << std::endl;
	}
}

void Stanica::nacitaj(std::istream & is)
{
	is >> m_cislo;
	is >> m_nazov;
}

void Stanica::usporiadanyVypis()
{
	std::cout << m_nazov << std::endl;
	std::cout << "--------------------" << std::endl;
	std::set<int> neparneCisla;
	std::set<int> parneCisla;
	for (auto &cislo : m_cislaKolaji)
	{
		if ((cislo % 2) == 0)
		{
			parneCisla.insert(cislo);
		}
		else
		{
			neparneCisla.insert(cislo);
		}
	}
	std::set<int>::reverse_iterator rit;
	for (rit = neparneCisla.rbegin(); rit != neparneCisla.rend(); ++rit)
	{
		std::cout << *rit << std::endl;
	}
	for (auto &parCislo : parneCisla)
	{
		std::cout << parCislo << std::endl;
	}
}

Stanica::~Stanica()
{
}
