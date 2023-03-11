/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:00:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/11 02:43:40 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>
# include "easyFind.hpp"

int main( void )
{	{
		std::cout << std::endl;
		std::cout << "@@@@ VECTOR TEST @@@@" << std::endl;
		std::vector<int> myVector;

 		myVector.push_back(10);
		myVector.push_back(20);
		myVector.push_back(30);

		try {
			// INVALID VALUE
			easyFind(myVector, 40);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			// VALID VALUE
			easyFind(myVector, 30);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ DEQUE TEST @@@@" << std::endl;
		std::deque<int> myDeque1;
		std::deque<int> myDeque2;

		myDeque1.push_back(42);
		myDeque2.push_back(84);

		std::cout << "myDeque1 = " << myDeque1[0] << std::endl;
		std::cout << "myDeque2 = " << myDeque2[0] << std::endl;
		std::cout << std::endl;

		std::cout << "Swapping..." << std::endl;
		myDeque1.swap(myDeque2);
		std::cout << std::endl;

		try {
			// INVALID VALUE
			std::cout << "easyFind(myDeque1, 42);" << std::endl;
			easyFind(myDeque1, 42);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			std::cout << std::endl;
		}
		try {
			// VALID VALUE
			std::cout << "easyFind(myDeque2, 42);" << std::endl;
			easyFind(myDeque2, 42);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			std::cout << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ LIST TEST @@@@" << std::endl;
		std::list<int> mylist;

		for (int i = 0; i < 10; i++) {
			mylist.push_back(0);
		}
		std::list<int>::iterator it = mylist.begin();
		std::advance(it, 5);
		*it = 42;

		try {
			// VALID VALUE
			std::cout << "easyFind(mylist, 0);" << std::endl;
			easyFind(mylist, 0);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			std::cout << std::endl;
		}
		try {
			// VALID VALUE
			std::cout << "easyFind(mylist, 42);" << std::endl;
			easyFind(mylist, 42);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			std::cout << std::endl;
		}
		try {
			// INVALID VALUE
			std::cout << "easyFind(mylist, 84);" << std::endl;
			easyFind(mylist, 84);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			std::cout << std::endl;
		}

	}
	return 0;
}
