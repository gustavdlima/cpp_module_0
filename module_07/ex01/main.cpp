/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:00:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/08 18:53:18 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "iter.hpp"

int main( void )
{
	{
		std::cout << "@@@@ INT ARRAY TEST @@@@" << std::endl;
		int array[] = { 0, 1, 42, 3, 42 };
		::iter(array, 5, printValue);
	}
	{
		std::cout << "@@@@ STRING ARRAY TEST @@@@" << std::endl;
		std::string array[5] = { "a", "b", "c", "d", "e" };
		::iter(array, 5, printValue);
	}
	{
		std::cout << "@@@@ FLOAT ARRAY TEST @@@@" << std::endl;
		float array[] = { 0.42f, 1.42f, 2.42f, 3.42f, 4.42f };
		::iter(array, 5, printValue);
	}
	{
		std::cout << "@@@@ DOUBLE ARRAY TEST @@@@" << std::endl;
		double array[] = { 0.42, 1.42, 2.42, 3.42, 4.42 };
		::iter(array, 5, printValue);
	}

	return 0;
}

