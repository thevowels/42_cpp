#include <iostream>

#include "Array.hpp"

template <typename T>
void printArr(Array<T> &arr)
{
	unsigned int i = 0;
	std::cout << "######################"<< std::endl;
	while(i < arr.size())
	{
		std::cout << "index : " << i << " value : "<< arr[i] <<  std::endl;
		i++;
	}
	std::cout << "######################"<< std::endl;
}

int main(void)
{
	Array<int> arr1(5);
	printArr(arr1);
	Array<int> arr2(3);
	printArr(arr2);
	arr1[1] = 3;
	arr2 = arr1;
	printArr(arr2);

	Array<float> arr3(3);
	arr3[1]= 3.423;
	printArr(arr3);
	Array<double> arr4(10);
	printArr(arr4);
	std::cout << arr4.size() << std::endl;
	try{
		std::cout << arr4[42];
	}catch(std::exception e)
	{
		std::cout << "Got index out of bound exception" << std::endl;
	}
}

