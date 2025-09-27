/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:23:33 by lomont            #+#    #+#             */
/*   Updated: 2025/09/27 03:39:44 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	Zombie *WalkingDead;

	randomChump("Alban");
	WalkingDead = newZombie("Loris");
	WalkingDead->announce();
	delete WalkingDead;
	return (0);
}
