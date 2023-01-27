/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 04:24:48 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/27 01:03:54 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP
#define __PHONEBOOK_HPP

#define PHONEBOOK_SIZE	8

#include "Contact.hpp"
#include <iomanip>
#include <string>
#include <iostream>
#include <sstream>

class PhoneBook {
	private:
	int		index;
	int		oldest;
	Contact	contacts[PHONEBOOK_SIZE];

	std::string		userInput(std::string option);
	bool			checkIfContactAlreadyPopulated(Contact contact);
	void			replaceNewestContactWithOldest(void);
	void 			truncateAndPrintString(std::string data);
	void			printSpace(int number);
	void			cleanContactFields(Contact contact);
	bool			verifyInput(std::string input);

	public:
					PhoneBook(void);
					~PhoneBook(void);
	void			addContact(void);
	void			getContactIndexAndPrint(void);
	void			populateContact(int	i);
	void			printAllContacts(void);

};

#endif
