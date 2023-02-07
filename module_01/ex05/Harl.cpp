/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:51:59 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/07 00:05:28 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructors
Harl::Harl()
{

}

// Destructors
Harl::~Harl()
{

}

// Member Functions
void Harl::debug(void)
{
	std::cout << "[debug message]" << std::endl;
	std::cout <<
		"I love having extra bacon for my 17XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[info message]" << std::endl;
	std::cout <<
		"I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"
		<< std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[warning message]" << std::endl;
	std::cout <<
		"I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month."
		<< std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[error message]" << std::endl;
	std::cout <<
		"This is unacceptable! I want to speak to the manager now."
		<< std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	void		(Harl::*debugPtr) (void) = 	&Harl::debug;
	void		(Harl::*infoPtr) (void) = 	&Harl::info;
	void		(Harl::*warningPtr) (void) = 	&Harl::warning;
	void		(Harl::*errorPtr) (void) = 	&Harl::error;
	void		(Harl::*complainPtr[4]) (void) = { debugPtr, infoPtr, warningPtr, errorPtr};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
		{
			(this->*complainPtr[i]) ();
			break ;
		}
		if (i == 3)
		{
			std::cout << "[error message]" << std::endl;
			std::cout << "wrong level!" << std::endl;
			break ;
		}
	}
}
