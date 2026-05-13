/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:17:41 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 07:32:23 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& weapon): _name(name), _weapon(weapon){
}

HumanB::~HumanB(){}

void HumanB::attack(){
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
    _weapon = weapon;
}