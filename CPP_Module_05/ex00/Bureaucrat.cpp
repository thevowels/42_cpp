/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:57:38 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/09/25 00:08:27 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <exception>

Bureaucrat::Bureaucrat(): _name("Default") ,_grade(150){
	std::cout << "Default Constructor for Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name){
	std::cout << "Creating Bureaucrat with name: " << name << " & grade : " << grade << std::endl;

	if(grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	Bureaucrat(other.getName(),other.getGrade());
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor  called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & other)
{
	std::cout << "Bureaucrat copy assignment operator" << std::endl;
	if(this == &other)
		return *this;
	this->_name = other.getName();
	this->_grade = other.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::promote(){
	if(this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::demote(){
	if(this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw(){
	return "Grade Too High";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw(){
	return "Grade Too Low";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat* bb)
{
	o << bb->getName() << ", bureaucrat grade " << bb->getGrade() << std::endl;
	return (o);
}