/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:50:29 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 16:59:50 by aphyo-ht         ###   ########.fr       */
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
  Animal* arr[10];
  
  for(int i = 0; i < 10; i++)
  {
    if(i < 5)
      arr[i] = new Dog();
    else
      arr[i] = new Cat();
  }

  lineBreak();
  lineBreak();
  dynamic_cast<Dog*>(arr[0])->setIdea(0, "This is Dog 0's idea 0");
  Dog* newdog = new Dog(*dynamic_cast<const Dog*>(arr[0]));
  newdog->setIdea(0, "This is newDog's idea 0");
  std::cout << "Dog 0's idea 0: " << dynamic_cast<const Dog*>(arr[0])->getIdea(0) << std::endl;
  std::cout << "newDog's idea 0: " << newdog->getIdea(0)<< std::endl;
  lineBreak();
  lineBreak();

  delete(newdog);
  for(int i = 0; i < 10; i++)
    delete arr[i];

}
