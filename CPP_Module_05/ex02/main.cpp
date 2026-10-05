/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:57:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/10/06 05:24:01 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>
#include <exception>
#include <unistd.h>

int main(void)
{
	Bureaucrat *b = new Bureaucrat("BBB", 42);

	AForm *a = new PresidentialPardonForm("Prrrrrrr");

	b->signForm(*a);
	b->executeForm(*a);
}