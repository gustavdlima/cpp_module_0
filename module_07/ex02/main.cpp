/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:00:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/09 10:51:55 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sstream>
# include <iostream>
# include <string>
# include "Array.hpp"

int main( void )
{
	{
		std::cout << std::endl;
		std::cout << "@@@@ PDF TEST @@@@" << std::endl;
		int * a = new int();
		std::cout << "a: " << *a << std::endl;
		delete a;
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ CONSTRUCTOR WITHOUT PARAMETER TEST @@@@"
			<< std::endl;
		Array<char> a;
		std::cout << "Array size: " << a.size() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ CONSTRUCTOR WITH PARAMETER TEST @@@@" << std::endl;
		Array<int> a((unsigned int)3);
		for (int i = 0; i < 3; i++) {
			a[i] = i;
			std::cout << "array[" << i << "]: " << a[i] << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ COPY CONSTRUCTOR & OPERATORS TEST @@@@" << std::endl;
		Array<int> a((unsigned int)3);
		for (int i = 0; i < 3; i++) {
			a[i] = i;
		}
		Array<int> tmp;
		tmp = a;
		std::cout << "a: " << a[0] << std::endl;
		std::cout << "tmp: " << tmp[0] << std::endl;
		std::cout << "Changing a[0] to 42" << std::endl;
		a[0] = 42;
		std::cout << "a: " << a[0] << std::endl;
		std::cout << "tmp: " << tmp[0] << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ CHAR ARRAY TEST @@@@" << std::endl;
		Array<char> a((unsigned int)3);
		for (int i = 0; i < 3; i++) {
			a[i] = (65 + i);
			std::cout << "array[" << i << "]: " << a[i] << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ OUT OF BOUNDS TEST @@@@" << std::endl;
		Array<int> a((unsigned int)3);
		for (int i = 0; i < 3; i++) {
			a[i] = i;
		}
		try {
			std::cout << "array[3]: " << a[3] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ STRING ARRAY TEST @@@@" << std::endl;
		Array<std::string> a((unsigned int)3);
		for (int i = 0; i < 3; i++) {
			std::ostringstream oss;
			oss << i;
			std::string s = oss.str();
			a[i] = std::string("string ") + s;
			std::cout << "array[" << i << "]: " << a[i] << std::endl;
		}
	}
	return 0;
}

