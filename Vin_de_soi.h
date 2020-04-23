#pragma once
#include "Bucata.h"
#include "Culoare.h"
#include "Tip.h"
#include <iostream>
#include <string>
using namespace std;
class Vin_de_soi :
	public Bucata, public Culoare, public Tip
{
protected:
	string soi;
	int an_culegere;
	string Tara_Origine;
public:
	Vin_de_soi();
	Vin_de_soi(string, int, string, string, string, int, int);
	Vin_de_soi(const Vin_de_soi&);
	virtual ~Vin_de_soi();
	friend istream& operator >> (istream&, Vin_de_soi&);
	friend ostream& operator << (ostream&, Vin_de_soi&);
	Vin_de_soi& operator =(const Vin_de_soi&);
	string getsoi();
	void setsoi(string);
	int getan_culegere();
	void setan_culegere(int);
	string getTara_Origine();
	void setTara_Origine(string);
	void afis(ostream&);
	void citire(istream&);
};

