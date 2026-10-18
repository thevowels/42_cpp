/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:57:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/10/18 17:31:01 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include <exception>

int main(void)
{

	Bureaucrat *b = new Bureaucrat();
	Form	*f = new Form();

	try{
		b->signForm(*f);
	} catch (std::exception & e)
	{
		std::cout <<"Catched Exception "<<  e.what() << std::endl;

	}

	Bureaucrat *b1 = new Bureaucrat("B1", 3);

	Form	*f1 = new Form(5,4,"Form?");
	try{
		b1->signForm(*f1);

	} catch (std::exception & e)
	{
		std::cout <<"Catched Exception "<<  e.what() << std::endl;

	}
	std::cout << b1;
	std::cout << f1;
	
	delete(b);
	delete(f);
	delete(f1);
	delete(b1);
	
}