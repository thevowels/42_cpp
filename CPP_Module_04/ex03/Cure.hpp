/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:23:52 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/13 16:36:51 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure &other);
        virtual ~Cure();
        Cure &operator=(const Cure &other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};