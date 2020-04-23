#pragma once
#include "Bucata.h"
#include <iostream>
#include <string>
using namespace std;
class Bere_doza :
	public Bucata
{
protected:
	string Brand;
	string tip;
public:
	Bere_doza();
	Bere_doza(string, string, int, int);
	Bere_doza(const Bere_doza&);
	~Bere_doza();
	friend istream& operator >> (istream&, Bere_doza&);
	friend ostream& operator << (ostream&, Bere_doza&);
	Bere_doza& operator =(const Bere_doza&);
	string getBrand();
	void setBrand(string);
	string gettip();
	void settip(string);
	void afis(ostream&);
	void citire(istream&);
};

