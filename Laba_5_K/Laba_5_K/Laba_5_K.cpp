// Laba_5_K.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "����� ���� ���������� �� ����������\n";
	control.Gosudarstva(Z);
	_getch();
	control.getKolichMore(Z);
	_getch();
	control.vyvodOstrov(Z);//�������� ��� ������ ������� ��� ������ ��������, ����� ����� ����� �� ��� ��� ����������
	_getch();
	Ostrov o("������2");
	cout << "������ 3 �������� �� ������1\n";
	Z.set(2, &o);
	Z.Show();
	_getch();
	cout << "�������� �������� 4\n";
	Z.delete_elem(3);
	Z.Show();
	_getch();
	

	return 0;
}

