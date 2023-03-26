#include <iostream>
#include "cone.h"

using namespace std;

int main()
{
	cone c1(3, 7);
	cone c2(1, 2, 3, 5, 10);

	cout << "First cone square: " << c1.area() << "\n";
	cout << "First cone volume: " << c1.volume() << "\n";
	cout << "Second cone square: " << c2.area() << "\n";
	cout << "Second cone volume: " << c2.volume() << "\n";
	cout << endl;

	int s;
	double x, y, z, r, h;
	cout << "How many cones you want to operate with: ";
	cin >> s;
	cone* cones = new cone[s];
	cout << "\n";
	cout << "Enter x,y,z,r,h";
	cout << "\n";
	for (int i = 0; i < s; i++)
	{
		cout << "Cone " << i + 1 << ": ";
		cin >> x >> y >> z >> r >> h;
		cones[i].setCoordinate(x, y, z);
		cones[i].setRadius(r);
		cones[i].setHeight(h);
	}

	cout << "\n";
	for (int i = 0; i < s; i++)
	{
		cout << "Cone " << i + 1 << ": \n";
		cout << cones[i] << "\n";
		cout << "	S = " << cones[i].area() << "\n";
		cout << "	V = " << cones[i].volume() << "\n";
	}

	cone cones2[5];
	cones2[0].setCoordinate(0, 0, 0); cones2[0].setRadius(18); cones2[0].setHeight(20);
	cones2[1].setCoordinate(0, 0, 1); cones2[1].setRadius(2); cones2[1].setHeight(5);
	cones2[2].setCoordinate(0, 1, 0); cones2[2].setRadius(0.0059); cones2[2].setHeight(10);
	cones2[3].setCoordinate(0, 1, 1); cones2[3].setRadius(1000); cones2[3].setHeight(150);
	cones2[4].setCoordinate(1, 0, 0); cones2[4].setRadius(2.71); cones2[4].setHeight(3.14);

	cout << "\n";
	cout << "Static array: ";
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Cone " << i + 1 << ": \n";
		cout << cones[i] << "\n";
		cout << "	S = " << cones2[i].area() << "\n";
		cout << "	V = " << cones2[i].volume() << "\n";
	}

	return 0;
}
