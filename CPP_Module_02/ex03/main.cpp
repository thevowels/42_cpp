/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:53:04 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/19 22:54:41 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main(void)
{

	Point A, B, C, D;
	
	// A = Point(1,2);
	B = Point(2,0);
	C = Point(0,3);
	D = Point(1,1);
	
	Point::printBool( bsp(A,B,C,D));
	std::cout << std::endl;

	Point::printBool( bsp(A,B, D,C));
	std::cout << std::endl;

	Point::printBool( bsp(A,B,A,D));
	std::cout << std::endl;

	Point::printBool( bsp(A,B,C,A));
	std::cout << std::endl;

	
}
