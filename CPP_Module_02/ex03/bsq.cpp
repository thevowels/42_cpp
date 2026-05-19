/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 00:20:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/19 22:53:09 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc_area = Point::getArea(a, b, c);

	Fixed abp_area = Point::getArea(a, b, point);
	Fixed acp_area = Point::getArea(a, c, point);
	Fixed bcp_area = Point::getArea(b, c, point);

	std::cout << a << std::endl << b << std::endl << c << std::endl << point << std::endl;

	if (abc_area == 0)
	{
		std::cout << "Points A, B , C are on a single line.	";
		return (false);
	}
	if (abp_area == 0 || acp_area == 0 || bcp_area == 0)
	{
		std::cout << "Point is on the edge of the rectangle.	";
		return (false);
	}
	float diff = (abc_area - (abp_area + acp_area + bcp_area)).toFloat();

	if (diff < 0)
		diff *= -1;

	if (diff > 0.0039)
	{
		std::cout << "Point is outside of the rectangle.	";
		return (false);
	}
	std::cout << "Point is inside the rectangle	";
	return (true);
}