/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:12:03 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/25 10:12:04 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
  this->_type = "Dog";
  std::cout << "Dog Default Constructor called!" << std::endl;
}

Dog::Dog(const Dog& other): Animal()
{
  std::cout << "Dog Copy constructor called" << std::endl;
  *this = other;
}

Dog::~Dog(){
  std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
  std::cout << "Dog Copy assignment opperator called." << std::endl;
  if(this == &other)
    return *this;
  this->_type = other._type;
  return *this;
}

void  Dog::makeSound(void) const {
  std::cout << "Dog says: Woof Woof" << std::endl;
}
