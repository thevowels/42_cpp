#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm(72, 45,
	"RobotomyRequestForm"), _target("Default target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(72, 45,
	"RobotomyRequestForm"), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(72,
	45, other.getName()), _target(other._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);

	std::cout << "Buzzz" << std::endl;
	std::cout << "Buzzz" << std::endl;
	
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	if(std::rand() % 2 == 0)
	{
		std::cout << "Robotomized Sucessfully" << std::endl;
	}else
	{
		std::cout << "Robotomized Failed!" << std::endl;
	}
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		this->~RobotomyRequestForm();
		::new (this) RobotomyRequestForm(other);
	}
	return (*this);
}