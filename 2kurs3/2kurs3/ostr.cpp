#include "StdAfx.h"
#include "ostr.h"
#include <iostream>
using namespace std;
ostr::ostr(void)
{
	cout << "вызывается конструктор острова" << endl;
}
void ostr::setname(char *name)
{
	this->name = name;
}
void ostr::getname()
{
	cout << " Название острова: " << this->name << endl;
}
ostr::~ostr(void)
{
	cout << "вызывается деструктор острова" << endl;
}