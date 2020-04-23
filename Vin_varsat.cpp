#include "Vin_varsat.h"
#include <iostream>
#include <string>
using namespace std;
Vin_varsat::Vin_varsat() :nume(""), Tip(), Culoare(), Volum() {
}
Vin_varsat::Vin_varsat(string t, string c, int l, int p) : nume(c+" "+t), Tip(t), Culoare(c), Volum(l, p) {
	produs = "vin varsat " + c + " " + t;
}
Vin_varsat::Vin_varsat(const Vin_varsat& V) : nume(V.nume), Tip(V), Culoare(V), Volum(V) {
}
Vin_varsat::~Vin_varsat() {
	nume = "";
}
istream& operator >> (istream& os, Vin_varsat& V) {
	V.citire(os);
	return os;
}
ostream& operator << (ostream& os, Vin_varsat& V) {
	V.afis(os);
	return os;
}
Vin_varsat& Vin_varsat:: operator =(const Vin_varsat& V) {
	if (this != &V) {
		Tip::operator=(V);
		Culoare::operator=(V);
		Volum::operator=(V);
		nume = V.nume;
	}
	return *this;
}
string Vin_varsat::getnume() {
	return nume;
}
void Vin_varsat::afis(ostream &os) {
	os << "\n Nume produs = Vin varsat " << nume;
	Volum::afis(os);
	os << endl;
}
void Vin_varsat::citire(istream& os) {
	cout << "\n\n Nume produs = Vin varsat";
	cout << "\n Culoare = ";
	os >> culoare;
	cout << "\n Tip = ";
	os >> tip;
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n Volum = ";
	os >> L;
	cost = pret * L;
	nume = culoare + " " + tip;
	produs = "vin varsat " + culoare + " " + tip;
}
