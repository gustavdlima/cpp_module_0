/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:14:28 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 23:34:52 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main() {
	Harl		harl;
	// std::string	buffer;

	// std::cout << "Choose a level: " << std::endl;
	// std::cout << "-debug" << std::endl;
	// std::cout << "-info" << std::endl;
	// std::cout << "-warning" << std::endl;
	// std::cout << "-error" << std::endl;
	// std::cin >> buffer;
	// harl.complain(buffer);

	/*
		- before uncomment the tests, comment from line 19 to 27!
	*/

	// tests with right input
	// harl.complain("debug");
	// harl.complain("info");
	// harl.complain("warning");
	// harl.complain("error");

	// tests with wrong inputs
	harl.complain("debuguer");
	harl.complain("information");
	harl.complain("warnings");
	harl.complain("errors");
}
