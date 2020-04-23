#include "Bucata.h"
#include <iostream>
#include <string>
using namespace std;
Bucata::Bucata() :bucati(0), Produs() {
}
Bucata::Bucata(int b, int p) : bucati(b), Produs(p,b*p) {
}
Bucata::Bucata(const Bucata& B):Produs(B) {
	bucati = B.bucati;
}
Bucata::~Bucata() {
	bucati = 0;
}
istream& operator >> (istream& os, Bucata& B) {
	B.citire(os);
	return os;
}
ostream& operator << (ostream& os, Bucata& B) {
	B.afis(os);
	return os;
}
Bucata& Bucata:: operator =(const Bucata& B) {
	if (this != &B) {
		Produs::operator=(B);
		bucati = B.bucati;
	}
	return *this;
}
int Bucata::getbucati() {
	return bucati;
}
void Bucata::setbucati(int x) {
	bucati = x;
	cost = bucati * pret;
}
void Bucata::afis(ostream &os) {
	os << "\n pret/u.m = ";
	os << pret;
	os << "\n nr bucati = ";
	os << bucati;
	os << "\n cost = ";
	os << cost<<" lei";
}
void Bucata::citire(istream& os) {
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n bucati = ";
	os >> bucati;
	cost = pret * bucati;
}
