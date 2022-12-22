/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 04:24:30 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/20 16:44:48 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP
#define __CONTACT_HPP

#include <string>

class Contact
{
	private:
		int			_index;
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _number;
		std::string _darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		int			getIndex(void) const;
		std::string	getFirstName(void) const;
		std::string getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getNumber(void) const;
		std::string getDarkestSecret(void) const;

		void 		setFirstName(std::string firstName);
		void 		setLastName(std::string lastName);
		void		setNickName(std::string newNickName);
		void		setNumber(std::string newNumber);
		void		setDarkestSecret(std::string darkestSecret);
		void		setIndex(int i);
		void		cleanAllFields(void);
};

#endif
