#include <iostream>
#include <cmath>
#include "eq2.h";
using namespace std;

	eq2::eq2(double a1, double b1, double c1) {
		a = a1; b = b1; c = c1;
		D = 4 * a * c - b * b;
	}
	eq2::eq2() {
	}
	void eq2::set(double a1, double b1, double c1) {
		a = a1; b = b1; c = c1;
	}
	void eq2::ret(double &a1, double &b1, double &c1) {
		a1 = a; b1 = b; c1 = c;
	}
	void eq2::check() {
		cout << a << " ";
		cout << b << " ";
		cout << c << " ";
	}
	double eq2::find_X() {
		if (D < 0) {
			cout << "No results except complex numbers" << endl;
			return 0;
		}
		else if (D == 0) {
			x1 = - b / (2 * a);
			cout << "There is only one x = " << x1 << endl;
		}
		else if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			if (x1 > x2) cout << "The larger x of func 1 = " << x1; else cout << "The larger x of func 1 = " << x2;
		}
	}
	double eq2::find_Y(double x1) {
		X = x1;
		return a*X*X+b*X+c;

	}
	
	 eq2 operator + (eq2 e1, eq2 e2) {
		double a1, b1, c1;
		double a2, b2, c2;
		e1.ret(a1, b1, c1);
		e2.ret(a2, b2, c2);
		eq2 e3(a1 + a2, b1 + b2, c1 + c2);
		return e3;
	}