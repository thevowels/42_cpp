/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 00:16:54 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 15:57:41 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <iostream>

int main(){
	PhoneBook pb = PhoneBook();

	std::string input;
	while(true)
	{
		if(!PhoneBook::getInput("Phonebook - ADD | SEARCH | EXIT",input))
		{
			return (1);
		}
		if(input == "ADD")
		{
			if(!pb.addContact())
			{
				return (1);
			}
		}else if(input == "SEARCH")
		{
			if(!pb.searchFunc())
			{
				return (1);
			}
		}else if(input == "EXIT")
		{
			return (0);
		}else{
			std::cout << "Accept only  | ADD | SEARCH | EXIT |" << std::endl;
		}
	}
	return (0);
}