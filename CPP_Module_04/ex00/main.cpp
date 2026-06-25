/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:35:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/25 16:37:44 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
int main(void)
{
  // const Animal animalOnStack;
  // std::cout << animalOnStack.getType() << std::endl;
  // animalOnStack.makeSound();
 
  // std::cout << "--------------***********-----------------" << std::endl;
  // const Animal *animalOnHeap = new Animal();
  // delete(animalOnHeap);
  
  // //std::cout << "--------------***********-----------------" << std::endl;
  // //const Animal catOnStack;
  // //catOnStack.makeSound();
  
  // std::cout << "--------------***********-----------------" << std::endl;
  // const Animal *catOnHeap = new Cat();
  // catOnHeap->makeSound();
  // std::cout << catOnHeap->getType() << std::endl;
  // delete(catOnHeap);

  // //std::cout << "--------------***********-----------------" << std::endl;
  // //const Dog dogOnStack;
  // //dogOnStack.makeSound();

  // std::cout << "--------------***********-----------------" << std::endl; 
  // const Animal *dogOnHeap = new Dog();
  // std::cout << dogOnHeap->getType() << std::endl;
  // dogOnHeap->makeSound();
  // delete(dogOnHeap);


  // const WrongAnimal *wrongAnimalOnHeap = new WrongAnimal();
  // std::cout << wrongAnimalOnHeap->getType() << std::endl;
  // wrongAnimalOnHeap->makeSound();
  // delete(wrongAnimalOnHeap);

  std::cout << "--------------***********-----------------" << std::endl;
  const WrongAnimal *wrongCatOnHeap = new WrongCat();
  std::cout << wrongCatOnHeap->getType() << std::endl;
  wrongCatOnHeap->makeSound();
  delete(wrongCatOnHeap);

  std::cout << "--------------***********-----------------" << std::endl;
  const WrongCat *wrongCatOnHeap2 = new WrongCat();
  std::cout << wrongCatOnHeap2->getType() << std::endl;
  wrongCatOnHeap2->makeSound();
  delete(wrongCatOnHeap2);
  
}



