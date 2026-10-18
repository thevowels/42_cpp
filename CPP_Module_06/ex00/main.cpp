#include <iostream>
#include "ScalarConverter.hpp"
#include <iomanip>

int main(int argc, char** argv)
{
	(void)argc;
	(void)argv;


	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
	}
	return (0);
}

