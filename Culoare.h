#pragma once
#include <iostream>
#include <string>
using namespace std;
class Culoare
{
protected:
	string culoare;
public:
	Culoare();
	Culoare(string);
	Culoare(const Culoare&);
	virtual ~Culoare();
	friend istream& operator >> (istream&, Culoare&);
	friend ostream& operator << (ostream&, Culoare&);
	Culoare& operator =(const Culoare&);
	void setculoare(string);
	string getculoare();
	void afis(ostream &os);
	void citire(istream& os);
};

