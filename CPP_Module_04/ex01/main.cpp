/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:35:31 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/27 23:54:20 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main(void)
{
 
	Animal *animals[50];

	for(int i = 0; i < 25; i++)
	{
		animals[i] = new Dog();
		animals[i + 25] = new Cat();
	}
  
		for(int i = 0; i < 25; i++)
	{
		delete(animals[i]);
		delete(animals[i + 25]);
	}

}	



