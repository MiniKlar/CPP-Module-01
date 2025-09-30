/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:11:15 by lomont            #+#    #+#             */
/*   Updated: 2025/09/30 23:42:57 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harlFilter <'DEBUG' | 'INFO' | 'WARNING' | 'ERROR'>" << std::endl;
		return (1);
	}

	Harl Jarvis;
	std::string s = argv[argc - 1];
	Jarvis.complain(s);

	return (0);
};
