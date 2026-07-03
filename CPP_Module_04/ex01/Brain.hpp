/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:42:50 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/07/03 16:40:05 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
  private:
    std::string _ideas[100];
  public:
    Brain();
    Brain(const Brain& other);
    Brain& operator =(const Brain& other);
    ~Brain();
    std::string getIdea(int index) const;
    void setIdea(int index, std::string idea);
};