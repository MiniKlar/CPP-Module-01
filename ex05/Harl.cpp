/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:00:06 by lomont            #+#    #+#             */
/*   Updated: 2025/09/30 23:01:40 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	//std::cout << "Constructor called!" << std::endl;
	return;
}

Harl::~Harl( void ) {
	//std::cout << "Destructor called!" << std::endl;
	return;
}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
	return ;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::complain( std::string& level ) {
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr1) (void) = &Harl::debug;
	void (Harl::*ptr2) (void) = &Harl::info;
	void (Harl::*ptr3) (void) = &Harl::warning;
	void (Harl::*ptr4) (void) = &Harl::error;

	void (Harl::*ptr[])(void) = {ptr1, ptr2, ptr3, ptr4};
	for (size_t i = 0; i < 4 ; i++) {
		if (level.compare(tab[i]) == 0) {
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "unknown level!" << std::endl;
	return ;
}
