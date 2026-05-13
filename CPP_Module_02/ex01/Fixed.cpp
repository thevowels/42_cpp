/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 14:07:21 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 14:23:31 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed() : _fixedPointValue(0)
{
}

Fixed::Fixed(int const value)
{
    _fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(float const value)
{
    _fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    _fixedPointValue = other._fixedPointValue;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}