/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:07:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/27 11:47:03 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){

    // Constructor with name
    ClapTrap A("Alex");
    A.attack("John Doe");
    A.takeDamage(5);
    A.beRepaired(3);

    // Copy Constructor
    ClapTrap B(A);
    B.attack("John Doe");
    B.takeDamage(5);
    B.beRepaired(3);

    // copy assignment operator
    ClapTrap C = A;
    C.attack("John Doe");
    C.takeDamage(5);
    C.beRepaired(3);

    // ClapTrap on Heap
    ClapTrap *D = new ClapTrap("Don");
    D->attack("John Doe");
    D->takeDamage(5);
    D->beRepaired(3);
    delete(D);

    // Defalut constructor with empty argument
    // ClapTrap E;

    
    return (0);
}