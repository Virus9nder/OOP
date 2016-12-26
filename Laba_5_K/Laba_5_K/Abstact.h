#pragma once
#include <iostream>
#include <string>

using namespace std;
class Abstact
{
public:
	virtual void show() = 0;
	virtual string WhatIsIt() = 0;
	virtual string getKontinent()
	{
		return "NO";
	}
	virtual string getOstrov()
	{
		return "NO";
	}
};