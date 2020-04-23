#include "Tip.h"
#include <iostream>
#include <string>
using namespace std;
Tip::Tip() :tip("") {
}
Tip::Tip(string t) : tip(t) {
}
Tip::Tip(const Tip& T) : tip(T.tip) {
}
Tip::~Tip() {
	tip = "";
}
istream& operator >> (istream& os, Tip& T) {
	T.citire(os);
	return os;
}
ostream& operator << (ostream& os, Tip& T) {
	T.afis(os);
	return os;
}
Tip& Tip::operator=(const Tip& T) {
	if (this != &T) {
		tip = T.tip;
	}
	return *this;
}
void Tip::settip(string t) {
	tip = t;
}
string Tip::gettip() {
	return tip;
}
void Tip::afis(ostream &os) {
	os << "\n Tip: " << tip;
}
void Tip::citire(istream& os) {
	cout << "\n Tip= ";
	os >> tip;
}