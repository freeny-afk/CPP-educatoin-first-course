#include "figure.h";
#include <iostream>
using namespace std;

int main() {
	figure mas[3];

	float a, b, c, d, e, f, g, h;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b >> c >> d >> e >> f >> g >> h;
		mas[i] = figure(a, b, c, d, e, f, g, h);
		mas[i].show();
		cout << "is_prug(): " << mas[i].is_prug() << endl;
		cout << "is_square(): " << mas[i].is_square() << endl;
		cout << "is_romb(): " << mas[i].is_romb() << endl;
		cout << "is_in_circle(): " << mas[i].is_in_circle() << endl;
		cout << "is_out_circle(): " << mas[i].is_out_circle() << endl;
	}

}