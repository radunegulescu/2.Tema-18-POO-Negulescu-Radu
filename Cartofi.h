#pragma once
#include "Greutate.h"
#include "Culoare.h"
#include <iostream>
#include <string>
using namespace std;
class Cartofi :
	public Greutate, public Culoare 
{
protected:
	string nume;
public:
	Cartofi();
	Cartofi(string, int, int);
	Cartofi(const Cartofi&);
	~Cartofi();
	friend istream& operator >> (istream&, Cartofi&);
	friend ostream& operator << (ostream&, Cartofi&);
	Cartofi& operator =(const Cartofi&);
	string getnume();
	void afis(ostream&);
	void citire(istream&);
};

