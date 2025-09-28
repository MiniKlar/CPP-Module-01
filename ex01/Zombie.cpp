/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 08:29:51 by miniklar          #+#    #+#             */
/*   Updated: 2025/09/28 08:55:59 by miniklar         ###   ########.fr       */
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

void Zombie::SetName( std::string name ) {
	this->name = name;
	return ;
}
