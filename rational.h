using namespace std;

class rational {
private:
	int a, b, zn1, zn2;
	friend rational operator -(rational ab1, rational ab2);
public:
	rational(int a1, int b1);
	rational();
	int geta();
	int getb();
	void set(int a1, int b1);
	void show();
	rational& operator++();
};
rational operator +(rational ab1, rational ab2);
bool operator == (rational d1, rational d2);