/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:06:51 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/10/06 02:39:11 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat;

class Form
{
private:
    const int _sGrade;
    const int _eGrade;
    std::string _name;
    bool _isSigned;

public:
    Form();
    Form(int sGrade, int eGrade, std::string name);
    Form(const Form &other);
    ~Form();
    Form &operator=(const Form &other);
    void beSigned(const Bureaucrat &other);

    std::string getName() const;
    bool getIsSigned() const;
    int getSGrade() const;
    int getEGrade() const;

	class GradeTooHighException: public std::exception{
		public:
			virtual const char * what() const throw();
	};
	class GradeTooLowException: public std::exception{
		public:
			virtual	const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, const Form* f);