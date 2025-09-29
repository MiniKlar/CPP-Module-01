/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:21:03 by lomont            #+#    #+#             */
/*   Updated: 2025/09/29 12:37:58 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string* STRINGptr = &str;
	std::string& STRINGref = str;

	std::cout << &str << std::endl;
	std::cout << STRINGptr << std::endl;
	std::cout << &STRINGref << std::endl;

	std::cout << str << std::endl;
	std::cout << *STRINGptr << std::endl;
	std::cout << STRINGref << std::endl;

	return (0);
}
