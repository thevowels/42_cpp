/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:58:45 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/29 02:53:44 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	std::cout << "Scavtrap default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	std::cout << "Scavtrap Default constructor with name as argument. for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other){
	std::cout << "ScavTrap copy constructor called: "<< other._name << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	std::cout << "ScavTrap operator = overload Called: "<< other._name << std::endl; 
	if(this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor for " << this->_name << " called!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	std::cout << "ScavTrap Attack to " << target << "with " << this->_dmg << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate Keeper Mode!" << std::endl;
}

