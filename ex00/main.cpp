/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:23:33 by lomont            #+#    #+#             */
/*   Updated: 2025/09/29 11:59:17 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	Zombie *WalkingDead;

	randomChump("Alban");
	WalkingDead = newZombie("Loris");
	if (!WalkingDead)
		return (1);
	WalkingDead->announce();
	delete WalkingDead;
	return (0);
}
