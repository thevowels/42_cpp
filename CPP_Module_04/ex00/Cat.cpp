/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:56:52 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/01 10:10:48 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
  std::cout << "Cat Default constructor called! " << std::endl;
}

Cat::Cat(const Cat& other): Animal(other)
{
  std::cout << "Cat Copy Constructor called! " << std::endl;
}

Cat& Cat::operator =(const Cat& other)
{
  std::cout << "Cat Copy assignment Operator Called." << std::endl;
  if(this != &other)
    this->_type = other._type;
  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat Destructor Called." << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Cat: Meow!" << std::endl;
}
