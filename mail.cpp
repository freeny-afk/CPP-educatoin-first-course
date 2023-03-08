#include <iostream>
#include "rational.h";

using namespace std;

int main() {
	int a, b, n;
	cout << "How many fractions do you want to make rational: "; cin >> n;
	rational* mem = new rational[n];
	for (int i = 0; i < n; i++) {
		cout << endl << "Enter your fraction please:" << endl;  cin >> a; cin >> b;
		mem[i].set(a, b);
		mem[i].show();
	}
	delete[] mem;
}