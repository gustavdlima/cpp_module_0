/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:32:22 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/20 18:56:24 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main( void )
{
	PhoneBook	phoneBook;
	Contact		contact;
	std::string	buffer;

	std::cout << "-- My awesome PhoneBook! --" << std::endl;
	std::cout << std::endl;
	while (1) {
		std::cout << "What you need?" << std::endl;
		std::cout << "- ADD" << std::endl;
		std::cout << "- SEARCH" << std::endl;
		std::cout << "- EXIT" << std::endl;
		std::getline(std::cin, buffer);
		if (!buffer.compare("ADD")) {
			phoneBook.addContact();
		}
		if (!buffer.compare("SEARCH")) {
			phoneBook.printAllContacts();
		}
		if (!buffer.compare("EXIT")) {
			std::cout << "Bye ;)" << std::endl;
			break ;
		}
	}
}
