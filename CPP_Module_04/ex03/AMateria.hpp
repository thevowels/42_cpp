/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:18:50 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/09 14:17:29 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
class AMateria
{
    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &other);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &other);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
    protected:
        std::string _type;
    private:
        AMateria();
};