#include "Jucarie.h"
#include <iostream>
#include <string>
using namespace std;
Jucarie::Jucarie() :nume(""), Bucata() {
}
Jucarie::Jucarie(string n, int b, int p) : nume(n), Bucata(b, p) {
	produs = "jucarie " + n;
}
Jucarie::Jucarie(const Jucarie& J) : Bucata(J), nume(J.nume) {
}
Jucarie::~Jucarie() {
	nume = "";
}
istream& operator >> (istream& os, Jucarie& J) {
	J.citire(os);
	return os;
}
ostream& operator << (ostream& os, Jucarie& J) {
	J.afis(os);
	return os;
}
Jucarie& Jucarie:: operator =(const Jucarie& J) {
	if (this != &J) {
		Bucata::operator=(J);
		nume = J.nume;
	}
	return *this;
}
string Jucarie::getnume() {
	return nume;
}
void Jucarie::setnume(string n) {
	nume = n;
}
void Jucarie::afis(ostream& os) {
	os << "\n Nume produs = " << nume;
	Bucata::afis(os);
	os << endl;
}
void Jucarie::citire(istream& os) {
	cout << "\n\nJucarie: ";
	cout << "\nNume produs = ";
	getline(os, nume);
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n bucati = ";
	os >> bucati;
	cost = pret * bucati;
	produs = "jucarie " + nume;
}
