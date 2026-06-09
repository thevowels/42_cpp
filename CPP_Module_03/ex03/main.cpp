/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:07:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/09 09:28:56 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a;
	std::cout << "---------------A  Default Constructor Finish--------------" << std::endl;
	DiamondTrap b("Billy");
	std::cout << "---------------B Constructor Finish--------------" << std::endl;
	DiamondTrap c(a);
	std::cout << "---------------C Copy Constructor Finish--------------" << std::endl;
	DiamondTrap d = b;
	std::cout << "---------------D Copy Assignment Finish--------------" << std::endl;

	a.whoAmI();
	a.attack("John Doe");
	std::cout << "-----------------------------" << std::endl;
	b.whoAmI();
	b.attack("Clappy");
	std::cout << "-----------------------------" << std::endl;
	c.whoAmI();
	c.attack("Donny");
	std::cout << "-----------------------------" << std::endl;
	d.whoAmI();
	d.attack("Harry");
	std::cout << "-----------------------------" << std::endl;
	return (0);
}