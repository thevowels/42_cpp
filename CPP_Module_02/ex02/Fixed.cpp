/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:43:17 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/17 20:06:38 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called  " << *this << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

/*
ex01

Fixed(const int value);
Fixed(const float value);
float	toFloat(void) const;
int		toInt(void) const;


*/

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called." << std::endl;
	this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called." << std::endl;
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

float Fixed::toFloat(void) const
{
	return ((static_cast<float>(this->_fixedPointValue))
		/ (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

// Ex 02

// Comparison Operators
bool Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

// Arithmetic Operations
Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// Pre Increment

Fixed &Fixed::operator++()
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->_fixedPointValue--;
	return (*this);
}

// Post Increment;
Fixed	Fixed::operator ++ (int) {
	Fixed	temp;

	temp._fixedPointValue = this->_fixedPointValue;
	this->_fixedPointValue++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp._fixedPointValue = this->_fixedPointValue;
	this->_fixedPointValue--;
	return (tmp);
}

// Min Max
Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first._fixedPointValue > second._fixedPointValue)
		return (second);
	return (first);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first._fixedPointValue < second._fixedPointValue)
		return (second);
	return (first);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first._fixedPointValue > second._fixedPointValue)
		return (second);
	return (first);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first._fixedPointValue < second._fixedPointValue)
		return (second);
	return (first);
}