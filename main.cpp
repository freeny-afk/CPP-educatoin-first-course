#include <iostream>
#include "rational.h";

using namespace std;

int main() {
	int a, b, n, yn;
	yn = 0;
	cout << "How many fractions do you want to make rational: "; cin >> n;
	rational* m = new rational[n + 1];
	for (int i = 0; i < n; i++) {
		cout << endl << "Enter your fraction please:" << endl;  cin >> a; cin >> b;
		m[i].set(a, b);
		cout << "The rational fraction equals "; m[i].show();
	}


	cout << endl << endl;
	rational* sum = new rational[1];
	rational* dif = new rational[1];
	rational* inc = new rational[1];
	rational* com = new rational[1];
	if (m[0] == m[1]){ cout << endl << "First two fractionals are equal \n";
	yn = 1;}
	else { cout << endl << "First two fractionals are not equal \n"; }

		cout << endl << "Incremented first fraction numerator = ";
		inc[0] = ++m[0];
		inc[0].show();
		cout << endl << "The sum of first two fractions = ";
		sum[0] = m[0] + m[1];
		sum[0].show();
		cout << endl << "The difference between first two fractions = ";
		if (yn == 1) { cout << "0"; }
		else {
			dif[0] = m[0] - m[1]; //Takes clear difference; comparing higher and lower fractions
			dif[0].show();
		}
		delete[] m;
		delete[] sum;
		delete[] dif;
}