/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:29:49 by miniklar          #+#    #+#             */
/*   Updated: 2025/09/28 09:03:18 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	Zombie* Dead;

	Dead = zombieHorde(5, "rick");
	if (Dead == NULL)
		return (1);
	for (int i = 0; i < 5; i++) {
		Dead[i].announce();
	}
	std::cout << "All zombies have been called!" << std::endl;
	delete[] Dead;
	return (0);
}
