#include "Produs.h"
#include <iostream>
#include <string>
using namespace std;
int Produs::nrproduse = 0;
Produs::Produs() :pret(0), cost(0), produs("") {
	++nrproduse;
}
Produs::Produs(int p, int c) : pret(p), cost(c) {
	++nrproduse;
}
Produs::Produs(const Produs& P) {
	++nrproduse;
	pret = P.pret;
	cost = P.cost;
	produs = P.produs;
}
Produs::~Produs() {
	--nrproduse;
	pret = 0;
	cost = 0;
}
istream& operator >> (istream& os, Produs& P) {
	P.citire(os);
	return os;
}
ostream& operator << (ostream& os, Produs& P) {
	P.afis(os);
	return os;
}
Produs& Produs:: operator=(const Produs& P) {
	if (this != &P) {
		pret = P.pret;
		cost = P.cost;
		produs = P.produs;
	}
	return *this;
}
void Produs::setpret(int x) {
	pret = x;
}
int Produs::getpret() {
	return pret;
}
int Produs::getcost() {
	return cost;
}
string Produs::getprodus() {
	return produs;
}
void Produs::citire(istream& os) {
	cout << "\n pret/u.m = ";
	os >> pret;
	cost = 0;
}
