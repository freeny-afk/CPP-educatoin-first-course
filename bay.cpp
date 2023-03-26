#include <iostream>
#include "bay.h";
using namespace std;

bay::bay() {
	nm = "smaller nothing in bigger nothing";
	pl = "smaller nowhere in nowherer nowhere";
	dth = 0;
	sz = 0;
}

bay::bay(string nm, string pl, float dth, float sz) : sea(nm, pl, dth, sz) {
	this->nm = nm;
	this->pl = pl;
	this->dth = dth;
	this->sz = sz;
}

istream& operator>>(istream& is, bay& bay) {
	cout << "Enter water name: ";
	is >> bay.nm;
	cout << "Enter where water is placed: ";
	is >> bay.pl;
	cout << "Enter water depth: ";
	is >> bay.dth;
	cout << "Enter water size: ";
	is >> bay.sz;

	return is;
}


ostream& operator<<(std::ostream& os, bay& bay) {
	os << "\nWater name: " << bay.nm << "\n";
	os << "Water place: " << bay.pl << "\n";
	os << "Water depth: " << bay.dth << "\n";
	os << "Water size: " << bay.sz << "\n";
	return os;
}