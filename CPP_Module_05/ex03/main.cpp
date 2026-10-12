/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:57:32 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/10/12 22:36:34 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

#include <iostream>
#include <exception>
#include <unistd.h>

int main(void)
{
	Intern intern;
	AForm *form;

	form = intern.makeForm("abc","it wont work!");

	form = intern.makeForm("presidential pardon", "Blad");
	
	delete(form);
}