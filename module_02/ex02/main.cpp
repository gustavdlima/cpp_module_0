/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/24 02:12:54 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	// std::cout << "arithmetic operators overloading tests" << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a + b = " << (a + b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a - b = " << (a - b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a * b = " << (a * b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a / b = " << (a / b) << std::endl;

	// std::cout << "comparasion operators overloading tests" << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a > b? " << (a > b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a < b? " << (a < b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a >= b? " << (a >= b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a <= b? " << (a <= b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a == b? " << (a == b) << std::endl;
	// std::cout << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "a != b? " << (a != b) << std::endl;
	// std::cout << std::endl;

	std::cout << "increment/decrement operators overloading tests" << std::endl;
	std::cout << "Before increment: a = " << a << std::endl;
	std::cout << "[Preincrement] a++ = " << (++a) << std::endl;
	std::cout << std::endl;
	std::cout << "Before increment: a = " << a << std::endl;
	std::cout << "[Postincrement] a++ = " << (a++) << std::endl;
	std::cout << "after increment: a = " << a << std::endl;
	std::cout << std::endl;
	std::cout << "Before decrement: a = " << a << std::endl;
	std::cout << "[Predecrement] a++ = " << (--a) << std::endl;
	std::cout << std::endl;
	std::cout << "Before decrement: a = " << a << std::endl;
	std::cout << "[Postdecrement] a++ = " << (a--) << std::endl;
	std::cout << "after decrement: a = " << a << std::endl;
	std::cout << std::endl;

	return 0;

}
