/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:08:21 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/26 22:12:40 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main() {
	std::string		brainMessage = "HI THIS IS BRAIN";
	std::string*	brainMessagePtr = &brainMessage;
	std::string&	brainMessageReference = brainMessage;

	std::cout << "Memory Address of String: " << &brainMessage << std::endl;
	std::cout << "The memory address held by stringPTR: "
		<< brainMessagePtr << std::endl;
	std::cout << "The memory address held by stringREF: "
		<< &brainMessageReference << std::endl;
	std::cout << "Value of String: " << brainMessage << std::endl;
	std::cout << "Value pointed to by stringPTR: "
		<< *brainMessagePtr << std::endl;
	std::cout << "Value pointed to by stringREF: "
		<< brainMessageReference << std::endl;
}
