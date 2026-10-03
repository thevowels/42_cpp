/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:57:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/10/03 22:54:54 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <iostream>
#include <exception>

int main(void)
{

	Bureaucrat *b = new Bureaucrat();
	AForm	*f = new AForm();

	b->signForm(*f);

	Bureaucrat *b1 = new Bureaucrat("B1", 3);

	AForm	*f1 = new AForm(5,4,"AForm?");
	b1->signForm(*f1);

	std::cout << b1;
	std::cout << f1;
	
	delete(b);
	delete(f);
	delete(f1);
	delete(b1);
	
}