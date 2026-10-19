#pragma once


// Default constructor 1
// Copy Constructor 
// Copy Assignment Operator 1
// Destructor 1
#include <string>
#include <iostream>
#include <cmath> // check if cmath is allowed or not
#include <cstdlib>
#include <climits>
#include <iomanip>

enum e_type{
	TYPE_CHAR,
	TYPE_INT,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_PSEUDO,
	TYPE_INVALID
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& other);

	public:
		static void convert(const std::string& str);


};

