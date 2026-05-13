/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 07:13:30 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 07:29:52 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
    private:
        std::string _name;
        Weapon& _weapon;
};

#endif