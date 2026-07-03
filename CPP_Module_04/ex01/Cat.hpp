/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 13:56:49 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 16:29:32 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>

class Cat: public Animal
{
  public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat &other);
    ~Cat();
    virtual void makeSound() const;
    void setIdea(int index, std::string idea);
    std::string getIdea(int index) const;
  private:
    Brain* _brain;
};
