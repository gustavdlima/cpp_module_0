/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/08 20:04:58 by gusalves         ###   ########.fr       */
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
	AForm *f1 = new PresidentialPardonForm("Home");
	AForm *f2 = new RobotomyRequestForm("Home");
	AForm *f3 = new ShrubberyCreationForm("Home");
	Bureaucrat andrew("Andrew", 6);
	andrew.executeForm(*f1);
	andrew.signForm(*f1);
	andrew.signForm(*f2);
	andrew.signForm(*f3);
	andrew.executeForm(*f1);
	andrew.executeForm(*f2);
	andrew.executeForm(*f3);
	delete f1;
	delete f2;
	delete f3;
	return 0;
	return 0;
}
