#pragma once
#include "Kontinent.h"

class Strana : public Kontinent
{
	string name_strana;
public:
	Strana(){}
	Strana(string name_Kont, string name_Stran) :Kontinent(name_Kont)
	{
		name_strana = name_Stran;
	}

	void show()
	{
		cout << "Страна: " << name_strana << endl;
		cout << "Находится на континенте: " << getKontinent() << endl;
		
	}

	void setStrana(string name)
	{
		name_strana = name;
	}
	string getStrana()
	{
		return name_strana;
	}

	string WhatIsIt()
	{
		return typeid(this).name();
	}
};