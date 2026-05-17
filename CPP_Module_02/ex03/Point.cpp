/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:58:18 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/18 00:31:27 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float a, const float b) : _x(Fixed(a)), _y(Fixed(b))
{
}

Point::Point(const Point &p) : _x(p._x), _y(p._y)
{
}

Point &Point::operator=(const Point &p)
{
	if (this != &p)
	{
		*this = Point(p);
	}
	return (*this);
}

Point::~Point()
{
}

Fixed Point::getArea(Point a, Point b, Point c)
{
	Fixed area = ((a._x.toFloat() * (b._y.toFloat() - c._y.toFloat()))
			+ (b._x.toFloat() * (c._y.toFloat() - a._y.toFloat()))
			+ (c._x.toFloat() * (a._y.toFloat() - b._y.toFloat()))) / 2;
	
	if(area >= 0)
		return (area);
	return (area * -1);
}