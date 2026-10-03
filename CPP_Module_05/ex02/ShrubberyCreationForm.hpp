#pragma once

#include <string>
#include "AForm.hpp"

// Default constructor 1
// Copy Constructor 
// Copy Assignment Operator 
// Destructor 1

class ShrubberyCreationForm: public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=(const ShrubberyCreationForm & other );

};