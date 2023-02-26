#include <iostream>
using namespace std;
class figure {
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float S;
	float P;
	float angle, angle2;
	float a, b, c, d;
public:
	figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4);
	figure();
	void show();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};
