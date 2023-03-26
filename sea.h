#pragma once
#include "ocean.h";
#include <iostream>
using namespace std;

class sea: public ocean {
protected:
	string nm, pl;
	float dth, sz;
public:
	sea();
	sea(string nm, string pl, float dth, float sz);

	friend istream& operator>>(istream& is, sea& sea);
	friend ostream& operator<<(ostream& os, sea& sea);
};