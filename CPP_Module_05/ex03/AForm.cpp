#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

AForm::AForm(): _sGrade(42), _eGrade(42),
                _name("Default"), _isSigned(false){
    std::cout << "AForm Default constructor" << std::endl;
}

AForm::AForm(int sGrade, int eGrade, std::string name): _sGrade(sGrade), _eGrade(eGrade),
            _name(name), _isSigned(false){
    if(sGrade < 1 || eGrade < 1)
	{
		throw AForm::GradeTooLowException();
	}
	else if(sGrade > 150 || eGrade > 150)
		throw AForm::GradeTooHighException();
    std::cout << "AForm Constructor" << std::endl;
}

AForm::AForm(const AForm &other): _sGrade(other._sGrade), _eGrade(other._eGrade),
                                _name(other._name), _isSigned(other._isSigned){
    std::cout << "AForm Copy Constructor" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor" << std::endl;
}

// As abstract I can't reconstruct object. 
AForm& AForm::operator=(const AForm &other){
	(void) other;
    return *this;
}

void AForm::beSigned(const Bureaucrat &other){
    if(this->_sGrade <= other.getGrade())
    {
        this->_isSigned = true;
    }
    else
        throw AForm::GradeTooLowException();
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getIsSigned() const
{
    return this->_isSigned;
}

int AForm::getSGrade() const
{
    return this->_sGrade;
}

int AForm::getEGrade() const
{
    return this->_eGrade;
}
const char *AForm::GradeTooHighException::what(void) const throw()
{
	return "Form Exception: Grade Too High";
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return "Form Exception: Grade Too Low";
}

const char* AForm::FormNotSignedException::what(void) const throw()
{
	return "Form Exception: Form Not Signed!";
}

void AForm::execute(Bureaucrat const & executor) const
{
	if(!this->getIsSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() < this->getEGrade())
		throw Bureaucrat::GradeTooLowException();

}

std::ostream& operator<<(std::ostream& o, const AForm* f)
{
    o << f->getName() << " " << f->getIsSigned() << " " << f->getSGrade() << " " << f->getEGrade() <<  std::endl;
    return (o);
}