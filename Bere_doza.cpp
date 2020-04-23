#include "Bere_doza.h"
#include <iostream>
#include <string>
using namespace std;
Bere_doza::Bere_doza() :Brand(""), tip(""), Bucata() {
}
Bere_doza::Bere_doza(string br, string t, int b, int p) : Brand(br), tip(t), Bucata(b, p) {
	produs = "bere doza " + br + " " + t;
}
Bere_doza::Bere_doza(const Bere_doza& B) : Bucata(B), Brand(B.Brand), tip(B.tip) {
}
Bere_doza::~Bere_doza() {
	Brand = "";
	tip = "";
}
istream& operator >> (istream& os, Bere_doza& B) {
	B.citire(os);
	return os;
}
ostream& operator << (ostream& os, Bere_doza& B) {
	B.afis(os);
	return os;
}
Bere_doza& Bere_doza:: operator =(const Bere_doza& B) {
	if (this != &B) {
		Bucata::operator=(B);
		Brand = B.Brand;
		tip = B.tip;
	}
	return *this;
}
string Bere_doza::getBrand() {
	return Brand;
}
void Bere_doza::setBrand(string br) {
	Brand = br;
}
string Bere_doza::gettip() {
	return tip;
}
void Bere_doza::settip(string t) {
	tip = t;
}
void Bere_doza::afis(ostream &os) {
	os << "\n Nume produs = Bere doza \n Brand: " << Brand << "\n tip: " << tip;
	Bucata::afis(os);
	os << endl;
}
void Bere_doza::citire(istream& os) {
	cout << "\n\n Bere_doza: ";
	cout << "\n Brand = ";
	getline(os,Brand);
	cout << "\n Tip= ";
	os >> tip;
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n bucati = ";
	os >> bucati;
	cost = pret * bucati;
	produs = "bere doza " + Brand + " " + tip;
}
