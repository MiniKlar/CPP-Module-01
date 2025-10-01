/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:30:35 by miniklar          #+#    #+#             */
/*   Updated: 2025/10/01 17:35:57 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, const std::string& name ) {
	Zombie* Dead;

	Dead = new Zombie[N];
	if (Dead == NULL)
		return (NULL);
	for (int i = 0; i < N; i++) {
		Dead[i].SetName(name);
	}
	return (Dead);
}
