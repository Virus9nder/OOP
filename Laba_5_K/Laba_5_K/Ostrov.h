#pragma once
#include "Abstact.h"

class Ostrov : virtual public Abstact
{
	string name_ostrov;
public:
	Ostrov(){}
	Ostrov(string name)
	{
		name_ostrov = name;
	}
	void setOstrov(string name)
	{
		name_ostrov = name;
	}
	string getOstrov()
	{
		return name_ostrov;
	}
	void show()
	{
		cout << "Остров: " << name_ostrov << endl;
	}

	string WhatIsIt()
	{
		return typeid(this).name();
	}
};