#include <iostream>
template<typename T> void swap(T &x,T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template<typename T> void tswout(T& x, T& y) {
	std::cout << "We swap x = " << y << " and y = " << x << std::endl;
	std::cout << "Now we got x = " << x << " and y = " << y << std::endl;
}

class exper {
private:
	float a, b;
public:
	exper() {
		float a1, b1;
		std::cin >> a1 >> b1;
		a = a1;
		b = b1;
		std::cout << "a1 = (" << a << ";" << b << ")" << std::endl;
	}
	exper(float a, float b) {
		this->a = a;
		this->b = b;
		std::cout << "b1 = (" << a << ";" << b << ")" << std::endl;
	}
	exper& operator=(exper& other) {
			a = other.a;	
			b = other.b;
			return *this;
	}	
	void cswout() {
		std::cout << "(" << a << ";" << b << ")" <<std::endl;
	}
};

int main() {

	int a, b;
	std::cout << "Two arguments swap: \n";
	std::cin >> a >> b;
	swap(a, b);
	tswout(a,b);
	std::cout << "----------------------\n";

	std::cout << "Two classes swap: \n";
	exper a1, b1(4, 5);
	swap(a1, b1);
	std::cout << "Now a1 swapped with b1: \n";
	std::cout << "a1 = "; a1.cswout();
	std::cout << "b1 = "; b1.cswout();

}