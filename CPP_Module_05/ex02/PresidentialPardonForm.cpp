#pragma once

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5,
	"PresidentialPardonForm"), _target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(25,
	5, "PresidentialPardonForm"), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(25,
	5, "PresidentialPardonForm"), _target(other._target)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		this->~PresidentialPardonForm();
		::new (this) PresidentialPardonForm(other);
	}
	return (*this);
}