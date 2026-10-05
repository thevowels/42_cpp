#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

Form::Form(): _sGrade(42), _eGrade(42),
                _name("Default"), _isSigned(false){
    std::cout << "Form Default constructor" << std::endl;
}

Form::Form(int sGrade, int eGrade, std::string name): _sGrade(sGrade), _eGrade(eGrade),
            _name(name), _isSigned(false){
    if(sGrade < 1 || eGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if(sGrade > 150 || eGrade > 150)
		throw Form::GradeTooLowException();
    std::cout << "Form Constructor" << std::endl;
}

Form::Form(const Form &other): _sGrade(other._sGrade), _eGrade(other._eGrade),
                                _name(other._name), _isSigned(other._isSigned){
    std::cout << "Form Copy Constructor" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Destructor" << std::endl;
}

Form& Form::operator=(const Form &other){
    if(this != &other)
    {
        this->~Form();
        ::new (this) Form(other);
    }
    return *this;
}

void Form::beSigned(const Bureaucrat &other){
    if(this->_eGrade >= other.getGrade())
    {
        this->_isSigned = true;
    }
    else
        throw Form::GradeTooLowException();
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getIsSigned() const
{
    return this->_isSigned;
}

int Form::getSGrade() const
{
    return this->_sGrade;
}

int Form::getEGrade() const
{
    return this->_eGrade;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return "Form Exception: Grade Too Low";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return "Form Exception: Grade Too High";
}

std::ostream& operator<<(std::ostream& o, const Form* f)
{
    o << f->getName() << " " << f->getIsSigned() << " " << f->getSGrade() << " " << f->getEGrade() <<  std::endl;
    return (o);
}