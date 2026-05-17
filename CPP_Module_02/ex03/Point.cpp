/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:58:18 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/17 21:21:05 by aphyo-ht         ###   ########.fr       */
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