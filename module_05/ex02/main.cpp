/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/08 22:27:49 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


int	main()
{
	try {
		Bureaucrat	amyLee("amyLee", 1);
		ShrubberyCreationForm	shrubberyForm("house");
		amyLee.signForm(shrubberyForm);
		amyLee.executeForm(shrubberyForm);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	bobBurnquist("bobBurnquist", 1);
		RobotomyRequestForm	robotomyRequest("sk8");
		bobBurnquist.signForm(robotomyRequest);
		bobBurnquist.executeForm(robotomyRequest);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	leo("leo", 1);
		PresidentialPardonForm	presidentialPardon("leo");
		leo.signForm(presidentialPardon);
		leo.executeForm(presidentialPardon);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

}
