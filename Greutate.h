#pragma once
#include "Produs.h"
#include <iostream>
#include <string>
using namespace std;
class Greutate :
	public Produs
{
protected:
	int kg;
public:
	Greutate();
	Greutate(int, int);
	Greutate(const Greutate&);
	virtual ~Greutate();
	friend istream& operator >> (istream&, Greutate&);
	friend ostream& operator << (ostream&, Greutate&);
	Greutate& operator =(const Greutate&);
	int getkg();
	void setkg(int);
	void afis(ostream&);
	void citire(istream&);
};

