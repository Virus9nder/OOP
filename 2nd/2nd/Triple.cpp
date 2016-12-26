//#include "Point.h"
#include <iostream>
#include "Triple.h"
#include <stdio.h>
#include <math.h>

using namespace std;
int Triple::number = 0;
Triple::Triple()
{
	cout << "Вызов конструктора\n";
	A.X=sa;
	A.Y=sa;
	B.X=-sa;
	B.Y=-sa;
	C.X=-sa;
	C.Y=sa;
	
}

Triple::Triple(double x1, double y1, double x2, double y2, double x3, double y3)
{
	if(setPointA(sa, y1)){}
	else
	{
		setPointA(3,3);
	}
	if(setPointB(x2,y2)){}
	else
	{
		setPointB(-3, -3);
	}
	if(setPointC(x3, y3)){}
	else
	{
		setPointC(-3, 3);
	}
}

Triple::Triple(bool a)
{
	int x1, y1;
	int x2, y2;
	int x3, y3;
	do
	{
		cout << "Введите координаты точки А: " << endl;
		cout << " X: "; cin >> x1; cout << " Y: "; cin >> y1;
		cout << "Введите координаты точки B: " << endl;
		cout << " X: "; cin >> x2; cout << " Y: "; cin >> y2;
		cout << "Введите координаты точки C: " << endl;
		cout << " X: "; cin >> x3; cout << " Y: "; cin >> y3;
	}while((!setPointA(x1, y1)) && (!setPointA(x2, y2)) && (!setPointA(x3, y3)));
}

void Triple::getPointA()
{
	cout << "\nТочка A: " << endl;
	cout << "X: " << A.X << endl;
	cout << "Y: " << A.Y << endl;
}

void Triple::getPointB()
{
	cout << "\nТочка B: " << endl;
	cout << "X: " << B.X << endl;
	cout << "Y: " << B.Y << endl;
}

void Triple::getPointC()
{
	cout << "\nТочка C:" << endl;
	cout << "X: " << C.X << endl;
	cout << "Y: " << C.Y << endl;
}

bool Triple::setPointA(double x, double y)
{
	if(A.X==x && A.Y==y)
	{
		return false;
	}
	else
	{
		A.X=x;
		A.Y=y;
		return true;
	}
}

bool Triple::setPointB(double x, double y)
{
	if(B.X==x && B.Y==y)
	{
		return false;
	}
	else
	{
		B.X=x;
		B.Y=y;
		return true;
	}
}

bool Triple::setPointC(double x, double y)
{
	if(C.X==x && C.Y==y)
	{
		return false;
	}
	else
	{
		C.X=x;
		C.Y=y;
		return true;
	}
}

Triple* Triple::Create()
{
	return new Triple(true);
}

void Triple::Print()
{
	cout << "Координаты точек треугольника: " << endl;
	getPointA();
	getPointB();
	getPointC();
}

double Triple::getAB()
{
	return ceil(1*(sqrt(pow((B.X-A.X), 2)+pow((B.Y-A.Y),2)))/1.0);
}

double Triple::getAC()
{
	return ceil(1*(sqrt(pow((C.X-A.X), 2)+pow((C.Y-A.Y),2)))/1.0);
}

double Triple::getBC()
{
	return ceil(1*(sqrt(pow((C.X-B.X), 2)+pow((C.Y-B.Y),2)))/1.0);
}

double Triple::getSquare()
{
	double p;
	p=getAB()+getAC()+getBC();
	number++;
	return (sqrt(p*(p-getAC())*(p-getBC())*(p-getAB())));
}

bool Triple::is90()
{
	double h = 0.1;
	if (((pow(getAB(), 2) + pow(getAC(), 2) + h*pow(getBC(), 2)>pow(getBC(), 2))) && (((pow(getAB(), 2) + pow(getAC(), 2) - h*pow(getBC(), 2)<pow(getBC(), 2))) || ((pow(getAB(), 2) + pow(getBC(), 2) + h*pow(getAC(), 2)> pow(getAC(), 2)) && (((pow(getAB(), 2) + pow(getBC(), 2) - h*pow(getAC(), 2)< pow(getAC(), 2)))) || (pow(getAC(), 2) + pow(getBC(), 2) + h*pow(getAB(), 2)>pow(getAB(), 2)) && (pow(getAC(), 2) + pow(getBC(), 2) - h*pow(getAB(), 2)< pow(getAB(), 2)))))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool Triple::isEqual()
{
	if(getAB()==getAC() && getAB()==getBC())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Triple::is2()
{
	if(getAB()==getAC() || getAB()==getBC() || getBC()==getAC())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Triple::isRandom()
{
	if((!is90()) && (!isEqual()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Triple::Copy(Triple &t)
{
	t.A=this->A;
	t.B=this->B;
	t.C=this->C;
}