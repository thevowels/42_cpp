/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:05:34 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 07:10:02 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("default") {
}

Weapon::Weapon(const std::string& type) : _type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
    return _type;
}

void Weapon::setType(const std::string& type) {
    _type = type;
}

