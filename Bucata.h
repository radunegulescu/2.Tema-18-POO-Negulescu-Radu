#pragma once
#include "Produs.h"
#include <iostream>
#include <string>
using namespace std;
class Bucata :
	public Produs
{
protected:
	int bucati;
public:
	Bucata();
	Bucata(int, int);
	Bucata(const Bucata&);
	virtual ~Bucata();
	friend istream& operator >> (istream&, Bucata&);
	friend ostream& operator << (ostream&, Bucata&);
	Bucata& operator =(const Bucata&);
	int getbucati();
	void setbucati(int x);
	void afis(ostream&);
	void citire(istream&);
};

