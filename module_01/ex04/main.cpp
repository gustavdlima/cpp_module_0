/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:42:58 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/30 04:19:19 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "sedIsForLosers.hpp"

int main(int argc, char **argv) {
	data			data;
	std::string		buffer;
	std::string		newName = "CopyOf";
	std::ifstream	inFile;
	std::ofstream	outFile;

	if (argc != 4)
		return 2;

	data.filename.append(std::string(argv[1]).append(" "));
	data.s1.append(std::string(argv[2]).append(" "));
	data.s2.append(std::string(argv[3]).append(" "));

	inFile.open(data.filename.data());
	outFile.open("outfile");

	if(inFile.is_open()) {
		while (std::getline(inFile, buffer)) {
			outFile << buffer << std::endl;
		}
	}

	// std::cout << data.filename << std::endl;
	// std::cout << data.s1 << std::endl;
	// std::cout << data.s2 << std::endl;
	inFile.close();
	outFile.close();
	return 0;
}
