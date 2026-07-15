/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:18:10 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/15 13:40:35 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice:public AMateria
{
    public:
        Ice();
        Ice(const Ice &other);
        virtual ~Ice();
        Ice &operator=(const Ice &other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};