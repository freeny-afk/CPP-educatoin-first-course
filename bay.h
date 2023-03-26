#pragma once
#include "sea.h";
#include <iostream>
using namespace std;

class bay : public sea {
protected:
	string nm, pl;
	float dth, sz;
public:
	bay();
	bay(string nm, string pl, float dth, float sz);
	friend istream& operator>>(istream& is, bay& bay);
	friend ostream& operator<<(ostream& os, bay& bay);
};