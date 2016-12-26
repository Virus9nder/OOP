#include "stdafx.h" 
#include "gos.h" 
#include "kont.h" 
#include "more.h" 
#include "ostr.h" 
#include "susha.h" 
#include "locale" 
#include <iostream> 
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	susha v;

	cout << endl;
	int n = 0;
	n = rand() % 100;

	v.setsize(n);
	v.getsize();
	cout << endl;

	more i;
	cout << endl;
	i.setsize(100 - n);
	i.getsize();
	int nn = 0;

	nn = rand() % n;
	cout << endl;
	kont r;
	cout << endl;
	r.setname("Европа");
	r.getname();
	r.setsize(nn);
	r.getsize();
	cout << endl;
	gos u;
	cout << endl;
	int nnn = 0;
	nnn = rand() % 100000;
	u.setname("Саудовская Аравия");
	u.getname();
	u.setsize(nn - (rand() % nn / 3));
	u.getsize();
	u.setnas(nnn);
	u.getnas();
	cout << endl;
	ostr s;
	cout << endl;
	s.setname("Мадагаскар");
	s.getname();
	cout << endl << endl;

	return 0;
}
