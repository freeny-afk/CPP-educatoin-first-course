#include "triangle.h";
#include <iostream>
#include <cmath>
using namespace std;
bool Triangle :: exst_tr() {
	return ((a + b > c) && (a + c > b) && (c + b > a));
}
void Triangle::set(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
}
void Triangle::show() {
	cout << "\nTriangle parameters are" << endl << "a = " << a << " b = " << b << " c = " << c << "\n \n";
	}

double Triangle::perimetr() {
	return pr = a + b + c;
	}

double Triangle::square() {
	return sq = sqrt(pr * (pr - a) * (pr - b) * (pr - c));
	}
