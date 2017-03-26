#include <iostream>
#include "dicer.h"

void show_all(dicer & d)
{
	if( d.count )
	{
		/* auto end = d.items + d.count;
		for(auto h= d.items; h != end; ++h)
		{
			std::cout << (*h) << " ";
		} */
		for( auto it : d )
		{
			std::cout << it << " ";
		}
	} else {
		std::cout << "empty";
	}
	std::cout << std::endl;
}

int main()
{
	dicer d;
	d.append(4);
	d.append(2);
	show_all(d);
	
	return 0;
}
