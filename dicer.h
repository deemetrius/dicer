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
		// написать проверку на свободное место (max_count и count)
		this->items[this->count] = item;
		this->count += 1;
		return true; // если успешно добавили тогда вернёт true // если нет места тогда false
	}
	// очистка
	void clear()
	{}
};
