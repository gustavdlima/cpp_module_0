#ifndef __PHONEBOOK_HPP
#define __PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
	Contact contacts[8];

	public:
	PhoneBook(void);
	~PhoneBook(void);
	bool	addContact(Contact newContact);
	void	printAllContacts(void);

};

#endif
