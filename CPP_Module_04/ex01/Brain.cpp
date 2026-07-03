/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:42:57 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 16:49:50 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain Default constructor called! " << std::endl;
}

Brain::Brain(const Brain& other)
{
  std::cout << "Brain Copy Constructor called! " << std::endl;
  for(int i = 0; i < 100; i++)
    this->_ideas[i] = other._ideas[i];
}

Brain& Brain::operator =(const Brain& other)
{
  std::cout << "Brain Copy assignment Operator Called." << std::endl;
  if(this != &other)
  {
    for(int i = 0; i < 100; i++)
      this->_ideas[i] = other._ideas[i];
  }
  return *this;
};

Brain::~Brain()
{
  std::cout << "Brain Destructor Called." << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
  if (index >= 0 && index < 100)
    this->_ideas[index] = idea;
  else
    std::cout << "Index out of bounds!" << std::endl;
}

std::string Brain::getIdea(int index) const
{
  if (index >= 0 && index < 100)
    return this->_ideas[index];
  else
  {
    std::cout << "Index out of bounds!" << std::endl;
    return "";
  }
}