#include <iostream>
using namespace std;

class eq2{
private:
	double a, b, c, x1, x2, X;
	double D;
public:
	eq2(double a1, double b1, double c1);
	eq2();
	void set(double a1, double b1, double c1);
	void ret(double &a1, double &b1, double &c1);
	void check();
	double find_X();
	double find_Y(double x1);
};
eq2 operator + (eq2 e1, eq2 e2);
