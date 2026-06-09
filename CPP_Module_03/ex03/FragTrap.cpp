/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:58:45 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/09 09:19:13 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	std::cout << "FragTrap default constructor." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	std::cout << "FragTrap Default constructor with name as argument. for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other){
	std::cout << "FragTrap copy constructor called: "<< other._name << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	std::cout << "FragTrap operator = overload Called: "<< other._name << std::endl; 
	if(this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor for " << this->_name << " called!" << std::endl;
}

void FragTrap::highFiveGuys(){
	std::cout << "Hello lets do high fives!!!" << std::endl;
}