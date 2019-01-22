#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>
class Stanica
{
public:
	Stanica();
	Stanica(std::string nazov, int cislo) : m_nazov(nazov), m_cislo(cislo) {}
	friend std::istream& operator >>(std::istream& is, Stanica* b)
	{
		b->nacitaj(is); return is;
	}
	friend std::ostream& operator <<(std::ostream& os, Stanica* b) //takyto zapis aby sa to dalo retazit
	{
		b->vypis(os); return os;
	}
	void vypis(std::ostream& os);
	void nacitaj(std::istream& is);
	void usporiadanyVypis();
	void pridajKolaj(int cisloKolaje) { m_cislaKolaji.insert(cisloKolaje); }
	std::string getNazov() { return m_nazov; }
	int getCislo() { return m_cislo; }
	virtual ~Stanica();
private:
	std::string m_nazov;
	int m_cislo;
	std::set<int> m_cislaKolaji;
};

