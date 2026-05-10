/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:36:48 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 19:09:17 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie {
	public:
		Zombie();
		Zombie(const std::string& name);
		~Zombie();
		void	announce();
		void	setName(std::string name);
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
# endif