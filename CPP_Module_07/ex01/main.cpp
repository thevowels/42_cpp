#include "iter.hpp"
#include <iostream>

template <typename T>
void printout(T a)
{
	std::cout << a << std::endl;
}
template <typename T>
void twice(T&  a)
{
	a = 2 * a;
}
int main(void)
{

	int abc[]= {1,2,3,4,5};

	iter(abc, 5, twice<int>);
	iter(abc, 5, printout<int>);

	float f[] = {1.1,2.3,3.14,42.0,1337};

	iter(f, 5,twice<float>);
	iter(f,5,printout<float>);
}