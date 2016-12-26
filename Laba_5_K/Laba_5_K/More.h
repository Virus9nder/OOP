#pragma once
#include "Abstact.h"

class More : virtual public Abstact
{
	string name_more;
public:
	More(){}
	More(string name)
	{
		name_more = name;
	}
	void setMore(string name)
	{
		name_more = name;
	}
	string getMore()
	{
		return name_more;
	}
	void show()
	{
		cout << "Море: " << name_more << endl;
	}

	string WhatIsIt()
	{
		return typeid(this).name();
	}
};