#include "StdAfx.h"
#include "gos.h"
#include <iostream>
using namespace std;
gos::gos(void)
{
	cout << "вызывается конструктор государства" << endl;
}

void gos::setnas(int nas)
{
	this->nas = nas;
}

void gos::getnas()
{
	cout << "Количество людей: " << this->nas <<" тысяч человек"<< endl;
}

gos::~gos(void)
{
	cout << "вызывается деструктор государства" << endl;
}