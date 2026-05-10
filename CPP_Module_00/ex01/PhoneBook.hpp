/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 00:18:46 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 16:40:55 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	static bool getInput(std::string label, std::string &str);
	void displayContacts() const;
	bool addContact();
	bool searchFunc() const;
	bool validateIndex(std::string str) const;
  private:
	static const int MAX_CONTACTS = 8;
	static bool isInputValid(std::string);
	void incIndex();
	Contact _contacts[8];
	int _currentIndex;
	bool _isfull;
};
#endif