/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/08 22:39:10 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"


int	main()
{
	try {
		Intern intern;
		Bureaucrat	amyLee("amyLee", 1);
		AForm *formOne = intern.makeForm("shrubbery creation", "home");
		amyLee.signForm(*formOne);
		amyLee.executeForm(*formOne);

		delete formOne;
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try {
		Intern intern;
		Bureaucrat	bobBurnquist("bobBurnquist", 1);
		AForm *formOne = intern.makeForm("robotomy request", "sk8");
		bobBurnquist.signForm(*formOne);
		bobBurnquist.executeForm(*formOne);

		delete formOne;
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try {
		Intern intern;
		Bureaucrat	profRichard("profRichard", 1);
		AForm *formOne = intern.makeForm("presidential pardon", "home");
		profRichard.signForm(*formOne);
		profRichard.executeForm(*formOne);

		delete formOne;
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
}
