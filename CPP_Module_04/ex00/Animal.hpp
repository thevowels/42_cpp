/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:43:50 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/30 08:53:50 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &other);
        virtual ~Animal();
        Animal &operator=(const Animal &other);
        virtual void makeSound() const;
        std::string getType() const;

    protected:
        std::string _type;
};