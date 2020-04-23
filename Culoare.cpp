#include "Culoare.h"
#include <iostream>
#include <string>
using namespace std;
Culoare::Culoare():culoare("") {
}
Culoare::Culoare(string c):culoare(c) {
}
Culoare::Culoare(const Culoare& C): culoare(C.culoare) {
}
Culoare::~Culoare() {
	culoare = "";
}
istream& operator >> (istream& os, Culoare& C) {
	C.citire(os);
	return os;
}
ostream& operator << (ostream& os, Culoare& C) {
	C.afis(os);
	return os;
}
Culoare& Culoare::operator=(const Culoare& C) {
	if (this != &C) {
		culoare = C.culoare;
	}
	return *this;
}
void Culoare::setculoare(string c) {
	culoare = c;
}
string Culoare::getculoare() {
	return culoare;
}
void Culoare::afis(ostream &os) {
	os << "\n Culoare: " << culoare;
}
void Culoare::citire(istream& os) {
	cout << "\n Culoare= ";
	os >> culoare;
}

