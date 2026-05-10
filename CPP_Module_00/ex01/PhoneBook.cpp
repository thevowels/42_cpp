/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 00:19:25 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 17:07:32 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

PhoneBook::PhoneBook() : _currentIndex(0), _isfull(false){};

PhoneBook::~PhoneBook(){};

bool PhoneBook::addContact()
{
	std::string inputs[5];
	std::string input_Labels[5] = {"First Name", "Last Name", "Nick Name",
		"Phone Number", "Darkest Secret"};
	for (int i = 0; i < 5; ++i)
	{
		if (!getInput(input_Labels[i], inputs[i]))
		{
			return (false);
		}
	}
	_contacts[_currentIndex] = Contact(inputs);
	this->incIndex();
	return (true);
}
void PhoneBook::incIndex()
{
	if (_currentIndex == MAX_CONTACTS - 1)
	{
		_isfull = true;
	}
	_currentIndex = (_currentIndex + 1) % MAX_CONTACTS;
}
#include <cstdlib>
// bool PhoneBook::isInputValid(std::string str)
// {
// 	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
// 	{
// 		if (isgraph((unsigned char)*it))
// 		{
// 			return (true);
// 		}
// 	}
// 	return (false);
// }

bool PhoneBook::isInputValid(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); ++i)
	{
		if (isgraph((unsigned char)str[i]))
		{
			return (true);
		}
	}
	return (false);
}



bool PhoneBook::getInput(std::string label, std::string &str)
{
	while (true)
	{
		std::cout << label << " : ";
		if (!std::getline(std::cin, str))
		{
			std::cout << std::endl;
			return (false);
		}
		if (PhoneBook::isInputValid(str))
		{
			return (true);
		}
		std::cout << "Please try different input" << std::endl;
	}
}

void PhoneBook::displayContacts() const
{
	Contact::print_formatted("Index");
	Contact::print_formatted("First Name");
	Contact::print_formatted("Last Name");
	Contact::print_formatted("Nick Name");
	std::cout << std::endl;
	for (int i = 0; i < ((_isfull * MAX_CONTACTS) + (!_isfull
				* _currentIndex)); ++i)
	{
		std::stringstream ss;
		ss << i;
		Contact::print_formatted(ss.str());
		_contacts[i].searchDisplay();
	}
}

bool PhoneBook::validateIndex(std::string str) const {
	if(str.empty()){return false;}
	for(std::string::size_type i = 0; i < str.length(); i++)
	{
		if(!isdigit(str[i]))
		{
			return (false);
		}
	}
	return (true);
}

bool PhoneBook::searchFunc() const
{
	if (!_isfull && _currentIndex == 0)
	{
		std::cout << "Phone Book is empty!" << std::endl;
		return (true);
	}
	this->displayContacts();

	std::string index;
	while (true)
	{
		if (!getInput("Enter Index: ", index))
		{
			return (false);
		}
		if (!validateIndex(index))
		{
			std::cout << "Index need to be a number." << std::endl;
		}
		else
		{
			int i;
			i = std::atoi(index.c_str());
			if(((_isfull * MAX_CONTACTS)+ _currentIndex) > i ){
				_contacts[i].display();
			}
			else{
				std::cout << "Contact Not Found!" << std::endl;
			}
			break ;
		}
	}
	return (true);
}