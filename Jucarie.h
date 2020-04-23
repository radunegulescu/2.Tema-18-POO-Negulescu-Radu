#pragma once
#include "Bucata.h"
#include <iostream>
#include <string>
using namespace std;
class Jucarie :
	public Bucata
{
protected:
	string nume;
public:
	Jucarie();
	Jucarie(string, int, int);
	Jucarie(const Jucarie&);
	~Jucarie();
	friend istream& operator >> (istream&, Jucarie&);
	friend ostream& operator << (ostream&, Jucarie&);
	Jucarie& operator =(const Jucarie&);
	string getnume();
	void setnume(string);
	void afis(ostream&);
	void citire(istream&);
};

