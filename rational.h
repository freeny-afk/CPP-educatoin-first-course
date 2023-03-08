using namespace std;

class rational {
private:
	int a, b;
public:
	rational(int a1, int b1);
	rational();
	void get(int &a1, int &b1);
	void set(int a1, int b1);
	void show();
};
rational operator +(rational ab1, rational ab2);
