#include "triangle.h";
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	Triangle tr[3];

	for (int i = 0; i < 3; i++) {
		cout << "Define a, b, c of triangle " << i + 1 << ":\n";
		cin >> a >> b >> c;
		tr[i].set(a, b, c);
		if (!(tr[i].exst_tr())) { cout << "Triangle with these parameters doesn't exist \n------------------------------\n\n\n" << endl; }
		else {
			tr[i].show();
			cout << "Perimeter of triangle " << i + 1 << "is P = " << tr[i].perimetr() << "\n \n";
			cout << "Square of triangle " << i + 1 << "is S = " << tr[i].square() << "\n------------------------------\n\n\n";
		}
		}
	return 0;
	}