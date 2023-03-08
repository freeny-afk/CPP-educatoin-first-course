#include <iostream>
#include "rational.h";

using namespace std;

rational::rational(int a1, int b1) {
	a = a1; b = b1;
	if (b == 0) { cout << "Denominator is zero"; }
	if (a > b) {
		a %= b;
		if (a == 0) { cout << 0; }
	}
	if (a != 1) {
		if (b % a != 0 && b != a) {
			int c = b % a;
			if (b % c == 0) {
				a = a / c;
				b = b / c;
			}
		}
		else if (b % a == 0 && b == a) {
			a = 1; b = 1;
		}
		else if (b % a == 0 && b != a) {
			b /= a;
			a /= a;
		}
	}

}
rational::rational() {
}

void rational::get(int& a1, int& b1) {
	a1 = a;
	b1 = b;
}
void rational::set(int a1, int b1) {
	if (b == 0) { cout << "Denominator is zero"; }
	if (a > b) {
		a %= b;
		if (a == 0) { cout << 0; }
	}
	if (a != 1) {
		if (b % a != 0 && b != a) {
			int c = b % a;
			if (b % c == 0) {
				a = a / c;
				b = b / c;
			}
		}
		else if (b % a == 0 && b == a) {
			a = 1; b = 1;
		}
		else if (b % a == 0 && b != a) {
			b /= a;
			a /= a;
		}
	}
}
void rational::show() {
	cout << "The rational fraction equals " << a << "/" << b << endl;
}
rational operator +(rational ab1, rational ab2) {
	int a1, b1, a2, b2;
	int c, d;
	ab1.get(a1, b1);
	ab2.get(a2, b2);
	c = a1 + a2;
	d = b1 += b2;

	rational ab3(c, d);
	return ab3;
}