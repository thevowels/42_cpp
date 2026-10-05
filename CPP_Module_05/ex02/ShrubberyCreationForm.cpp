#include "ShrubberyCreationForm.hpp"
#include <iostream>


ShrubberyCreationForm::ShrubberyCreationForm(): AForm(145,137,"ShrubberyCreationForm") ,_target("Shrubeery Default Target"){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(145,137,"ShrubberyCreationForm"), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	AForm(other.getSGrade(), other.getEGrade(), other.getName()), _target(other._target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other )
{
	if(this != &other)
	{
		this->~ShrubberyCreationForm();
		::new  (this) ShrubberyCreationForm(other);
	}
	return *this;
}
