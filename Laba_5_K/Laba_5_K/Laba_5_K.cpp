// Laba_5_K.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Konteiner.h"
#include <conio.h>
#include "windows.h"
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k;
	Zemlya Z(6);
	Z.Show();
	_getch();
	Kontroller control;
	cout << "Вывод всех государств на континенте\n";
	control.Gosudarstva(Z);
	_getch();
	control.getKolichMore(Z);
	_getch();
	control.vyvodOstrov(Z);//набирать все только мелкими или только большими, иначе может пойти не так как задумалось
	_getch();
	Ostrov o("Остров2");
	cout << "Замена 3 элемента на Остров1\n";
	Z.set(2, &o);
	Z.Show();
	_getch();
	cout << "Удаление элемента 4\n";
	Z.delete_elem(3);
	Z.Show();
	_getch();
	

	return 0;
}

