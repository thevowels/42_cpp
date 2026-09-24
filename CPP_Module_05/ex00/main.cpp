/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:57:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/09/25 00:14:00 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <exception>

int main(void)
{
	// Testing of default constructor
	Bureaucrat *dc = new Bureaucrat();
	std::cout << dc;

	Bureaucrat *c1 = new  Bureaucrat("C1",42);
	std::cout << c1;

	Bureaucrat *e1;
	try{
		e1 = new Bureaucrat("E1", 0);
		std::cout << e1;
	}catch(std::exception &e)
	{
		std::cout <<"Catched Exception "<<  e.what() << std::endl;
	}

	try {
		e1 = new Bureaucrat("E1", 151);
		std::cout << e1;
	}catch (std::exception &e)
	{
		std::cout << "Catched Exception " << e.what() << std::endl;
	}
	e1 = new Bureaucrat("E1", 1);
	try{
		e1->promote();
	}catch(std::exception &e)
	{
		std::cout << "Catched Exception " << e.what() << std::endl;
	}
	

	// delete(dc);

}