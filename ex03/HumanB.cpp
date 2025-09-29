/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:54:07 by lomont            #+#    #+#             */
/*   Updated: 2025/09/29 20:40:41 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), gun(NULL) {
	//std::cout << "Constructor called!" << std::endl;
	return ;
}

HumanB::~HumanB( void ) {
	//std::cout << "Destructor called!" << std::endl;
	return ;
}

void HumanB::attack( void ) {
	if (this->gun == NULL) {
		std::cout << "You can't attack, you don't have a gun!" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
	return ;
}

void HumanB::setWeapon( Weapon& NewGun ) {
	this->gun = &NewGun;
	return ;
}
