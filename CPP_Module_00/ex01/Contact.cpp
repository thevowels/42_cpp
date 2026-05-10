/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 00:00:34 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 16:25:58 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Contact::Contact(){}
Contact::Contact(std::string firstName, std::string lastName,
	std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}
Contact::Contact(std::string inputs[5]){
	_firstName = inputs[0];
	_lastName = inputs[1];
	_nickName = inputs[2];
	_phoneNumber = inputs[3];
	_darkestSecret = inputs[4];

}

void Contact::print_formatted(std::string str)
{
	if(str.length() > 10){
		std::cout << str.substr(0,9) << ".|";
	}else {
		std::cout << std::setw(10) << str << "|";
	}
}
void Contact::display() const{
	std::cout << "First Name		: " <<  _firstName << std::endl;
	std::cout << "Last Name			: " <<  _lastName << std::endl;
	std::cout << "NickName			: " <<  _nickName << std::endl;
	std::cout << "Phone Number		: " <<  _phoneNumber << std::endl;
	std::cout << "Darkest Secret	: " <<  _darkestSecret << std::endl;
}

void Contact::searchDisplay() const{
	print_formatted(this->_firstName);
	print_formatted(this->_lastName);
	print_formatted(this->_nickName);
	std::cout << std::endl;
}
