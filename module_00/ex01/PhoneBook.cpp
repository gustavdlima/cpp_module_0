/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 04:24:39 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/22 00:12:26 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	this->index = 0;
	this->oldest = 0;
}

PhoneBook::~PhoneBook() {

}

void PhoneBook::addContact(void) {
	for (;;)
	{

		std::cout << this->index << std::endl;

		if (this->index == PHONEBOOK_SIZE)
			this->index--;
		if (!checkIfContactAlreadyPopulated(this->contacts[this->index]))
		{
			populateContact(this->index);
			std::cout << "Contact "
					  << this->contacts[this->index].getFirstName()
					  << " added! His index is "
					  << this->contacts[this->index].getIndex()
					  << std::endl;
			if (this->index < (PHONEBOOK_SIZE))
				this->index++;
			break;
		}
		else
		{
			replaceNewestContactWithOldest();
			break;
		}
	}
}

void PhoneBook::printAllContacts(void)
{
	for (int i = 0; i < PHONEBOOK_SIZE; i++)
	{
		if (checkIfContactAlreadyPopulated(this->contacts[i])) {
			std::cout << "|";
			printSpace(9);
			std::cout << this->contacts[i].getIndex();
			std::cout << "|";
			truncateAndPrintString(this->contacts[i].getFirstName());
			std::cout << "|";
			truncateAndPrintString(this->contacts[i].getLastName());
			std::cout << "|";
			truncateAndPrintString(this->contacts[i].getNickName());
			std::cout << "|" << std::endl;
		} else {
			break ;
		}
	}
}

void PhoneBook::truncateAndPrintString(std::string data) {
	if (((int)data.size()) >= 10) {
		data.insert(9, ".");
		std::cout << data.substr(0, 10);
	}else {
		printSpace(((int)data.size()));
		std::cout << data;
	}
}

void	PhoneBook::printSpace(int number) {
	for(int	i = 0; i < (10 - number); i++)
		std::cout << " ";
}

std::string PhoneBook::userInput(std::string option) {
	std::string buffer;

	for (;;)
	{
		std::cout << option;
		std::cout << ": ";
		std::getline(std::cin, buffer);
		if (!buffer.empty())
			return (buffer);
	}
}

void PhoneBook::populateContact(int i) {
	this->contacts[i].setIndex(i);
	this->contacts[i].setFirstName(userInput("First name"));
	this->contacts[i].setLastName(userInput("Last name"));
	this->contacts[i].setNickName(userInput("Nick name"));
	this->contacts[i].setNumber(userInput("Number"));
	this->contacts[i].setDarkestSecret(userInput("Darkest secret"));
}

bool PhoneBook::checkIfContactAlreadyPopulated(Contact contact)
{
	if (contact.getFirstName().empty())
		return 0;
	else
		return 1;
}

void PhoneBook::replaceNewestContactWithOldest() {
	std::cout << "The oldest contact will be replaced by the new one."
			  << std::endl;
	cleanContactFields(this->contacts[this->oldest]);
	populateContact(this->oldest);
	if (this->oldest == (PHONEBOOK_SIZE - 1))
		this->oldest = 0;
	else
		this->oldest++;
}

void PhoneBook::cleanContactFields(Contact contact) {
	contact.cleanAllFields();
}
