#include "Volum.h"
#include <iostream>
#include <string>
using namespace std;
Volum::Volum() :L(0), Produs() {
}
Volum::Volum(int l, int p) : L(l), Produs(p, l * p) {
}
Volum::Volum(const Volum& V) : Produs(V) {
	L = V.L;
}
Volum::~Volum() {
	L = 0;
}
istream& operator >> (istream& os, Volum& V) {
	V.citire(os);
	return os;
}
ostream& operator << (ostream& os, Volum& V) {
	V.afis(os);
	return os;
}
Volum& Volum:: operator =(const Volum& V) {
	if (this != &V) {
		Produs::operator=(V);
		L = V.L;
	}
	return *this;
}
int Volum::getL() {
	return L;
}
void Volum::setL(int l) {
	L = l;
	cost = L * pret;
}
void Volum::afis(ostream &os) {
	os << "\n pret/u.m = ";
	os << pret;
	os << "\n L = ";
	os << L;
	os << "\n cost = ";
	os << cost<<" lei";
}
void Volum::citire(istream& os) {
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n L = ";
	os >> L;
	cost = pret * L;
}
