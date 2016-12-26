/*Класс - стек Stack. Дополнительно перегрузить следующие
операции: + - добавить элемент в стек; -- - извлечь элемент из
стека; bool() - проверка, пустой ли стек; > - копирование
одного стека в другой.*/

#include <iostream>
#include "windows.h"
#include "Stack.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Stack<int> St;
	Stack<int> St1;
	//St1.push(5);
	St.push(1);
	St + 4;
	if (!St.operator bool())cout << "\nСтек не пустой\n";;
	St.push(5);
	St.push(4);
	St.push(10);
	St.push(7);
	St.push(10);
	St.push(7);
	St + 7;
	St> St1;
	int da = St.prosto(St);
	
	for (int i = 0; i < da;i++)St--;
	cout << '\n';

	cout << "Элементы стека St1: ";
	St1.print();
	St1--;
	
	
	return 0;
}