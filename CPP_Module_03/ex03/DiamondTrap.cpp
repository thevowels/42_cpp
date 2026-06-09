/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 03:03:00 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/09 09:37:00 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Dummy_clap_trap")
{
	this->_name = "Dummy";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_dmg = FragTrap::_dmg;
	std::cout << "Diamond Trap Default constructor without argument." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_dmg = FragTrap::_dmg;
	std::cout << "Diamond Trap constructor with name argument." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
	FragTrap(other), ScavTrap(other)
{
	this->_name = other._name;
	this->_hp = other._hp;
	this->_ep = other._ep;
	this->_dmg = other._dmg;
	std::cout << "Diamond Trap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Trap destructor called. for " << this->_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	std::cout << "Diamond Trap copy assignment operator called" << std::endl;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}