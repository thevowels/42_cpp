/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:50:29 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 17:17:15 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void lineBreak(std::string str)
{
    std::cout << std::endl;
    std::cout << "\033[32m--------------------" << str << "--------------------\033[0m" << std::endl;
    std::cout << std::endl;
}

void lineBreak()
{
    std::cout << "\033[35m-----------------------------------------------------\033[0m" << std::endl;
}
int	main(void)
{
  lineBreak("Abstract Class Test");
  //Animal animal; // This line will cause a compilation error because Animal is an abstract class

  lineBreak("Polymorphism We are holding Animal pointers but they are actually Dog and Cat objects");
  Animal* dog = new Dog();
  Animal* cat = new Cat();
  lineBreak();
  dog->makeSound();
  cat->makeSound();
  lineBreak();
  lineBreak("Deleting Heap Objects");
  delete(dog);
  delete(cat);
  Cat c;
  Dog d;
  c.makeSound();
  d.makeSound();

  lineBreak("Deleting Objects on Stack");
}
