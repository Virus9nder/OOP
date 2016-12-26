#pragma once
#include <iostream>
#include <string>
using namespace std;

class Inspector;

class Curator;


class Something{
public:

	
	virtual void toConsole() = 0;
	
};
class WORLD :public Something
{
public:
};
class Printer{
public:
	void iAmPrinting(Something *someobj){
		cout << typeid(someobj).name() << endl;
		someobj->toConsole();
	}
};

class more :public WORLD
{
	int size;
	const int *NumberOfObject;
	
public:
	void toConsole(){ cout << typeid(this).name() << "" << size << endl; }
	
	void changeNum(){
		*const_cast<int*>(NumberOfObject) = 5;
		cout << *NumberOfObject << endl;
	}
	more(void){
		int iii = 3; 
		//cout << "вызывается конструктор моря" << endl;
		NumberOfObject = &iii;

		
	};

	void setsize(int size);
	void getsize();
	~more(void);
};
class ostr :
	public more
{
	char *name;
public:
	void toConsole(){ cout << typeid(this).name() << "" << *name << endl; }
	friend Inspector;
	friend Curator;
	
	ostr(void);

	void setname(char *name);
	void getname();
	ostr(char *n){ name = n; }
	~ostr(void);
};
class susha :public WORLD
{
	int size;
public:
	
	void toConsole(){ cout << typeid(this).name() << "" << size << endl; }
	susha(void);
	void setsize(int size);
	void getsize();
	~susha(void);
};

class kont : public susha
{
	
	char *name;
	
public:
	kont(void);
	kont(char *n){ name = n; }
	void toConsole(){ cout << typeid(this).name() << "" << name << endl; }
	void setname(char *name);
	void getname();
	bool Check();
	void VivodStr()
	{
		cout << "Внешний метод для F\n";
	}
	~kont(void);


	class F1
	{
	private:
		int Chislo;

	public:

		void Vizov(kont &obj);
		int setChislo(int C);
		int getChislo(){ return Chislo; }
		
		F1();
		F1(int C){
			
			Chislo =C;
		}
		
	}S;
};

class gos : protected kont
{

	int nas;
	
private:
	static int counter;
public:
	friend Inspector;
	friend Curator;
	gos(void);
 static int getCounter(){ return counter; }
	void setnas(int nas);
	
	void getnas();
	gos( int Nas){
		
		nas = Nas; }
	~gos(void);
};
 

class Curator
{
public:
	void ICanModify(gos &any)
	{
		 int typ;
		cout << "Введите новое значение: " << endl;
		cin >> typ;
		any.setnas(typ);
	}
};

class Inspector
{
public:
	void IKnowAll(gos& asd)
	{
		cout << "Приватное значение: " << asd.nas << endl;
	}
};