/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:19:35 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/13 14:13:15 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;

};

#endif