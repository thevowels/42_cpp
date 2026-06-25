/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:11:56 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/25 10:11:57 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
  this->_type = "Cat";
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

  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat Deconstructor called. " << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "Cat says: Meow . "<< std::endl;
}
