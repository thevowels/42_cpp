/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 08:23:05 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 21:29:47 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    // std::clog << "[ DEBUG ]" << std::endl;
    // std::clog << " Debug message" << std::endl;
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << " Debug message" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << " Info message" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << " Warning message" << std::endl;
}

void Harl::error(void)
{
    // std::cerr << "[ ERROR ]" << std::endl;
    // std::cerr << " Error message" << std::endl;
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << " Error message" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}
