#include "Intern.hpp"

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

static AForm* ShrubberyFactory(const std::string& target){
	return new ShrubberyCreationForm(target);
}

static AForm* PresidentialPardonFactory(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

static AForm* RobotomyRequestFactory(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

Intern::Intern() {}

Intern::Intern(const Intern& other){
	(void) other;
}

Intern& Intern::operator=(const Intern& other)
{
	if(this != &other)
	{
		return (*this);
	}
	return (*this);
}

Intern::~Intern(){}


AForm* Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"presidential pardon","robotomy request","shrubbery creation"};

	AForm* (*creators[])(const std::string&) = {&PresidentialPardonFactory, &RobotomyRequestFactory, &ShrubberyFactory};

	for(int i = 0; i < 3; i++)
	{
		if(name == forms[i])
		{
			std::cout << "Intern creates " << name <<  std::endl;
			return creators[i](target);
		}
	}
	std::cerr<< "Intern do not know how to create" << name << "!" << std::endl;
	return (NULL);

}

std::ostream &operator<<(std::ostream &o, const Intern *ii)
{
	(void)ii;
	o << "Intern Intern" << std::endl;
	return (o);
}