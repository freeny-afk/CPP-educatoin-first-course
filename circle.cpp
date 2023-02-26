#include "circle.h";
#include <cmath>
#include <iostream>

using namespace std;

Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y; 
}
void Circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
float Circle::square() {
	return 3.14 * radius * radius;
}
bool Circle::triangle_around(float a, float b, float c) {
	P = (a + b + c) / 2 ;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	R = a * b * c / 4 / S;
	if (R == radius) {
		return true;
	}
	else {
		return false;
	}
}
bool Circle::triangle_in(float a, float b, float c) {
	P = (a + b + c) / 2;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	R = S / P;
	if (R == radius) {
		return true;
	}
	else {
		return false;
	}
}
bool Circle::check_circle(float r, float x_cntr, float y_cntr) {

	float a = x_center - x_cntr;
	float b = y_center - y_cntr;
	float c = sqrt(a * a + b * b);

	if (((x_center == x_cntr) && (y_center == y_cntr)) || (c <= r + radius)) return true; else return false;

}
