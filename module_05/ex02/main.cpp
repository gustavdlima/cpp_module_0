/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/08 15:26:28 by gusalves         ###   ########.fr       */
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
	// try {
	// 	Bureaucrat	norm("norm", 42);
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	norm("norm", 0);
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	norm("norm", 155);
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	norm("norm", 1);
	// 	norm.setGrade(0);
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	norm("norm", 1);
	// 	norm.incrementGrade();
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	norm("norm", 150);
	// 	norm.decrementGrade();
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	Bureaucrat	norm("norm", 11);
	// 	Bureaucrat	polo("polo", 42);
	// 	polo = norm;
	// 	std::cout << polo.getName() << ", bureaucrat grade " << polo << std::endl;
	// } catch (std::exception &exception) {
	// 	std::cout << exception.what() << std::endl;
	// }

	// try {
	// 	AForm	science("science", 1, 130);
	// } catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	AForm	history("history", 1, 130);
	// 	Bureaucrat	bryan("bryan", 120);
	// 	history.beSigned(bryan);
	// 	bryan.signForm(history);
	// } catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	AForm		geology("geology", 1, 130);
	// 	Bureaucrat	hermes("hermes", 155);
	// 	geology.beSigned(hermes);
	// 	hermes.signForm(geology);
	// } catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	// try {
	// 	AForm	financial("financial", 1, 130);
	// 	Bureaucrat	luna("luna", 0);
	// 	financial.beSigned(luna);
	// 	luna.signForm(financial);
	// } catch(std::exception& e){
	// 	std::cout << e.what() << std::endl;
	// }

	try {
		AForm	science("science", 1, 130);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		AForm	history("history", 1, 130);
		Bureaucrat	bryan("bryan", 120);
		bryan.signForm(history);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		AForm		geology("geology", 1, 130);
		Bureaucrat	hermes("hermes", 155);
		hermes.signForm(geology);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		AForm	financial("financial", 1, 130);
		Bureaucrat	luna("luna", 0);
		luna.signForm(financial);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		AForm	legislative("legislative", 2, 130);
		Bureaucrat	amyLee("amyLee", 1);
		amyLee.signForm(legislative);
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		AForm	maths("maths", 1, 130);
		Bureaucrat	bruno("bruno", 1);
		std::cout << maths << std::endl;
		bruno.signForm(maths);
		std::cout << maths << std::endl;
	} catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	pearl("pearl", 1);
		ShrubberyCreationForm	shrubberyCreation("home");
		pearl.signForm(shrubberyCreation);
		shrubberyCreation.execute();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		ShrubberyCreationForm	shrubberyCreation("home");
		shrubberyCreation.execute();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	caio("caio", 1);
		RobotomyRequestForm	robotomyRequest("Marvin");
		caio.signForm(robotomyRequest);
		robotomyRequest.execute();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat	bob("bob", 2);
		RobotomyRequestForm	robotomyRequest("quake");
		bob.signForm(robotomyRequest);
		robotomyRequest.execute();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		RobotomyRequestForm	robotomyRequest("Marvin");
		robotomyRequest.execute();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}
