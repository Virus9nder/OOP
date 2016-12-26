#pragma once
#include "Abstact.h"
#include "Ostrov.h"
#include "Strana.h"
#include "More.h"
const int ms = 50;
class Zemlya
{
	Abstact** geograf_obj;
	int kol=0;
public:
	friend class Kontroller;

	Zemlya():Zemlya(10){}

	Zemlya(int size)
		//
	{
		geograf_obj = new Abstact*[ms];
		init(size);
	}

	void init(int size)
	{
		int ch = 0;
		string str1, str2;
		char temp[10];
		Kontinent *kontin; Strana* stran; More* more;
		Ostrov* ostr;
		cout << "****�������� �����****\n";
		for (int i = 0; i < size; i++)
		{
		A:	cout << "\n1-���������, 2-������, 3-����, 4-������\n";
			cin >> temp;
			ch = atoi(temp);
			switch (ch)
			{
			case 1:
				cout << "�������� ����������: ";
				cin >> str1;
				kontin = new Kontinent(str1);
				insert(kontin);
				break;
			case 2:
				cout << "�������� ������: ";
				cin >> str1;
				cout << "�� ����� ���������� ���������: ";
				cin >> str2;
				stran = new Strana(str2, str1);
				insert(stran);
				break;
			case 3:
				cout << "�������� ����: ";
				cin >> str1;
				more =new More(str1);
				insert(more);
				break;
			case 4:
				cout << "�������� �������: ";
				cin >> str1;
				ostr = new Ostrov(str1);
				insert(ostr);
				break;
			default:
				cout << "�� �������� � �������!\n��������� ��� ���\n";
				goto A;
				break;
			}
		}
	}
	
	void Show()
	{
		cout << "\n\n�����\n\n";
		for (int i = 0; i < kol; i++)
		{
			geograf_obj[i]->show();
			cout << endl;
		}
		cout << "\n\n";
	}

	void insert(Abstact* obj)
	{
		geograf_obj[kol] = obj;
		kol++;
	}

	void set(int num, Abstact* obj)
	{
		if (num > -1 && num < kol)
		{
			geograf_obj[num] = obj;
		}
		else
		{
			insert(obj);
		}
	}

	void delete_elem(int num)
	{
		if (num > -1 && num < kol)
		{
			for (int i = num; i < kol - 1; i++)
				geograf_obj[i] = geograf_obj[i + 1];
			kol--;
		}
		else
			cout << "��� ������ ��������\n";
	}

	~Zemlya()
	{
		delete[] geograf_obj;
	}
	
};

class Kontroller
{
public:
	void Gosudarstva(Zemlya& Zeml)
	{
		string kontinent; int k = 0;
		cout << "������� �������� ����������: ";
		cin >> kontinent;
		for (int i = 0; i < Zeml.kol; i++)
		{
			if (typeid(Strana*).name() == Zeml.geograf_obj[i]->WhatIsIt())
			if (Zeml.geograf_obj[i]->getKontinent() == kontinent)
			{
				Zeml.geograf_obj[i]->show();
				k++;
			}
		}
		if (k == 0)
			cout << "������ �� �������!\n";
	}

	int getKolichMore(Zemlya& Zeml)
	{
		int k = 0;
		cout << "���� �� ����� ����� \n";
		for (int i = 0; i < Zeml.kol; i++)
		{
			if (typeid(More*).name() == Zeml.geograf_obj[i]->WhatIsIt())
			{
				Zeml.geograf_obj[i]->show();
				k++;
			}
		}
		cout << "����� " << k << " �����\n";
		return k;
	}

	void vyvodOstrov(Zemlya& Zeml)
	{
		int ostrov[ms], n = 0,nomer,temp;
		for (int i = 0; i < Zeml.kol; i++)
		{
			if (typeid(Ostrov*).name() == Zeml.geograf_obj[i]->WhatIsIt())//������� ��� ������� �� ������;
			{
				ostrov[n] = i;
				n++;
			}
		}
		for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			nomer = 0;
		B:	if ((Zeml.geograf_obj[ostrov[i]]->getOstrov())[nomer] < (Zeml.geograf_obj[ostrov[j]]->getOstrov())[nomer])
			{
				temp = ostrov[i];
				ostrov[i] = ostrov[j];
				ostrov[j] = temp;
			}
			else
			{
				if ((Zeml.geograf_obj[ostrov[i]]->getOstrov())[nomer] == (Zeml.geograf_obj[ostrov[j]]->getOstrov())[nomer])
				{
					nomer++;
					if ((Zeml.geograf_obj[ostrov[i]]->getOstrov()).length() != nomer &&
						(Zeml.geograf_obj[ostrov[j]]->getOstrov()).length() != nomer)
						goto B;
				}
			}
		}
		
		cout << "������� � ���������� �������\n";
		for (int i = 0; i < n; i++)
			Zeml.geograf_obj[ostrov[i]]->show();
	}
};