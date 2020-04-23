#include "Vin_de_soi.h"
#include <iostream>
#include <string>
using namespace std;
Vin_de_soi::Vin_de_soi() :soi(""), an_culegere(0), Tara_Origine(""), Tip(), Bucata(), Culoare() {
}
Vin_de_soi::Vin_de_soi(string s, int an, string T, string t, string c, int b, int p):
	soi(s), an_culegere(an), Tara_Origine(T), Tip(t), Bucata(b,p), Culoare(c) {
	produs = "vin de soi " + s + " din anul " + to_string(an) + " din " + T + " " + c + " " + t;
}
Vin_de_soi::Vin_de_soi(const Vin_de_soi& V) :
	soi(V.soi), an_culegere(V.an_culegere), Tara_Origine(V.Tara_Origine), Tip(V), Bucata(V), Culoare(V) {
}
Vin_de_soi::~Vin_de_soi() {
	soi = "";
	an_culegere = 0;
	Tara_Origine = "";
}
istream& operator >> (istream& os, Vin_de_soi& V) {
	V.citire(os);
	return os;
}
ostream& operator << (ostream& os, Vin_de_soi& V) {
	V.afis(os);
	return os;
}
Vin_de_soi& Vin_de_soi:: operator =(const Vin_de_soi& V) {
	if (this != &V) {
		Tip::operator=(V);
		Bucata::operator=(V);
		Culoare::operator=(V);
		soi = V.soi;
		an_culegere = V.an_culegere;
		Tara_Origine = V.Tara_Origine;
	}
	return *this;
}
string Vin_de_soi::getsoi() {
	return soi;
}
void Vin_de_soi::setsoi(string s) {
	soi = s;
}
int Vin_de_soi::getan_culegere() {
	return an_culegere;
}
void Vin_de_soi::setan_culegere(int an) {
	an_culegere = an;
}
string Vin_de_soi::getTara_Origine() {
	return Tara_Origine;
}
void Vin_de_soi::setTara_Origine(string T) {
	Tara_Origine = T;
}
void Vin_de_soi::afis(ostream &os) {
	os << "\n Nume produs = Vin de soi \n Soi: " << soi << "\n An culegere: " << an_culegere;
	os << "\n Tara de origine: " << Tara_Origine;
	Tip::afis(os);
	Culoare::afis(os);
	Bucata::afis(os);
	os << endl;
}
void Vin_de_soi::citire(istream& os) {
	cout << "\n\n Vin_de_soi: ";
	cout << "\n Soi = ";
	getline(os, soi);
	cout << "\n An culegere = ";
	os >> an_culegere;
	cout << "\n Tara Origine = ";
	os >> Tara_Origine;
	cout << "\n Tip = ";
	os >> tip;
	cout << "\n Culoare = ";
	os >> culoare;
	cout << "\n pret/u.m = ";
	os >> pret;
	cout << "\n bucati = ";
	os >> bucati;
	cost = pret * bucati;
	produs = "vin de soi " + soi + " din anul " + to_string(an_culegere) + " din " + Tara_Origine + " " + culoare + " " + tip;
}
