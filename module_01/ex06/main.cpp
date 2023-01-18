/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:14:28 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/18 00:46:32 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	Harl			harl;
	std::string		temp;

	if (argc != 2) {
		std::cout << "invalid arguments! After ./harlFilter choose one of this levels:" << std::endl;
		std::cout << "-debug" << std::endl;
		std::cout << "-info" << std::endl;
		std::cout << "-warning" << std::endl;
		std::cout << "-error" << std::endl;
		return 2;
	}
	temp.assign(argv[1]);
	harl.complain(temp);

	/*
		- before uncomment the tests, comment from line 19 to 27!
	*/

	// tests with right input
	// harl.complain("debug");
	// harl.complain("info");
	// harl.complain("warning");
	// harl.complain("error");

	// tests with wrong inputs
	// harl.complain("debuguer");
	// harl.complain("information");
	// harl.complain("warnings");
	// harl.complain("errors");

	return 0;
}
