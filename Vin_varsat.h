#pragma once
#include "Volum.h"
#include "Tip.h"
#include "Culoare.h"
#include <iostream>
#include <string>
using namespace std;
class Vin_varsat :
	public Volum, public Tip, public Culoare
{
protected:
	string nume;
public:
	Vin_varsat();
	Vin_varsat(string, string, int, int);
	Vin_varsat(const Vin_varsat&);
	~Vin_varsat();
	friend istream& operator >> (istream&, Vin_varsat&);
	friend ostream& operator << (ostream&, Vin_varsat&);
	Vin_varsat& operator =(const Vin_varsat&);
	string getnume();
	void afis(ostream& os);
	void citire(istream& os);
};

