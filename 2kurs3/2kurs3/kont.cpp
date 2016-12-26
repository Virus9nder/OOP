#include "StdAfx.h"
#include "kont.h"
#include <iostream>
using namespace std;
kont::kont(void)
{
	cout << "вызывается конструктор континента" << endl;
}
void kont::setname(char *name)
{
	this->name = name;
}
void kont::getname()
{
	cout << "Название континента: " << this->name << endl;
}

kont::~kont(void)
{
	cout << "вызывается деструктор континента" << endl;
}