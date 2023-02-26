#include "circle.h";
#include <cmath>
#include <iostream>

using namespace std;

Circle::Circle(float r, float x, float y) { //в общем-то, смысла создания конструктора, кроме как защиты от дурака, нет 
}
void Circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
float Circle::square() {
	return 3.1415 * radius * radius;
}
bool Circle::triangle_around(float a, float b, float c) {
	return 0;
}
bool Circle::triangle_in(float a, float b, float c) {}
bool Circle::check_circle(float r, float x_cntr, float y_cntr) {}
