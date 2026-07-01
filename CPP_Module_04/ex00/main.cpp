/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:50:29 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/01 10:48:01 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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
  lineBreak("Creating Animal Instance");
	const Animal	*meta = new Animal();
  std::cout << meta->getType() << " " << std::endl;
  meta->makeSound();
  lineBreak();

  lineBreak("Creating Animal with type specified");
  const Animal	*meta2 = new Animal("Custom Animal");
  std::cout << meta2->getType() << " " << std::endl;
  meta2->makeSound();
  lineBreak();

  lineBreak("Creating Animal with copy constructor");
  Animal	*meta3 = new Animal(*meta2);
  std::cout << meta3->getType() << " " << std::endl;
  meta3->makeSound();
  lineBreak();

  lineBreak("Checking Animal copy assignment operator");
  *meta3 = *meta;
  std::cout << meta3->getType() << " " << std::endl;
  meta3->makeSound();
  lineBreak();

  std::cout <<"Meta 3 :" << meta3 << std::endl;
  std::cout <<"Meta 2 :" << meta2 << std::endl;
  std::cout <<"Meta   :" <<  meta << std::endl;

  lineBreak("Deleting Animal Instances");
  delete meta;
  delete meta2;
  delete meta3;

  lineBreak("Creating Dog Instance");
  const Animal	*dog = new Dog();
  std::cout << dog->getType() << " " << std::endl;
  dog->makeSound();
  std::cout <<"Dog 1 :" << dog << std::endl;
  lineBreak();

  lineBreak("Testing Dog copy constructor");
  Dog stackdog;
  const Dog *dog2 = new Dog(stackdog);
  std::cout << dog2->getType() << " " << std::endl;
  dog2->makeSound();
  std::cout <<"Dog 2 :" << dog2 << std::endl;
  lineBreak();

  lineBreak("Testing Dog copy assignment operator");
  Dog *dog3 = new Dog();
  *dog3 = *dog2;
  std::cout << dog3->getType() << " " << std::endl;
  dog3->makeSound();
  std::cout <<"Dog 3 :" << dog3 << std::endl;
  lineBreak();

  lineBreak("Deleting Dog Instances");
  delete dog;
  delete dog2;
  delete dog3;

  lineBreak();
  lineBreak("Creating Cat Instance");
  const Animal	*cat = new Cat();
  std::cout << cat->getType() << " " << std::endl;
  cat->makeSound();
  std::cout <<"Cat 1 :" << cat << std::endl;
  lineBreak();


  lineBreak("Testing Cat copy constructor");
  Cat stackcat;
  const Cat *cat2 = new Cat(stackcat);
  std::cout << cat2->getType() << " " << std::endl;
  cat2->makeSound();
  std::cout <<"Cat 2 :" << cat2 << std::endl;
  lineBreak();

  lineBreak("Testing Cat copy assignment operator");
  Cat *cat3 = new Cat();
  *cat3 = stackcat;
  std::cout << cat3->getType() << " " << std::endl;
  cat3->makeSound();
  std::cout <<"Cat 3 :" << cat3 << std::endl;
  lineBreak();

  lineBreak("Deleting Cat Instances");
  delete cat;
  delete cat2;
  delete cat3;

  lineBreak();
  lineBreak("Testing overriding non Virtual function");

  lineBreak("Creating an WrongCat Instance");
  const WrongAnimal	*wrongcat = new WrongCat();
  std::cout << wrongcat->getType() << " " << std::endl;
  wrongcat->makeSound();
  std::cout <<"WrongCat 1 :" << wrongcat << std::endl;
  lineBreak(); 

  lineBreak("Deleting WrongCat Instance");
  delete wrongcat;
  return (0);
}
