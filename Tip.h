#pragma once
#include <iostream>
#include <string>
using namespace std;
class Tip
{
protected:
	string tip;
public:
	Tip();
	Tip(string);
	Tip(const Tip&);
	virtual ~Tip();
	friend istream& operator >> (istream&, Tip&);
	friend ostream& operator << (ostream&, Tip&);
	Tip& operator =(const Tip&);
	void settip(string);
	string gettip();
	void afis(ostream&);
	void citire(istream&);
};