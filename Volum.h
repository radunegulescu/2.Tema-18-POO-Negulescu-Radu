#pragma once
#include "Produs.h"
#include <iostream>
#include <string>
using namespace std;
class Volum :
	public Produs
{
protected:
	int L;
public:
	Volum();
	Volum(int, int);
	Volum(const Volum&);
	virtual ~Volum();
	friend istream& operator >> (istream&, Volum&);
	friend ostream& operator << (ostream&, Volum&);
	Volum& operator =(const Volum&);
	int getL();
	void setL(int);
	void afis(ostream&);
	void citire(istream&);
};

