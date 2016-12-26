#pragma once
#include "kont.h"
class gos:
	public kont
{
	
	int nas;
	
public:
	gos(void);
	
	void setnas(int nas);
	void getnas();
	~gos(void);
};