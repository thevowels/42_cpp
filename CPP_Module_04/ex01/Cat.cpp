/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:56:52 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 16:59:16 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(NULL)
{
  std::cout << "Cat Default constructor called! " << std::endl;
  this->_brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other)
{
  std::cout << "Cat Copy Constructor called! " << std::endl;
  this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator =(const Cat& other)
{
  std::cout << "Cat Copy assignment Operator Called." << std::endl;
  if(this != &other)
  {
    this->_type = other._type;
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
  }
  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat Destructor Called." << std::endl;
  delete this->_brain;
}

void Cat::makeSound() const
{
  std::cout << "Cat: Meow!" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
  if (index >= 0 && index < 100)
    this->_brain->setIdea(index, idea);
  else
    std::cout << "Index out of bounds!" << std::endl;
}

std::string Cat::getIdea(int index) const
{
  if (index >= 0 && index < 100)
    return this->_brain->getIdea(index);
  else
  {
    std::cout << "Index out of bounds!" << std::endl;
    return "";
  }
}