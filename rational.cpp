#include <iostream>
#include "rational.h";

using namespace std;

rational::rational(int a1, int b1) {
	a = a1; b = b1;
	if (a == 0) { cout << "0"; } else if (b == 0) { cout << "Denominator is zero"; }
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
int rational::geta() {
	return a;
}
int rational::getb() {
	return b;
}
void rational::set(int a1, int b1) {
	a = a1;
	b = b1;
	if (a == 0) { cout << "0"; } else if (b == 0) { cout << "Denominator is zero"; }
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
		if (b % a == 0 && b == a) {
			a = 1; b = 1;
		}
		else if (b % a == 0 && b != a) {
			b /= a;
			a /= a;
		}
	}
}
void rational::show() {
	cout << a << "/" << b << endl;
	if (a == 0 or b == 0) cout << "0";
}


rational operator +(rational ab1, rational ab2) {
	rational ab3;
	ab3.set(ab1.geta() * ab2.getb() + ab2.geta() * ab1.getb(), ab1.getb() * ab2.getb());
	return ab3;
}

rational operator -(rational ab1, rational ab2) {
	rational ab3;
	if (ab1.geta() * ab2.getb() > ab2.geta() * ab1.getb()) 
		ab3.set(ab1.geta() * ab2.getb() - ab2.geta() * ab1.getb(), ab1.getb() * ab2.getb());
	else
		ab3.set(ab2.geta() * ab1.getb() - ab1.geta() * ab2.getb(), ab1.getb() * ab2.getb());

	return ab3;
}

rational& rational::operator ++ (){
	a += 1;
	set(a, b);

	return *this;
}

bool operator == (rational ab1, rational ab2) {
	return (ab1.geta() * ab2.getb() == ab2.geta() * ab1.getb());
}

bool operator > (rational ab1, rational ab2) {
	return (ab1.geta() * ab2.getb() > ab2.geta() * ab1.getb());
}