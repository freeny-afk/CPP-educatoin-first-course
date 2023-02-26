#include "figure.h";
#include <cmath>
#include <iostream>
using namespace std;

figure::figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4) {
	x1 = X1;
	x2 = X2;
	x3 = X3;
	x4 = X4;
	y1 = Y1;
	y2 = Y2;
	y3 = Y3;
	y4 = Y4;
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
	d = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
	S = 0;
	angle = acos(((x2 - x1) * (x4 - x1) + (y2 - y1) * (y4 - y1)) / (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) * sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1))));
	angle2 = acos(((x2 - x3) * (x4 - x3) + (y2 - y3) * (y4 - y3)) / (sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) * sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3))));
	if ((abs(x1 - x4) == abs(x2 - x3)) && (abs(y1 - y4) == abs(y2 - y3))) {
		S = a * d * sin(angle);
	}
	else {
		cout << endl << "Not square, rhomb, rectangle, pls skip, cause i got no DESTRUCTOR" << endl << endl << endl;
	}//ромб, параллелограмм, прямоугольник, квадрат
	P = a + b + c + d;
}
figure::figure() {};
void figure::show() {
	cout << "\nA(" << x1 << "," << y1 << ") " << "|A| = " << a << endl;
	cout << "B(" << x2 << "," << y2 << ") " << "|B| = " << b << endl;
	cout << "C(" << x3 << "," << y3 << ") " << "|C| = " << c << endl;
	cout << "D(" << x4 << "," << y4 << ") " << "|D| = " << d << endl;
	cout << "Square = " << S << " " << "Perimeter = " << P << endl << endl;
}
bool figure::is_prug() {
	return a == c && b == d;
}
bool figure::is_square() {
	return a == b && b == c && c == d && sin(angle) == 1;
}
bool figure::is_romb() { 
	return a == b && b == c && c == d && sin(angle) != 1;
}
bool figure::is_in_circle() {
	return sin(angle) + sin(angle2) == 2;
}
bool figure::is_out_circle() { 
	return a + c == b + d;
}

