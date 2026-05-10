/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphyo-ht <aphyo-ht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 19:12:52 by aphyo-ht          #+#    #+#             */
/*   Updated: 2026/05/10 19:12:57 by aphyo-ht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int	N = 5;
	Zombie*	horde = zombieHorde(N, "Horde");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	delete[] horde;

	return 0;
}
