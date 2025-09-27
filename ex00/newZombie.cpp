/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:23:30 by lomont            #+#    #+#             */
/*   Updated: 2025/09/27 03:54:15 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* ptr;

	ptr = new Zombie (name);
	if (ptr == nullptr)
		std::cout << "Error allocation!" << std::endl;
		exit(1);
	return (ptr);
};
