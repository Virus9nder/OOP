/*Создать класс – Треугольник, заданного тремя точками.Функции - члены изменяют точки, обеспечивают вывод на экран координат, 
рассчитывают длины сторон и периметр треугольника.Создать массив объектов.
a) подсчитать количество треугольников разного типа(равносторонний, равнобедренный, прямоугольный, произвольный).
b) определить для каждой группы наибольший и наименьший по периметру объект.*/

#include "Triple.h"
#include <iostream>
#include "windows.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triple a[] = { { 0, 0, 10, 0, 0, 4 }, { -3, 15, 6, 5, 10, 4 }, { 0, 0, 3, 0, 0, 4 }, { -3, 0, 0, 3, 3, 0 }, { 7, 1, 5, 6, 3, 1 }, { 1, 1, 1, 6, 3, 1 }, { 0, 0, 0, 3, 3, 0 } };

	int aa = 0, bb = 0, cc = 0, dd = 0; double a1 = 1005000000, a2 = 0, b1 = 100500, b2 = 0, c1 = 100500, c2 = 0, d1 = 100500, d2 = 0;
	int i = 0, j[4], k[4], c, ccc, ii;
	double xx, yy;
	system("pause");

	////////////////
	Triple D;

	D.~Triple();
	Triple S[5];
	for (i = 0; i < 5;i++)
	S[i].~Triple();


	do{aa = bb = cc = dd = 0;
		cout << "Выберите что-нибудь:\n";
	cout << "1-Изменить координаты треугольника\n2-Узнать координаты треугольника\n3-Вывести длину стороны треугоникаили или его периметр\n4-Задание\n0-конец\n";
	cin >> c;
	switch (c)
	{
	case 0:  exit(0);
	case 1: {  cout << "Выберите треугольник: ";
		cin >> ii; if (ii > 7){ cout << "Ошибка!"; break; }
		else {
			cout << "Выберите точку треугольника: ";
			cin >> ccc;
			if (ccc > 3){ cout << "Ошибка!"; break; }
			else{
				if (ccc == 1){ cout << "Введите координаты точки(x,y) "; cin >> xx >> yy; a[ii].setPointA(xx, yy); }
				if (ccc == 2){ cout << "Введите координаты точки(x,y) "; cin >> xx >> yy; a[ii].setPointB(xx, yy); }
				if (ccc == 3){ cout << "Введите координаты точки(x,y) "; cin >> xx >> yy; a[ii].setPointC(xx, yy); }
			}
		}
	}break;
	case 2: {   cout << "Выберите треугольник: ";
		cin >> ii; if (ii == 666){ for (i = 0; i < 6; i++){ a[i].Print(); cout << endl; } }
		if (ii > 7){ cout << "Ошибка!"; break; }
		else { a[ii].Print(); }
		
	}break;
	case 3: {cout << "Выберите треугольник: ";
		cin >> ii; if (ii > 7){ cout << "Ошибка!"; break; }
		else { i = 0; cout << "Сделайте выбор: \n1 - сторона\n2 - периметр"<<endl; cin >> i;
		if (i == 2) cout<< "Периметр равен: " << a[ii].getSquare();
		else {
			cout << "Выберите сторону треугольника: \n1 - AB\n2 - BC\n3 - AC\n";
			cin >> i;
			cout << "Длина составляет: ";
			if (i == 1) cout << a[ii].getAB();
			if (i == 2) cout << a[ii].getBC();
			if (i == 3) cout << a[ii].getAC();
		}
		}
		cout << endl;
	}break;
	case 5: {Triple::getnumber(); }break;
	case 4: {
				for (i = 0; i<7; i++)
				{

					if (a[i].is90())
					{
						aa++;

						if (a1 > a[i].getSquare()) { a1 = a[i].getSquare(); j[0] = i; }
						if (a2 < a[i].getSquare()) { a2 = a[i].getSquare(); k[0] = i; }


					}
					if (a[i].isEqual())
					{
						bb++;

						if (b1 > a[i].getSquare()) { b1 = a[i].getSquare(); j[1] = i; }
						if (b2 < a[i].getSquare()) { b2 = a[i].getSquare(); k[1] = i; }

					}
					if (a[i].is2())
					{
						cc++;
						if (c1 > a[i].getSquare()) { c1 = a[i].getSquare(); j[2] = i; }
						if (c2 < a[i].getSquare()) { c2 = a[i].getSquare(); k[2] = i; }

					}
					if (a[i].isRandom())
					{
						dd++;

						if (d1 > a[i].getSquare()) { d1 = a[i].getSquare(); j[3] = i; }
						if (d2 < a[i].getSquare()) { d2 = a[i].getSquare(); k[3] = i; }

					}
				}
				cout << "Количество прямоугольных треугольников: " << aa << endl;
				if (aa != 0)
				{
					cout << "Минимальный: a[" << k[0] << "] = " << a1 << endl;
					cout << "Максимальный: a[" << j[0] << "] = " << a2 << endl << endl;
				}
				else cout << endl;

				cout << "Количество равносторонних треугольников: " << bb << endl;
				if (bb != 0)
				{
					cout << "Минимальный: a[" << k[1] << "] = " << b1 << endl;
					cout << "Максимальный: a[" << j[1] << "] = " << b2 << endl << endl;
				}
				else cout << endl;
				cout << "Количество равнобедренных треугольников: " << cc << endl;
				if (cc != 0)
				{
					cout << "Минимальный: a[" << k[2] << "] = " << c1 << endl;
					cout << "Максимальный: a[" << j[2] << "] = " << c2 << endl << endl;
				}
				else cout << endl;

				cout << "Количество произвольных треугольников: " << dd << endl;
				if (dd != 0)
				{
					cout << "Минимальный: a[" << k[3] << "] = " << d1 << endl;
					cout << "Максимальный: a[" << j[3] << "] = " << d2 << endl << endl;
				}
				else cout << endl; }break;
				
	}

	} while (c != 666);
			
}