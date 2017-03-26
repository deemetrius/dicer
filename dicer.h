enum { max_count = 15 };
typedef int T;

class dicer
{
public:
	T items[max_count];
	int count;
	// конструктор
	dicer() : count(0) {}
	// добавить один элемент в массив, если еть мето
	bool append(T item)
	{
		bool result = count < max_count;
		if( result )
		{
			this->items[this->count] = item;
			this->count += 1;
		}
		return result;
	}
	// очистка
	void clear()
	{
		// вернуть чтоб как в конструкторе
	}
};
