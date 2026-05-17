/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 00:20:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/18 00:38:54 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc_area = Point::getArea(a, b, c);

	Fixed abp_area = Point::getArea(a, b, point);
	Fixed acp_area = Point::getArea(a, c, point);
	Fixed bcp_area = Point::getArea(b, c, point);

	if(abc_area ==  0)
	{
		std::cout << "Points A, B , C are on a single line."<< std::endl;
		return false;
	}
	
	if( abp_area == 0 || acp_area == 0 || bcp_area == 0)
	{
		
	}
	
	
}