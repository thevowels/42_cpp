/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:07:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/09 09:19:35 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

	//FragTrap constructor
	FragTrap E("Ellen");

	// FragTrap copy Cnstructor
	FragTrap A(E);

	// FragTrap assignment operator
	FragTrap K = A;

	ClapTrap C("Clapper");

	ScavTrap S("Tyle");

	C.attack("Enemy");
	A.attack("John Doe");
	E.highFiveGuys();
    
    return (0);
}