enum { max_count = 15 };
typedef int T;

class dicer
{
public:
	T items[max_count];
	int count;
	// конструктор
	dicer() : count(0) {}
	// добавить один элемент в массив
	bool append(T item)
	{
		// напиши инструкции
		return true; // если успешно добавили тогда вернёт true // если нет места тогда false
	}
	// очистка
	void clear()
	{}
};
