#include "StdAfx.h"
#include "more.h"
#include <iostream>
using namespace std;
more::more(void)
{
	cout << "вызывается конструктор моря" << endl;
}
void more::setsize(int size)
{
	this->size = size;
}
void more::getsize()
{
	cout << " Море составляет  " << this->size <<" % "<< endl;
}
more::~more(void)
{
	cout << "вызывается деструктор моря" << endl;
}