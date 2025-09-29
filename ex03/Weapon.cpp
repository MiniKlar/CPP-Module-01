/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:54:10 by lomont            #+#    #+#             */
/*   Updated: 2025/09/29 20:44:31 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name) {
	//std::cout << "Constructor called!" << std::endl;
	return ;
}

Weapon::~Weapon() {
	//std::cout << "Destructor called!" << std::endl;
	return ;
}

const std::string& Weapon::getType() {
	return (this->type);
}

void Weapon::setType(const std::string &newType) {
	if (newType.empty())
		return ;
	this->type = newType;
	return ;
}
