#include <string>
#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {

}

PhoneBook::~PhoneBook() {

}

bool PhoneBook::addContact(Contact newContact) {
	this->contacts[0] = newContact;
	return (1);
}

void	PhoneBook::printAllContacts(void) {
	for (int i = 0; i < 7; i++)
	{
		std::cout << this->contacts[i].getFirstName() << "\n";
	}
}

