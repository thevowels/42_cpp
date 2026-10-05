/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:06:51 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/09/28 17:11:35 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat;

class AForm
{
private:
    const int _sGrade;
    const int _eGrade;
    std::string _name;
    bool _isSigned;

public:
    AForm();
    AForm(int sGrade, int eGrade, std::string name);
    AForm(const AForm &other);
    virtual ~AForm();
    AForm &operator=(const AForm &other);
    void beSigned(const Bureaucrat &other);

    std::string getName() const;
    bool getIsSigned() const;
    int getSGrade() const;
    int getEGrade() const;

	// ex02 
	virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream &operator<<(std::ostream &o, const AForm* f);