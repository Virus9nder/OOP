#include "StdAfx.h"
#include "susha.h"
#include <iostream>
using namespace std;
susha::susha(void)
{
	cout << "вызывается конструктор суши" << endl;
}
void susha::setsize(int size)
{
	this->size = size;
}
void susha::getsize()
{
	cout << " Размер " << this->size << endl;
}
susha::~susha(void)
{
	cout << "вызывается деструктор суши" << endl;
}