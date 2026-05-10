/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:00:58 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 19:13:30 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if(N <= 0)
	{
		return (NULL);
	}
	Zombie* zombies = new Zombie[N];
	std::stringstream ss;
	
	for(int i =0; i < N; i++)
	{
		ss << name << "_" << i;
		zombies[i].setName(ss.str());
		ss.str("");
		ss.clear();
	}
	return zombies;
}