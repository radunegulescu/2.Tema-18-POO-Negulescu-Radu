#include "Cartofi.h"
#include <iostream>
#include <string>
using namespace std;
Cartofi::Cartofi() :nume("Cartofi"), Culoare(), Greutate() {
}
Cartofi::Cartofi(string c, int g, int p) : nume("Cartofi"), Culoare(c), Greutate(g, p) {
	produs = "cartofi " + c;
}
Cartofi::Cartofi(const Cartofi& C) : nume(C.nume), Culoare(C), Greutate(C) {
}
Cartofi::~Cartofi() {
	nume = "";
}
istream& operator >> (istream& os, Cartofi& C) {
	C.citire(os);
	return os;
}
ostream& operator << (ostream& os, Cartofi& C) {
	C.afis(os);
	return os;
}
Cartofi& Cartofi:: operator =(const Cartofi& C) {
	if (this != &C) {
		Culoare::operator=(C);
		Greutate::operator=(C);
		nume = C.nume;
	}
	return *this;
}
string Cartofi::getnume() {
	return nume;
}
void Cartofi::afis(ostream &os) {
	os << "\n Nume produs = " << nume;
	Culoare::afis(os);
	Greutate::afis(os);
	os << endl;
}
void Cartofi::citire(istream& os) {
	cout << "\n Cartofi: ";
	cout << "\n Culoare = ";
	os >> culoare;
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n Greutate = ";
	os >> kg;
	cost = pret * kg;
	produs = "cartofi " + culoare;
}
