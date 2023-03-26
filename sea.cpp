#include <iostream>
#include "sea.h";
using namespace std;

sea::sea() {
	nm = "nothing in big nothing";
	pl = "nowhere in big nowhere";
	dth = 0;
	sz = 0;
}

sea::sea(string nm, string pl, float dth, float sz) : ocean(nm, pl, dth, sz) {
	this->nm = nm;
	this->pl = pl;
	this->dth = dth;
	this->sz = sz;
}


istream& operator>>(istream& is, sea& sea) {
	cout << "Enter water name: ";
	is >> sea.nm;
	cout << "Enter where water is placed: ";
	is >> sea.pl;
	cout << "Enter water depth: ";
	is >> sea.dth;
	cout << "Enter water size: ";
	is >> sea.sz;

	return is;
}


ostream& operator<<(std::ostream& os, sea& sea) {
	os << "\nWater name: " << sea.nm << "\n";
	os << "Water place: " << sea.pl << "\n";
	os << "Water depth: " << sea.dth << "\n";
	os << "Water size: " << sea.sz << "\n";
	return os;
}
