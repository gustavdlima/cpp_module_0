#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
	freeContactArray();
}

bool PhoneBook::addContact(void) {
	for (int i = 0; i < 8; i++) {
		if (checkIfContactAlreadyPopulated(this->contacts[i])) {
			populateContact(i);
			break ;
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
	// std::cout << "Last Name: ";
	// std::cin >> buffer;
	// newContact->setLastName(buffer);
	// std::cout << "Nick Name: ";
	// std::cin >> buffer;
	// newContact->setNickName(buffer);
	// std::cout << "Number: ";
	// std::cin >> buffer;
	// newContact->setNumber(buffer);
	// std::cout << "Darkest Secret: ";
	// std::cin >> buffer;
	// newContact->setFirstName(buffer);
}

void	PhoneBook::freeContactArray(void) {
	Contact content;

	for(int	i = 0; i < 8; i++) {
		content = this->contacts[i];
		delete &content;
	}
}

bool	PhoneBook::checkIfContactAlreadyPopulated(Contact contact) {
	if (contact.getFirstName().empty()) {
		return 1;
	} else {
		return 0;
	}
}
