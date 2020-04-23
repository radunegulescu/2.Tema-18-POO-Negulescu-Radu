#pragma once
#include <iostream>
#include <string>
using namespace std;
class Produs
{
protected:
	string produs;
	int pret;
	int cost;
public:
	static int nrproduse;
	Produs();
	Produs(int, int);
	Produs(const Produs&);
	virtual ~Produs();
	friend istream& operator >> (istream&, Produs&);
	friend ostream& operator << (ostream&, Produs&);
	Produs& operator =(const Produs&);
	void setpret(int);
	void setcost(int);
	int getpret();
	int getcost();
	string getprodus();
	virtual void afis(ostream& os) = 0;
	virtual void citire(istream& os);
	virtual int getbucati() {
		return 0;
	}
	virtual int getkg() {
		return 0;
	}
	virtual int getL() {
		return 0;
	}
	virtual void setbucati(int b) {
	}
	virtual void setkg(int k) {
	}
	virtual void setL(int l) {
	}
};

