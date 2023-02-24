#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
class Triangle {
private:
	double a, b, c, pr, sq;
public:

	bool exst_tr() {
		return ((a + b > c) && (a + c > b) && (c + b > a));
	}

	void set(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	}

	void show() {
		cout << "\nСтороны треугольника:" << endl << "a = " << a << " b = " << b << " c = " << c << "\n \n";
	}

	double perimetr() {
		return pr = a + b + c;
		
	}

int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	Triangle tr[3];

	for (int i = 0; i < 3; i++) {
		cout << "Введите a, b, c для треугольника № " << i + 1 << ":\n";
		cin >> a >> b >> c;
		tr[i].set(a, b, c);
		if (!(tr[i].exst_tr())) { cout << "Не выйдет треугольничка, сука \n------------------------------\n\n\n" << endl; }
		else {
			tr[i].show();
			cout << "Периметр треугольника № " << i + 1 << ": P = " << tr[i].perimetr() << "\n \n";
			cout << "Площадь треугольника № " << i + 1 << ": S = " << tr[i].square() << "\n------------------------------\n\n\n";
		}
		}
	return 0;
	}