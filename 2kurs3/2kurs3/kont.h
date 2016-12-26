#pragma once
#include "susha.h"
class kont:
	public susha
{
	
	char *name;

public:
	kont(void);
	void setname(char *name);
	void getname();
	
	~kont(void);
};