/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:30:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/17 20:53:55 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <iostream>

class Fixed
{
  public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed &operator=(const Fixed& other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	// ex01
	Fixed(const int value);
	Fixed(const float value);
	float toFloat(void) const;
	int toInt(void) const;
	// ex02
	// The 6 comparison operators: >, <, >=, <=, ==, and !=
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	// The 4 arithmetic operators: +, -, *, and /
	Fixed operator-(const Fixed &other) const;
	Fixed operator+(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	// The 4 increment/decrement
	// Pre Increment
	Fixed &operator ++ ();
	Fixed &operator--();

	// Post Increment
	Fixed operator++(int);
	Fixed operator--(int);

	//min max
	static Fixed& min(Fixed& first, Fixed& second);
	static Fixed& max(Fixed& first, Fixed& second);

	static const Fixed& min(const Fixed& first, const Fixed& second);
	static const Fixed& max(const Fixed& first, const Fixed& second);

  private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);