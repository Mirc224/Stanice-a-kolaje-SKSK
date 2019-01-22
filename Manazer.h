#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>
#include "Stanica.h"
class Manazer
{
public:
	Manazer();
	void vypisStanice();
	void vypisStaniceAKolaje();
	void zapisDoSuboru();
	virtual ~Manazer();
private:
	std::map<int, Stanica*> m_stanice;
	void nacitajStanice();
};

