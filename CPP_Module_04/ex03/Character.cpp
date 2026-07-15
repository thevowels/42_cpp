/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:31:04 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/15 18:02:30 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::init()
{
    for (int i = 0; i < 4; i++)
    _inventory[i] = NULL;

}

Character::Character(): _name("Default") , _trash(new Node)
{
    init();
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name): _name(name), _trash(new Node)
{
    std::cout << "Character parameterized constructor called" << std::endl;
    init();   
}

Character::Character(const Character &other): _name(other._name), _trash(new Node)
{
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    delete(_trash);
}

Character& Character::operator=(const Character &other)
{
    // Todo not finish yet ?
    if(this == &other)
        return *this;
    std::cout << "Assignment Operator overload Character!" << std::endl;
    _name = other._name;
    delete _trash;
    this->_trash = new Node();
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
        _inventory[i] = other._inventory[i]->clone();
    }
    return (*this);
}

std::string  const &Character::getName() const 
{        
    return this->_name;
}

void Character::equip(AMateria *m)
{
    if(getEmptySlot())
        *(getEmptySlot()) = m;
    else
    {
        _trash->push(m);
        std::cout << "All Materia Slots are full! " << std::endl;
    }
}

void Character::unequip(int index)
{
    if(index <0 || index >3 ||_inventory[index] == NULL)
    {
        std::cout << "Unequip operation is invalid for this index."<< std::endl;
        return;
    }
    (*_trash).push(_inventory[index]);
    _inventory[index] = NULL;
}

void Character::use(int index, ICharacter &target)
{
    if(index >= 0 && index < 4 && _inventory[index] != NULL)
        _inventory[index]->use(target);
    else
        std::cout << "Cannot use Materia on that index" << std::endl;
}

AMateria** Character::getEmptySlot()
{
    for(int i = 0; i < 4; i++)
    {
        if(_inventory[i] == NULL)
            return &_inventory[i];
    }
    return NULL;
}
