/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:53:04 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/19 21:11:39 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main(void)
{

	Point A, B, C, D;
	
	A = Point(1,2);

	// having segFaults in Fixed
	// B = Point(2,0);
	// C = Point(0,3);
	// D = Point(1,1);

	// std::cout << "A " << A;
	// std::cout << "B " << B;
	// std::cout << "C " << C;
	// std::cout << "D " << D;
	
	// Point::printBool( bsp(A,B,C,D));

	// Point::printBool( bsp(A,B, D,C));

	// Point::printBool( bsp(A,B,A,D));

	// Point::printBool( bsp(A,B,C,A));

	
}
