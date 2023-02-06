/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 19:08:49 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

int	main()
{
	try {
		Bureaucrat	norm("norm", 42);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat	norm("norm", 0);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat	norm("norm", 155);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat	norm("norm", 1);
		norm.setGrade(0);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat	norm("norm", 1);
		norm.incrementGrade();
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat	norm("norm", 150);
		norm.decrementGrade();
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		Bureaucrat	norm("norm", 11);
		Bureaucrat	polo("polo", 42);
		polo = norm;
		std::cout << polo.getName() << ", bureaucrat grade " << polo << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}


	return 0;
}
