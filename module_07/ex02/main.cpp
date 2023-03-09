/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:00:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/09 02:30:36 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	}
	{
		std::cout << std::endl;
		std::cout << "@@@@ CONSTRUCTOR WITHOUT ARGUMENT TEST @@@@" << std::endl;
		Array<char> a;
		std::cout << "Array size: " << a.size() << std::endl;
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

	}
	return 0;
}

