/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 08:22:58 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 21:26:13 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("DEBUG");
	std::cout << std::endl << "      ##########      " << std::endl << std::endl;
    harl.complain("INFO");
	std::cout << std::endl << "      ##########      " << std::endl << std::endl;
    harl.complain("WARNING");
	std::cout << std::endl << "      ##########      " << std::endl << std::endl;
    harl.complain("ERROR");
	std::cout << std::endl << "      ##########      " << std::endl << std::endl;
    harl.complain("INVALID");

    return 0;
}