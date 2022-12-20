/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 04:24:48 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/20 04:24:48 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP
#define __PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
	Contact	contacts[8];

	void		populateContact(int index);
	bool		checkIfContactAlreadyPopulated(Contact contact);
	void		replaceNewestContactWithOldest(void);


	public:
			PhoneBook(void);
			~PhoneBook(void);
	bool	addContact(void);
	void	printAllContacts(void);

};

#endif
