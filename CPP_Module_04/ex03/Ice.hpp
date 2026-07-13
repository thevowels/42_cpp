/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:18:10 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/13 16:37:42 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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