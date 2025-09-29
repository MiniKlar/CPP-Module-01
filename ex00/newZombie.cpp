/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:23:30 by lomont            #+#    #+#             */
/*   Updated: 2025/09/29 11:58:56 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* ptr;

	ptr = new Zombie (name);
	if (ptr == NULL) {
		std::cout << "Error allocation!" << std::endl;
		return (NULL);
	}
	return (ptr);
}

