/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:12:00 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/25 10:12:00 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Cat: public Animal
{
  public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    ~Cat();
    void makeSound(void) const;
};
