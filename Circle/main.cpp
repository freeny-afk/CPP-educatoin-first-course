#include "circle.h";
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	float r, x, y, a, b, c;
	Circle sq1(0, 0, 0), sq2(0, 0, 0), sq3(0, 0, 0);

	cout << "Enter first square characteristics please\n"; //1. Создаёт окружность
	cin >> r >> x >> y;
	sq1.set_circle(r, x, y);
	cout << "----------------------------------------\n";

	cout << "Enter second square characteristics please\n"; //2. Создаёт окружность и использует square, 2 bool'a
	cin >> r >> x >> y;
	sq2.set_circle(r, x, y);
	cout << "Circle square is " << sq2.square();
	cout << "\n\nEnter triangle parameters you want to opetate with:\n";
	cin >> a >> b >> c;
	sq2.triangle_around(a, b, c) == true ? cout << "Circle is circumscribed\n\n" : cout << "Circle is not circumscribed\n\n";
	sq2.triangle_in(a, b, c) == true ? cout << "Circle is inscribed\n\n" : cout << "Circle is not inscribed\n\n ----------------------------------------";
	
	cout << "\n\nEnter second square characteristics please\n"; //3. Создаёт окружность и использует check_circle
	cin >> r >> x >> y;
	sq3.check_circle(r, x, y) == true ? cout << "Circles intersect" : cout << "Circles don't intersect";
	
}