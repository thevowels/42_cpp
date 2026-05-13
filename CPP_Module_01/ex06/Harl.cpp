/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 08:23:05 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 21:30:16 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    std::clog << "[ DEBUG ]" << std::endl;
    std::clog << " Debug message" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << " Info message" << std::endl;
}

void Harl::warning(void)
{
    std::cerr << "[ WARNING ]" << std::endl;
    std::cerr << " Warning message" << std::endl;
}

void Harl::error(void)
{
    std::cerr << "[ ERROR ]" << std::endl;
    std::cerr << " Error message" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i;
    for (i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            break;
        }
    }

    switch (i)
    {
        case 0:
            (this->*ptr[0])();
            /* FALLTHROUGH */
        case 1:
            (this->*ptr[1])();
            /* FALLTHROUGH */
        case 2:
            (this->*ptr[2])();
            /* FALLTHROUGH */
        case 3:
            (this->*ptr[3])();
            break;
        default:
            std::cout << "Invalid level" << std::endl;
    }
}