/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:56:49 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/30 13:56:55 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

#include <iostream>

class Cat: public Animal
{
  public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat &other);
    ~Cat();
    virtual void makeSound() const;
};
