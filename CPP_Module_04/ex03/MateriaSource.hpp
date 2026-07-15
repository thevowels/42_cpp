/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:55:45 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/15 18:10:41 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        virtual ~MateriaSource();
        MateriaSource& operator=(MateriaSource& other);
        virtual void learnMateria(AMateria *);
        virtual AMateria* createMateria(std::string const& type);
        
    private:
        AMateria* _templates[4];
        int _current_index;
        void init();
        AMateria* findFirst(std::string const& type);
};