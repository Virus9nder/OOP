#include "stdafx.h"  
#include "clas.h" 
#include "locale" 
#include <iostream> 
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	//1-kont
	//2-some
	//3-gos
	//4-more
	//5-ostr
	//6-gos
	//7-pri
	//8-more
	
	more* one = new more;
	Printer Probuem;
	Probuem.iAmPrinting(one);
	gos sss;
	cout << "Число объект класса gos - "<< gos::getCounter()<<endl;
	gos sss1;

	cout << "Число объект класса gos - " << gos::getCounter() << endl;
	sss1.~gos();
	cout << "Число объект класса gos - " << gos::getCounter() << endl;


	ostr two;
	Inspector Gadjet;
	Curator Cura;
	ostr four("m");
	gos first(5);
	Cura.ICanModify(first);
	cout << "--\n";
	Gadjet.IKnowAll(first);

	kont da;
	da.S.Vizov(da);

	da.Check();
	
	susha* one1 = new susha;


	kont *kone = new kont("fasd");
	kont *ktwo = new kont("s");

	cout << "преобразованный const ";
	more mn;
	mn.changeNum();
	kone = static_cast<kont*>(one1);
	kone->toConsole();
	 one1 = dynamic_cast<kont*>(ktwo);
	one1->toConsole();
	
	
	

	return 0;
}
