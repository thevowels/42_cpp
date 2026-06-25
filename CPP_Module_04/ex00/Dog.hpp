/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 10:12:05 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/25 10:12:06 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
  public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog& operator=(const Dog& other);
    void makeSound(void) const;
};
