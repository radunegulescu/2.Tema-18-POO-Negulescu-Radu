#include "Varza.h"
#include <iostream>
#include <string>
using namespace std;
Varza::Varza() :nume("Varza"), Bucata() {
}
Varza::Varza(int b, int p) : nume("Varza"), Bucata(b, p) {
	produs = "varza";
}
Varza::Varza(const Varza& V) : Bucata(V), nume(V.nume) {
}
Varza::~Varza() {
	nume = "";
	produs = "";
}
istream& operator >> (istream& os, Varza& V) {
	V.citire(os);
	return os;
}
ostream& operator << (ostream& os, Varza& V) {
	V.afis(os);
	return os;
}
Varza& Varza:: operator =(const Varza& V) {
	if (this != &V) {
		Bucata::operator=(V);
		nume = V.nume;
	}
	return *this;
}
string Varza::getnume() {
	return nume;
}
void Varza::afis(ostream &os) {
	os << "\n Nume produs = " << nume;
	Bucata::afis(os);
	os << endl;
}
void Varza::citire(istream& os) {
	cout << "\n Varza: ";
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n bucati = ";
	os >> bucati;
	cost = pret * bucati;
	produs = "varza";
}
