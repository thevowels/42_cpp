#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);

	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());

	if(!file.is_open())
	{
		std::cerr<< "Cannot open file : " << filename <<  std::endl;
		return;
	}
	file << "  _.._\n"
		 << " (.__.)\n"
		 << "   ||\n";
	file.close();

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
