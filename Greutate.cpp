#include "Greutate.h"
#include <iostream>
#include <string>
using namespace std;
Greutate::Greutate() :kg(0), Produs() {
}
Greutate::Greutate(int k, int p) : kg(k), Produs(p, k* p) {
}
Greutate::Greutate(const Greutate& G) : Produs(G) {
	kg = G.kg;
}
Greutate::~Greutate() {
	kg = 0;
}
istream& operator >> (istream& os, Greutate& G) {
	G.citire(os);
	return os;
}
ostream& operator << (ostream& os, Greutate& G) {
	G.afis(os);
	return os;
}
Greutate& Greutate:: operator =(const Greutate& G) {
	if (this != &G) {
		Produs::operator=(G);
		kg = G.kg;
	}
	return *this;
}
int Greutate::getkg() {
	return kg;
}
void Greutate::setkg(int k) {
	kg = k;
	cost = kg * pret;
}
void Greutate::afis(ostream &os) {
	os << "\n pret/u.m = ";
	os << pret;
	os << "\n kg = ";
	os << kg;
	os << "\n cost = ";
	os << cost<<" lei";
}
void Greutate::citire(istream& os) {
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n kg = ";
	os >> kg;
	cost = pret * kg;
}
