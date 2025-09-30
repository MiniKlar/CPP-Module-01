/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:55:40 by lomont            #+#    #+#             */
/*   Updated: 2025/09/30 18:48:03 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main( int argc, char **argv )
{
	if (argc == 4) {
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string line;

		std::ifstream infile (filename.c_str());
		if (!infile.is_open()) {
			std::cout << "Error when trying to open infile" << std::endl;
			return (1);
		}
		filename = filename + ".replace";
		std::ofstream outfile (filename.c_str());
		if (!outfile.is_open()) {
			std::cout << "Error when trying to open outfile" << std::endl;
			return (1);
		}
		while (getline(infile, line)) {
			for (size_t pos = 0; pos < line.length(); ) {
				if (line.substr(pos, s1.length()) == s1) {
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					pos += s2.length();
				} else {
				pos++;
				}
			}
			outfile << line << '\n';
		}
		infile.close();
		outfile.close();
	}
	return (0);
}
