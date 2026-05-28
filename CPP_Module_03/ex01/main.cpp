/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:07:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/29 02:53:10 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){

	//ScavTrap constructor
	ScavTrap E("Ellen");

	// ScavTrap copy Cnstructor
	ScavTrap A(E);

	// ScavTrap assignment operator
	ScavTrap K = A;

	ClapTrap C("Clapper");

	C.attack("Enemy");
	A.attack("John Doe");
	E.guardGate();
    
    return (0);
}