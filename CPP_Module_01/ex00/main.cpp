/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:48:19 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 18:50:44 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	ZombieB("Foo");
	ZombieB.announce();

	Zombie*	ZombieC;
	ZombieC = newZombie("C");
	ZombieC->announce();

	randomChump("D");

	delete ZombieC;

	return 0;
}
