/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/16 23:06:07 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main()
{
	try {
		Form	science("science", 1, 130);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Form	history("history", 1, 130);
		Bureaucrat	bryan("bryan", 120);
		bryan.signForm(history);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Form		geology("geology", 1, 130);
		Bureaucrat	hermes("hermes", 155);
		hermes.signForm(geology);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Form	financial("financial", 1, 130);
		Bureaucrat	luna("luna", 0);
		luna.signForm(financial);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Form	legislative("legislative", 2, 130);
		Bureaucrat	amyLee("amyLee", 1);
		amyLee.signForm(legislative);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Form	maths("maths", 1, 130);
		Bureaucrat	bruno("bruno", 1);
		std::cout << maths << std::endl;
		bruno.signForm(maths);
		std::cout << maths << std::endl;
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}
