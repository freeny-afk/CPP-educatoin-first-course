#pragma once
#include <iostream>
using namespace std;

class ocean {
	protected:
		string nm, pl;
		float dth, sz;
	public:
		ocean();
		ocean(string nm, string pl, float dth, float sz);
		void SetWater(); // enter extra func. to look how
		void GetWater(); // programm works with parent class
		string GetName();

		friend istream& operator>>(istream& is, ocean& ocean);
		friend ostream& operator<<(ostream& os, ocean& ocean);
};