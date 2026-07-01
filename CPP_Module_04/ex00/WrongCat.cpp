/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:56:52 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/01 10:44:02 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
  std::cout << "WrongCat Default constructor called! " << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
  std::cout << "WrongCat Copy Constructor called! " << std::endl;
}

WrongCat& WrongCat::operator =(const WrongCat& other)
{
  std::cout << "WrongCat Copy assignment Operator Called." << std::endl;
  if(this != &other)
    this->_type = other._type;
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat Destructor Called." << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << "WrongCat: Meow!" << std::endl;
}
