#pragma once
#include "Bucata.h"
#include <iostream>
#include <string>
using namespace std;
class Varza :
	public Bucata
{protected:
	string nume;
public:
	Varza();
	Varza(int, int);
	Varza(const Varza&);
	~Varza();
	friend istream& operator >> (istream&, Varza&);
	friend ostream& operator << (ostream&, Varza&);
	Varza& operator =(const Varza&);
	string getnume();
	void afis(ostream&);
	void citire(istream&);
};

