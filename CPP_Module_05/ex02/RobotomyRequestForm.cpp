#include "RobotomyRequestForm.hpp"

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

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
	{
		this->~RobotomyRequestForm();
		::new (this) RobotomyRequestForm(other);
	}
	return (*this);
}