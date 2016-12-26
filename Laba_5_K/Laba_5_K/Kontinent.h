#pragma once
#include "Abstact.h"

class Kontinent : virtual public Abstact
{

	string name_kontinent;
public:
	Kontinent(){}
	Kontinent(string name)
	{
		name_kontinent = name;
	}
	void show()
	{
		cout << "���������: " << name_kontinent << endl;
	}
	void setKontinent(string name)
	{
		name_kontinent = name;
	}
	string getKontinent()
	{
		return name_kontinent;
	}

	string WhatIsIt()
	{
		return typeid(this).name();
	}
};
