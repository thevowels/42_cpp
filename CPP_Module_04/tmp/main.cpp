/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 08:50:29 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/12 01:08:10 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Node.hpp"

void lineBreak(std::string str)
{
    std::cout << std::endl;
    std::cout << "\033[32m--------------------" << str << "--------------------\033[0m" << std::endl;
    std::cout << std::endl;
}

void lineBreak()
{
    std::cout << "\033[35m-----------------------------------------------------\033[0m" << std::endl;
}
int	main(void)
{
    char *c = new char('c');
    char *d = new char('d');
    // Node *node = new Node(c);
    // node->push(d);
    // delete(node);
    // std::cout << node << std::endl;
    std::cout << c << d << std::endl;
    delete(c);
}
