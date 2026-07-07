/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:47:03 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 17:10:10 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->_type = other._type;
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog - Woof!" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->_brain->setIdea(index, idea);
    else
        std::cout << "Index out of bounds!" << std::endl;
}

std::string Dog::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return this->_brain->getIdea(index);
    else
    {
        std::cout << "Index out of bounds!" << std::endl;
        return "";
    }
}