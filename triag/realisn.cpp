#include "trclass.h";
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	Triangle tr[3];

	for (int i = 0; i < 3; i++) {
		cout << "������� a, b, c ��� ������������ � " << i + 1 << ":\n";
		cin >> a >> b >> c;
		tr[i].set(a, b, c);
		if (!(tr[i].exst_tr())) { cout << "����������� � ������ ����������� �� ���������� \n------------------------------\n\n\n" << endl; }
		else {
			tr[i].show();
			cout << "�������� ������������ � " << i + 1 << ": P = " << tr[i].perimetr() << "\n \n";
			cout << "������� ������������ � " << i + 1 << ": S = " << tr[i].square() << "\n------------------------------\n\n\n";
		}
		}
	return 0;
	}