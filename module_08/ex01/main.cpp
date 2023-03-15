/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:00:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/15 18:21:29 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include "Span.hpp"

int main()
{
	{
		try
		{
			std::cout << std::endl;
			std::cout << "####### PDF TEST #######" << std::endl;
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << std::endl;
			std::cout << "####### SPAN SIZE LESS THAN 2 TEST #######" << std::endl;
			Span sp = Span(1);
			sp.addNumber(6);
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << std::endl;
			std::cout << "####### SPAN SIZE 0 TEST #######" << std::endl;
			Span sp = Span(0);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		try {
			std::cout << std::endl;
			std::cout << "####### ADD NUMBER TO FULL SPAN TEST #######" << std::endl;
			Span sp = Span(2);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}
