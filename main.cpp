#include <iostream>
#include "ocean.h";
#include "sea.h";
#include "bay.h";
int main() {
	ocean lil1, indian, calm("calm", "west-east", 4000, 178684000);
	sea lil2, red, japanese("japanese", "in calm", 3800, 1000000);
	bay lil3, suez, posyet;
	int vr;
	cout << "If you want to check first overload variant put 1" << endl;
	cout << "If you want to enter ocean, sea, bay with overloaded cin put 2" << endl;
	cout << "If you want to see how parent's func. works pit 3" << endl;
	cin >> vr;
	
	switch (vr) {
	case 1:
		cout << lil1 << lil2 << lil3;
		break;
	case 2:
		cin >> indian >> red >> suez;
		break;
	case 3: {
		calm.GetWater(); cout << endl; japanese.GetWater(); cout << endl; posyet.SetWater();
		}	
	}
}