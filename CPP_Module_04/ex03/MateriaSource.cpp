/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:55:42 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/15 18:24:49 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::init()
{
    for(int i = 0 ; i < 4; i++)
        _templates[i] = NULL;

}

MateriaSource::MateriaSource(): _current_index(0)
{
    init();
    std::cout << "materia Source Default constructor Called!" << std::endl;
    std::cout << "We Init templates with NULL here" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other) : _current_index(0)
{
    init();
    std::cout << "Materia source copy constructor. " << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if(other._templates[i])
            _templates[i] = other._templates[i]->clone();
    }
    
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        delete _templates[i];
    }
}

MateriaSource&  MateriaSource::operator=(MateriaSource& other)
{
    std::cout << "Materia Source assignment operator" << std::endl;
    if(this == &other)
        return *this;
    _current_index = other._current_index;
    for(int i = 0; i < 4; i++)
    {
        delete(_templates[i]);
        _templates[i] = other._templates[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    delete(_templates[_current_index]);
    _templates[_current_index] = m;
    _current_index = (_current_index + 1) % 4;
}

AMateria* MateriaSource::findFirst(std::string const& type)
{
    for(int i = 0; i < 4; i++)
    {
        if(_templates[i] && _templates[i]->getType() == type)
            return _templates[i]->clone();
    }
    return 0;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    return findFirst(type);
}