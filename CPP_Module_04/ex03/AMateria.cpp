/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:18:58 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/13 15:33:15 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::AMateria(const AMateria & other)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const &other)
{
    std::cout << "AMateria copy assignment operator called" << std::endl;
    this->_type = other._type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}