#ifndef __PHONEBOOK_HPP
#define __PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
	Contact	contacts[8];

	void		freeContactArray(void);
	void		populateContact(int index);
	bool		checkIfContactAlreadyPopulated(Contact contact);


	public:
			PhoneBook(void);
			~PhoneBook(void);
	bool	addContact(void);
	void	printAllContacts(void);

};

#endif
