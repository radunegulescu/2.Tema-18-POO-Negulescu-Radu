#pragma once
#include "Greutate.h"
#include <iostream>
#include <string>
using namespace std;
class Faina :
	public Greutate
{
protected:
	string nume;
	string calitate;
public:
	Faina();
	Faina(string, int, int);
	Faina(const Faina&);
	~Faina();
	friend istream& operator >> (istream&, Faina&);
	friend ostream& operator << (ostream&, Faina&);
	Faina& operator =(const Faina&);
	string getnume();
	string getcalitate();
	void setcalitate(string);
	void afis(ostream&);
	void citire(istream&);
};

