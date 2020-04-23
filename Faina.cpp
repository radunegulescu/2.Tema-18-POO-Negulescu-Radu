#include "Faina.h"
#include <iostream>
#include <string>
using namespace std;
Faina::Faina() :nume("Faina"), calitate(""), Greutate() {
}
Faina::Faina(string c, int g, int p) : nume("Faina"), calitate(c), Greutate(g, p) {
	produs = "faina " + c;
}
Faina::Faina(const Faina& F) : nume(F.nume), calitate(F.calitate), Greutate(F) {
}
Faina::~Faina() {
	calitate = "";
	nume = "";
}
istream& operator >> (istream& os, Faina& F) {
	F.citire(os);
	return os;
}
ostream& operator << (ostream& os, Faina& F) {
	F.afis(os);
	return os;
}
Faina& Faina:: operator =(const Faina& F) {
	if (this != &F) {
		Greutate::operator=(F);
		nume = F.nume;
		calitate = F.calitate;
	}
	return *this;
}
string Faina::getnume() {
	return nume;
}
string Faina::getcalitate() {
	return calitate;
}
void Faina::setcalitate(string c) {
	calitate = c;
}
void Faina::afis(ostream &os) {
	os << "\n Nume produs = " << nume;
	os << "\n Calitate = " << calitate;
	Greutate::afis(os);
	os << endl;
}
void Faina::citire(istream& os) {
	cout << "\n Faina: ";
	cout << "\n Calitate = ";
	os >> calitate;
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n Greutate = ";
	os >> kg;
	cost = pret * kg;
	produs = "faina " + calitate;
}

