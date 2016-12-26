/*Класс - стек Stack. Дополнительно перегрузить следующие
операции: + - добавить элемент в стек; -- - извлечь элемент из
стека; bool() - проверка, пустой ли стек; > - копирование
одного стека в другой.*/

#ifndef _STACKNODE_H_
#define _STACKNODE_H_

#include <string>
using namespace std;
template<class T>
class Stack
{
	
public:
	operator bool(){ if (tail == 0) return true; }
	Stack() :tail(0), head(0)
	{
	}

	~Stack()
	{
		while (head)
		{
			tail = head->next;
			delete head;
			head = tail;
		}
	}
	/*Stack::operator bool()
	{
		return true;
	}*/
	friend Stack operator + (Stack &R, int s)
	{				R.push(s);		return R;	}
	friend Stack operator -- (Stack &R)
	{		cout << "Все элементы стека: ";		R.print();
		cout << "Извлеченный элемент: " << R.top() << '\n';
		R.pop();		return R;	}
	

	friend Stack operator > (Stack &R, Stack &R2)
	{		R.pro(R, R2);		return R;	}

	
	void push(T val)
	{
		Node* Temp;
		Temp = new Node;
		Temp->elem = val;
		if (tail == 0)
		{
			tail = Temp;
		}
		else
		{
			Temp->next = tail;
			tail = Temp;
		}
	}

	T top()
	{
		if (tail == 0)
		{
			throw std::string("Stack is empty!");
		}
		return tail->elem;
	}

	void pop()
	{
		if (tail == 0)
		{
			throw std::string("Stack is empty!");
		}
		Node* delptr = tail;
		tail = tail->next;
		delete delptr;
	}
	int prosto(Stack R){
		int d=0;
		Node* delptr = tail;
		for (Node* ptr = tail; ptr != 0; ptr = ptr->next)
		{
			d++;
		}

		return d;
	}	void pro(Stack R, Stack &R1){
		int i = 0,max=0, s[100];
		Node* delptr = tail;
		for (Node* ptr = tail; ptr != 0; ptr = ptr->next)
		{
			s[i] = ptr->elem; i++;
		}
		
		for (int n = i - 1; n >= 0; n--){ R.push(s[n]);   R1.push(s[n]); }
		
	
	}

	void print()
	{
		if (tail == 0)
		{
			throw std::string("Stack is empty!");
		}
		for (Node* ptr = tail; ptr != 0; ptr = ptr->next)
		{
			std::cout << ptr->elem << ' ';
		}
		std::cout << '\n';
	}
private:
	struct Node
	{
		Node() :elem(0), next(0)
		{
		}
		Node* next;
		T elem;
	};
	Node* head;
	Node* tail;
	
};

#endif