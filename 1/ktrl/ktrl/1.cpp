#include <iostream> 
#include "windows.h"
#include "Vector.h" // Шаблон класса "вектор" 
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector<int> X(5); //Создаем объект класса "целочисленный вектор" 
	X += 4; //увеличиваем разрядность

	
	cout <<"Размерность равна: "<< X.size<<endl;
	X += 4;
	X + 4;
	cout << "Размерность равна: " << X.size << endl;
	system("pause");
	return 0;
}
