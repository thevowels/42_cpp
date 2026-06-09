/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:58:42 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/06/09 09:19:31 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		virtual ~FragTrap();
		void highFiveGuys();
};

