template<class T> // T - параметр шаблона 
class Vector
{
public:
	Vector();
	Vector(int n) { data = new T[n]; size = n; }; // Конструктор класса vector 
	~Vector() // Деструктор 
	{
		delete[] data;
	}

	T *data; // Начало одномерного массива 
	int size; // разрядность вектора
	
	int &operator +=(int s)//функция-член
	{
		
		size++;
		return size;
	}
	
	friend Vector operator + (Vector &R, int s)//дружественная
	{				R.size++;		return R;	}

};
