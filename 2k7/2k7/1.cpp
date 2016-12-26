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
	Stack<double> St2;
	Stack<float> St3;
	//St1.push(5);
	St.push(1);
	St + 4;
	if (!St.operator bool())cout << "\nСтек не пустой\n";;
	St + 17;
	St.push(5);
	St.push(4);
	St.push(10);

	St> St1;
	int da = St.prosto(St);
	
	St2.push((7.2));
	St2.push(7);
	St2.push(6.9);
	
	St3.push((7.2));
	St3.push((7));
	St3.push((6.9));
	cout << "St1: " << St.pros(St, 7) << endl << endl;

	cout << "St2: " << St2.pros(St2, (6.89)) << endl << endl;
	
	cout <<"St3: "<< St3.pros(St3, (7)) << endl << endl;
	
	for (int i = 0; i < da; i++)St--;
	cout << '\n';

	cout << "Элементы стека St1: ";
	St1.print();
	St1--;


	return 0;
}