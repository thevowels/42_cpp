/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:35:36 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/25 09:35:45 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("Untouched")
{
  std::cout << "Animal default constructor Called." << std::endl;
}

Animal::Animal(const Animal& copy)
{
  *this = copy;
  std::cout << "Animal Copy Constructor Called." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
  std::cout << "Animal Assignment operator called." << std::endl;
  if(this == &other)
    return *this;
  
  this->_type = other._type;
  return *this;
}

Animal::~Animal()
{
  std::cout << "Animal Destructor called." << std::endl;
}

void Animal::makeSound(void) const
{
  std::cout << "Animal abstract sound." << std::endl;
}

std::string Animal::getType(void) const
{
  return this->_type;
}
