#pragma once

// Default constructor 1
// Copy Constructor 
// Copy Assignment Operator 1
// Destructor 1
#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	private:

	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
		Intern& operator=(const Intern& other);
		AForm* makeForm(std::string name, std::string target);
};
std::ostream& operator<<(std::ostream& o, const Intern* ii);