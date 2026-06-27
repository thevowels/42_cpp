/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:11:56 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/27 23:56:17 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
  this->_type = "Cat";
  this->_brain = new Brain();
  std::cout << "Cat Default constructor Called." << std::endl;
}

Cat::Cat(const Cat& other): Animal()
{
  std::cout << "Cat Copy constructor called!" << std::endl;
  *this = other;
}

Cat &Cat::operator=(const Cat& other)
{
  if(this == &other)
  {
    return *this;
  }
  this->_type = other._type;
  this->_brain = new Brain();
  for(int i = 0 ;i < 100; i++)
  {
	this->_brain[i] = other._brain[i];
  }

  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat Deconstructor called. " << std::endl;
  delete(_brain);
}

void Cat::makeSound(void) const {
  std::cout << "Cat says: Meow . "<< std::endl;
}
