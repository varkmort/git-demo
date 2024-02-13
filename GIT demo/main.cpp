#include <iostream>

#include "NewLib.h"

int main()
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << F00() << ' ' << F01(i) << '\n';
	}
	return 0;
}