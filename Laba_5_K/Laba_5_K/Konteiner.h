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
		cout << "****Создание земли****\n";
		for (int i = 0; i < size; i++)
		{
		A:	cout << "\n1-Континент, 2-Страна, 3-Море, 4-Остров\n";
			cin >> temp;
			ch = atoi(temp);
			switch (ch)
			{
			case 1:
				cout << "Название континента: ";
				cin >> str1;
				kontin = new Kontinent(str1);
				insert(kontin);
				break;
			case 2:
				cout << "Название страны: ";
				cin >> str1;
				cout << "На каком континенте находится: ";
				cin >> str2;
				stran = new Strana(str2, str1);
				insert(stran);
				break;
			case 3:
				cout << "Название моря: ";
				cin >> str1;
				more =new More(str1);
				insert(more);
				break;
			case 4:
				cout << "Название острова: ";
				cin >> str1;
				ostr = new Ostrov(str1);
				insert(ostr);
				break;
			default:
				cout << "ВЫ ОШИБЛИСЬ С ВЫБОРОМ!\nПопробуйе еще раз\n";
				goto A;
				break;
			}
		}
	}
	
	void Show()
	{
		cout << "\n\nЗемля\n\n";
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
			cout << "Нет такого элемента\n";
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
		cout << "Введите название континента: ";
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
			cout << "НИЧЕГО НЕ НАЙДЕНО!\n";
	}

	int getKolichMore(Zemlya& Zeml)
	{
		int k = 0;
		cout << "Моря на нашей земле \n";
		for (int i = 0; i < Zeml.kol; i++)
		{
			if (typeid(More*).name() == Zeml.geograf_obj[i]->WhatIsIt())
			{
				Zeml.geograf_obj[i]->show();
				k++;
			}
		}
		cout << "Итого " << k << " морей\n";
		return k;
	}

	void vyvodOstrov(Zemlya& Zeml)
	{
		int ostrov[ms], n = 0,nomer,temp;
		for (int i = 0; i < Zeml.kol; i++)
		{
			if (typeid(Ostrov*).name() == Zeml.geograf_obj[i]->WhatIsIt())//выбрали все острова из списка;
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
		
		cout << "Острова в алфавитном порядке\n";
		for (int i = 0; i < n; i++)
			Zeml.geograf_obj[ostrov[i]]->show();
	}
};