/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 17:55:46 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/13 16:16:48 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class Node{

    private:
        AMateria* _val;
        Node* _next;

    public:
        Node();
        Node(AMateria *val);
        Node(const Node& other);
        Node& operator=(const Node& other);
        ~Node();
        Node* getLast();
        void push(AMateria *val);
};