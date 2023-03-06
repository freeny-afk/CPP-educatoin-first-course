#include <iostream>
#include "eq2.h";
using namespace std;

int main() {
	double a, b, c, d, e, f, X;

	cout << "Enter values of the first equation:" << endl;
	cout << "a1 = "; cin >> a; cout << "b1 = "; cin >> b; cout << "c1 = "; cin >> c;
	cout << "Enter values of the second equation:" << endl;
	cout << "a2 = "; cin >> d; cout << "b2 = "; cin >> e; cout << "c2 = "; cin >> f;
	cout << endl;

	eq2 e1(a,b,c), e2(d,e,f), e3;
	e1.find_X();

	cout << endl << endl;
	cout << "Enter x to find second function result:" << endl;
	cout << "x = "; cin >> X; cout << endl;
	cout << "Function result is " << e2.find_Y(X) << endl;

	e3 = e1 + e2;
	cout << "Changed a, b, c are ";
	e3.check();

}