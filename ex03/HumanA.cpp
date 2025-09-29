/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:54:06 by lomont            #+#    #+#             */
/*   Updated: 2025/09/29 20:40:20 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& gun) : name (name), gun (gun) {
	//std::cout << "Constructor called!" << std::endl;
	return ;
}

HumanA::~HumanA( void ) {
	//std::cout << "Destructor called!" << std::endl;
	return ;
}

void HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
	return ;
}
