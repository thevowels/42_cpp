/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 17:55:46 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/12 01:04:51 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Node{

    private:
        char* _val;
        Node* _next;
        Node();

    public:
        Node(char *val);
        Node(const Node& other);
        Node& operator=(const Node& other);
        ~Node();
        Node* getLast();
        void push(char *val);

};