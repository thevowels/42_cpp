#include "easyfind.hpp"
#include <vector>
#include <iostream>

void printStuff(int i)
{
	std::cout << i << std::endl;
}

int main(void)
{
	int arr[] = {1,2,3,4,5};

	std::vector<int> v1(arr, arr+3);

	const std::vector<int> v2(arr, arr+5);


	std::cout << "Container v1 Values: " << std::endl;
	std::for_each(v1.begin(), v1.end(), printStuff);
	std::cout << "===========" << std::endl;
	for(int i = 0; i < 5; i++)
	{
		try{
			std::vector<int>::iterator i1 =   easyfind(v1,i);
			std::cout << "Found :" << *i1 << std::endl;
			(*i1) += 42;
		}
		catch(const NotFoundException& e){
			std::cout << e.what() << ", " << i << std::endl;
		}
	}
	std::cout << "After iteration, I modified data inside iteration" << std::endl;
	std::for_each(v1.begin(), v1.end(), printStuff);


	std::cout << "=========================" << std::endl;
	for(int i = 0; i < 3; i++)
	{
		try{
			std::vector<int>::const_iterator i1 =   easyfind(v2,i);
			std::cout << "Found :" << *i1 << std::endl;
			// gonna cause error if we uncomment as we are referencing to the cell of a constant vector.
			// *i1 += 42;
		}
		catch(const NotFoundException& e){
			std::cout << e.what() << ", " << i << std::endl;
		}
	}



}