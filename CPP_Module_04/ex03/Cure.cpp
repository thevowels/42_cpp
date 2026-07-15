/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:23:54 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/15 15:03:14 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called!" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Cure copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds. *" << std::endl;
}