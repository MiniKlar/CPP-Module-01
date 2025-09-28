/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:30:35 by miniklar          #+#    #+#             */
/*   Updated: 2025/09/28 09:00:27 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* Dead;

	Dead = new Zombie[N];
	if (Dead == NULL)
		return (NULL);
	for (int i = 0; i < N; i++) {
		Dead[i].SetName(name);
	}
	return (Dead);
}
