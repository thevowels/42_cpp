/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:31:02 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/13 16:36:14 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Node.hpp"
#include <iostream>

class Character: public ICharacter
{
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &other);
        virtual ~Character();
        Character &operator=(const Character &other);
        virtual std::string const &getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int index);
        virtual void use(int index, ICharacter &target);
        AMateria** getEmptySlot();

    private:
        std::string _name;
        AMateria* _inventory[4];
        Node* _trash;
};