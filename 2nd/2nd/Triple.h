#include "Point.h"
#include <iostream>

using namespace std;

class Triple
{

private:
	Point A;
	Point B;
	Point C;

	Triple(bool a);
	static int number;
public:
	const double sa = 1;
	Triple();
	Triple(double x1, double y1, double x2, double y2, double x3, double y3);
	~Triple()
	{
		cout << "Вызов деструктора\n ";
		number--;
	};
	static int getnumber() { cout << endl << number << endl; return number; }
	bool setPointA(double x, double y);
	bool setPointB(double x, double y);
	bool setPointC(double x, double y);
	static Triple* Create();
	void getPointA();
	void getPointB();
	void getPointC();
	void Print();
	double getAB();
	double getBC();
	double getAC();
	double getSquare();
	void Copy(Triple &t);

	bool is90();
	bool isEqual();
	bool isRandom();
	bool is2();
};