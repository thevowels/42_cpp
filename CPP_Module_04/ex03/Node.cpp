/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 18:04:00 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/13 16:17:22 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Node.hpp"

Node::Node(): _val(NULL) , _next(NULL)
{
    
}

Node::Node(AMateria *val): _val(val), _next(NULL)
{
}

Node::Node(const Node& other)
{
    this->_val = other._val;
    if(other._next != NULL)
    {
        this->_next = new Node(*(other._next));
    }else
    {
        this->_next = NULL;
    }
}

Node& Node::operator=(const Node& other)
{
    if(this == &other)
    {
        return *this;
    }
    delete this->_next;

    this->_val = other._val;

    if(other._next != NULL)
    {
        this->_next = new Node(*(other._next));
    }else {
        this->_next = NULL;
    }

    return *this;
}

Node::~Node()
{
    delete _val;
    delete _next;
}

Node* Node::getLast()
{
    if(this->_next == NULL)
        return this;
    return this->_next->getLast();
}

void Node::push(AMateria *val)
{
    Node *node = new Node(val);
    this->getLast()->_next = node;
}