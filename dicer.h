enum { max_count = 15 };
typedef int T;

struct dicer
{
	T items[max_count];
	int count;
	dicer() : count(0) {}
};
