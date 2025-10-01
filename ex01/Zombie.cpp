/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:29:51 by miniklar          #+#    #+#             */
/*   Updated: 2025/10/01 17:36:31 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created!" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed!" << std::endl;
	return ;
}

void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::SetName(const std::string& name ) {
	this->name = name;
	return ;
}
