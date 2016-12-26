#pragma once
#include "more.h"
class ostr:
	public more
{
char *name;
public:
	ostr(void);
	void setname(char *name);
	void getname();
	~ostr(void);
};