/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:00:10 by lomont            #+#    #+#             */
/*   Updated: 2025/09/30 23:07:13 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main ( void ) {
	Harl Jarvis;

	std::string s = "ERROR";
	Jarvis.complain(s);
	return (0);
}
