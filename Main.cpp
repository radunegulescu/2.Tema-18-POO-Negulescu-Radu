#include <iostream>
#include <cstring>
#include <vector>
#include "Varza.h"
#include "Jucarie.h"
#include "Bere_doza.h"
#include "Vin_de_soi.h"
#include "Faina.h"
#include "Cartofi.h"
#include "Vin_varsat.h"
using namespace std;
void CitireBucati(int& n, Bucata* v) {
	v = new Bucata[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireVarza(int& n, Varza* v) {
	v = new Varza[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireJucarie(int& n, Jucarie* v) {
	v = new Jucarie[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireBere_doza(int& n, Bere_doza* v) {
	v = new Bere_doza[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireCuloare(int& n, Culoare* v) {
	v = new Culoare[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireVin_de_soi(int& n, Vin_de_soi* v) {
	v = new Vin_de_soi[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireGreutate(int& n, Greutate* v) {
	v = new Greutate[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireFaina(int& n, Faina* v) {
	v = new Faina[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireCartofi(int& n, Cartofi* v) {
	v = new Cartofi[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireVolum(int& n, Volum* v) {
	v = new Volum[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void CitireTip(int& n, Tip* v) {
	v = new Tip[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
void cuvinte(string a, string cuvinte[100], int &nrcuvinte) {
	string b;
	char c[100];
	int q = 0;
	int k = 0;
	for (unsigned int j = 0; j < a.size(); j++) {
		if (a[j] == ' ') {
			a.copy(c, j, k);
			b = c;
			b.resize(j - k);
			b.shrink_to_fit();
			cuvinte[q] = b;
			q++;
			k = j + 1;
		}
	}
	int j = a.size();
	a.copy(c, j, k);
	b = c;
	b.resize(j - k);
	b.shrink_to_fit();
	cuvinte[q] = b;
	q++;
	nrcuvinte = q;
}

int main() {
	// //PRODUSELE DE LA RAFT
	//Produs** raft = new Produs * [100];
	//raft[0] = new Varza(5, 4);
	//raft[1] = new Jucarie("masinuta", 3, 10);
	//raft[2] = new Bere_doza("Silva", "bruna", 7, 7);
	//raft[3] = new Vin_de_soi("Chardonnay", 1996, "Franta", "dulce", "alb", 2, 20);
	//raft[4] = new Faina("I", 4, 6);
	//raft[5] = new Cartofi("albi", 10, 2);
	//raft[6] = new Vin_varsat("sec", "alb", 5, 10);
	//raft[7] = new Jucarie("papusa", 4, 15);
	//raft[8] = new Bere_doza("Stella Artois", "blonda", 8, 8);
	//raft[9] = new Vin_de_soi("Cabernet Savignon", 1990, "Argentina", "sec", "rosu", 3, 25);
	//raft[10] = new Vin_de_soi("Merlot", 2000, "Chile", "dulce", "rosu", 2, 30);
	//raft[11] = new Vin_de_soi("Savignon Blanc", 2000, "Australia", "dulce", "alb", 2, 20);
	//raft[12] = new Cartofi("rosii", 10, 1);
	//raft[13] = new Vin_varsat("sec", "rosu", 5, 10);
	//raft[14] = new Faina("II", 4, 8);
	//raft[15] = new Faina("III", 4, 10);
	//int nrpoduse = 16;

	////COS DE CUPARATURI
	//Produs** cos = new Produs * [100];
	//int nrcos = -1;
	//// LISTA CUMPARATURI
	//string l[100];
	//int n = 7; //numarul de produse de pe lista
	//// PRODUSELE DIN LISTA. PRECIZARE: CANTITATEA SE POATE PRECIZA DOAR IN PRIMUL CUVANT DIN DESCRIEREA PRODUSULUI
	//l[0] = "1 vin alb sec din 1997 din Franta";
	//l[1] = "1 masinuta";
	//l[2] = "2kg cartofi";
	//l[3] = "2L vin varsat rosu sec";
	//l[4] = "1 bere Heineken blonda";
	//l[5] = "30 sticle vin rosu";
	//l[6] = "oua";
	//// CUMPARARE
	//string legatura = "de in din cu si la pe";
	//string cuvinte1[100], cuvinte2[100];
	//int nrcuv1 = 0, nrcuv2 = 0, i, j, k, m;
	//int total = 0;
	//for (i = 0; i < n; i++) {
	//	vector <int> v;
	//	vector <int> aux;
	//	int OK2 = 0;
	//	for (int h = 0; h < nrpoduse; h++) {
	//		aux.push_back(h);
	//	}
	//	string linie = l[i];
	//	cuvinte(linie, cuvinte1, nrcuv1);
	//	int st = 0;
	//	int cantitate = 1, volum=1, bucata=1, kg=1;
	//	int B = 0, K = 0, V = 0;
	//	if (isdigit(cuvinte1[0][0])) {
	//		++st;
	//		cantitate=stoi(cuvinte1[0]);
	//		if (cuvinte1[0][cuvinte1[0].size()-1] == 'L') {
	//			volum = cantitate;
	//			V = 1;
	//		}
	//		else {
	//			if (cuvinte1[0][cuvinte1[0].size() - 1] == 'g') {
	//				kg = cantitate;
	//				K = 1;
	//			}
	//			else {
	//				bucata = cantitate;
	//				B = 1;
	//			}
	//		}
	//	}
	//	for (j = st; j < nrcuv1; j++) {
	//		string atribut = cuvinte1[j];
	//		size_t found = legatura.find(atribut);
	//		if(found==string::npos){
	//			for (k = 0; k < aux.size(); k++) {
	//				string produs = raft[aux[k]]->getprodus();
	//				size_t found = produs.find(atribut);
	//				if (found != string::npos) {
	//					v.push_back(aux[k]);
	//					OK2 = 1; // produsul exista
	//				}
	//			}
	//		}
	//		if (v.size() != 0) {
	//			aux.resize(v.size());
	//			aux.shrink_to_fit();
	//			for (int h = 0; h < aux.size(); h++) {
	//				aux[h] = v[h];
	//			}
	//		}
	//		v.clear();
	//	}
	//	try {
	//		if (OK2 == 0) {
	//			throw 0;
	//		}
	//		int OK = 1;
	//		int it = 0;
	//		string rasp;
	//		int OK3 = 0;
	//		while (OK && it != aux.size()) {
	//			if (raft[aux[it]]->getkg() >= cantitate || raft[aux[it]]->getbucati() >= cantitate || raft[aux[it]]->getL() >= cantitate) {	 //Produsul e in stoc
	//				OK3 = 1;
	//				cout << endl << i << ": Doriti sa cumparati: "<<cantitate;
	//				if (V) {
	//					cout << "L";
	//				}
	//				if (K) {
	//					cout << "kg";
	//				}
	//				if (B) {
	//					cout << "bucati";
	//				}
	//				cout<<" "<<raft[aux[it]]->getprodus() << " la " << cantitate * raft[aux[it]]->getpret() << " de lei?\n";
	//				cin >> rasp;
	//				if (rasp == "da") {
	//					total += cantitate * raft[aux[it]]->getpret();
	//					raft[aux[it]]->setbucati(raft[aux[it]]->getbucati() - cantitate);
	//					raft[aux[it]]->setkg(raft[aux[it]]->getkg() - cantitate);
	//					raft[aux[it]]->setL(raft[aux[it]]->getL() - cantitate);
	//					++nrcos;
	//					OK = 0;
	//					Varza* aptr1 = dynamic_cast<Varza*>(raft[aux[it]]);
	//					if (aptr1 != 0) {
	//						cos[nrcos] = new Varza(bucata, raft[aux[it]]->getpret());
	//						cout << "\nVarza\n";
	//						break;
	//					}
	//					Jucarie* aptr2 = dynamic_cast<Jucarie*>(raft[aux[it]]);
	//					if (aptr2 != 0) {
	//						string cuvinte3[100];
	//						int nrcuv3;
	//						string s2 = raft[aux[it]]->getprodus();
	//						cuvinte(s2, cuvinte3, nrcuv3);
	//						cos[nrcos] = new Jucarie(cuvinte3[1], bucata, raft[aux[it]]->getpret());
	//						cout << "\nJucarie\n";
	//						break;
	//					}
	//					Bere_doza* aptr3 = dynamic_cast<Bere_doza*>(raft[aux[it]]);
	//					if (aptr3 != 0) {
	//						string cuvinte3[100];
	//						int nrcuv3;
	//						string s2 = raft[aux[it]]->getprodus();
	//						cuvinte(s2, cuvinte3, nrcuv3);
	//						cos[nrcos] = new Bere_doza(cuvinte3[2], cuvinte3[3], bucata, raft[aux[it]]->getpret());
	//						cout << "\nBere_doza\n";
	//						break;
	//					}
	//					Vin_de_soi* aptr4 = dynamic_cast<Vin_de_soi*>(raft[aux[it]]);
	//					if (aptr4 != 0) {
	//						string cuvinte3[100];
	//						int nrcuv3;
	//						string s2 = raft[aux[it]]->getprodus();
	//						cuvinte(s2, cuvinte3, nrcuv3);
	//						cos[nrcos] = new Vin_de_soi(cuvinte3[3], stoi(cuvinte3[6]), cuvinte3[8], cuvinte3[10], cuvinte3[9], bucata, raft[aux[it]]->getpret());
	//						cout << "\nVin_de_soi\n";
	//						break;
	//					}
	//					Faina* aptr5 = dynamic_cast<Faina*>(raft[aux[it]]);
	//					if (aptr5 != 0) {
	//						string cuvinte3[100];
	//						int nrcuv3;
	//						string s2 = raft[aux[it]]->getprodus();
	//						cuvinte(s2, cuvinte3, nrcuv3);
	//						cos[nrcos] = new Faina(cuvinte3[1], kg, raft[aux[it]]->getpret());
	//						cout << "\nFaina\n";
	//						break;
	//					}
	//					Cartofi* aptr6 = dynamic_cast<Cartofi*>(raft[aux[it]]);
	//					if (aptr6 != 0) {
	//						string cuvinte3[100];
	//						int nrcuv3;
	//						string s2 = raft[aux[it]]->getprodus();
	//						cuvinte(s2, cuvinte3, nrcuv3);
	//						cos[nrcos] = new Cartofi(cuvinte3[1], kg, raft[aux[it]]->getpret());
	//						cout << "\nCartofi\n";
	//						break;
	//					}
	//					Vin_varsat* aptr7 = dynamic_cast<Vin_varsat*>(raft[aux[it]]);
	//					if (aptr7 != 0) {
	//						string cuvinte3[100];
	//						int nrcuv3;
	//						string s2 = raft[aux[it]]->getprodus();
	//						cuvinte(s2, cuvinte3, nrcuv3);
	//						cos[nrcos] = new Vin_varsat(cuvinte3[3], cuvinte3[2], volum, raft[aux[it]]->getpret());
	//						cout << "\nVin_varsat\n";
	//						break;
	//					}
	//				}
	//			}
	//			++it;
	//		}
	//		if (!OK3) {
	//			throw string();
	//		}
	//	}
	//	catch(string st){
	//		cout << "stoc insuficient";
	//	}
	//	catch (int x) {
	//		cout << "produs inexistent";
	//	}
	//	cout << endl;
	//	aux.clear();
	//}
	////cos[0]->afis();
	//cout << "\n\n COSUL DE CUMPARATURI: \n";
	//for (i = 0; i <= nrcos; i++) {
	//	cout<<*cos[i]<<"\n";
	//}
	//cout << "\n Total de plata: "<<total<<" lei";
Bucata B(2, 3);
Produs* p = new Jucarie();
cin >> *p;
cout << *p;
}
