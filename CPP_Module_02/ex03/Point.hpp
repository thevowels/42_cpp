/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:45:55 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/17 21:22:38 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
  public:
	Point();
	Point(const float a, const float b);
	Point(const Point &p);
	Point &operator=(const Point &p);
	~Point();

  private:
	const Fixed _x;
	const Fixed _y;
};

std::ostream &operator<<(std::ostream &o, const Point &p)
{
	o << "todo";
	return o;
}