#include <iostream>
#include "ocean.h";
using namespace std;

ocean::ocean(string nm, string pl, float dth, float sz) {
	this->nm = nm;
	this->pl = pl;
	this->dth = dth;
	this->sz = sz;
}
ocean::ocean() {
	nm = "nothing";
	pl = "nowhere";
	dth = 0;
	sz = 0;
}

string ocean::GetName() {
	return nm;
}
void ocean::SetWater() {
	cout << "Enter water name: ";
	cin >> nm;
	cout << "Enter where water is placed: ";
	cin	>> pl;
	cout << "Enter water depth: ";
	cin  >> dth;
	cout << "Enter water size: ";
	cin >> sz;
}
void ocean::GetWater() {
	cout << "Water name: " << nm << endl;
	cout << "Where water is placed: " << pl << endl;
	cout << "Water depth: " << dth << endl;
	cout << "Water size: " << sz << endl;
}


istream& operator>>(istream& is, ocean& ocean) {
	cout << "Enter water name: ";
	is >> ocean.nm;
	cout << "Enter where water is placed: ";
	is >> ocean.pl;
	cout << "Enter water depth: ";
	is >> ocean.dth;
	cout << "Enter water size: ";
	is >> ocean.sz;

	return is;
}


ostream& operator<<(std::ostream& os, ocean& ocean) {
	os << "\nWater name: " << ocean.nm << "\n";
	os << "Water place: " << ocean.pl << "\n";
	os << "Water depth: " << ocean.dth << "\n";
	os << "Water size: " << ocean.sz << "\n";
	return os;
}