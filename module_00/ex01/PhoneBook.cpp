/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 04:24:39 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/20 04:50:47 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

bool PhoneBook::addContact(void) {
	for (int i = 0; i < 8; i++) {
		if (checkIfContactAlreadyPopulated(this->contacts[i])) {
			populateContact(i);
			std::cout << "Contact " << this->contacts[i].getFirstName()
				<< " added! His index is " << this->contacts[i].getIndex()
				<<	std::endl;
			break ;
		}	else {
			replaceNewestContactWithOldest();
		}
	}
	return (1);
}

void	PhoneBook::printAllContacts(void) {
	for (int i = 0; i < 8; i++)
	{
		std::cout << this->contacts[i].getIndex() << std::endl;
	}
}

void	PhoneBook::populateContact(int	index) {
	std::string	buffer;

	this->contacts[index].setIndex(index);
	std::cout << "Name: ";
	std::cin >> buffer;
	this->contacts[index].setFirstName(buffer);
	std::cout << "Last Name: ";
	std::cin >> buffer;
	this->contacts[index].setLastName(buffer);
	std::cout << "Nick Name: ";
	std::cin >> buffer;
	this->contacts[index].setNickName(buffer);
	std::cout << "Number: ";
	std::cin >> buffer;
	this->contacts[index].setNumber(buffer);
	std::cout << "Darkest Secret: ";
	std::cin >> buffer;
}

bool	PhoneBook::checkIfContactAlreadyPopulated(Contact contact) {
	if (contact.getFirstName().empty()) {
		return 1;
	} else {
		return 0;
	}
}

void	PhoneBook::replaceNewestContactWithOldest() {
	std::cout << "The oldest contact will be replaced by the new one."
		<< std::endl;
	populateContact(8);
}
