/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/26 21:00:06 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main() {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

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

	// std::cout << "increment/decrement operators overloading tests" << std::endl;
	// std::cout << "before increment: a = " << a << std::endl;
	// std::cout << "[preincrement] a++ = " << (++a) << std::endl;
	// std::cout << std::endl;
	// std::cout << "before increment: a = " << a << std::endl;
	// std::cout << "[postincrement] a++ = " << (a++) << std::endl;
	// std::cout << "after increment: a = " << a << std::endl;
	// std::cout << std::endl;
	// std::cout << "before decrement: a = " << a << std::endl;
	// std::cout << "[predecrement] a++ = " << (--a) << std::endl;
	// std::cout << std::endl;
	// std::cout << "before decrement: a = " << a << std::endl;
	// std::cout << "[postdecrement] a++ = " << (a--) << std::endl;
	// std::cout << "after decrement: a = " << a << std::endl;
	// std::cout << std::endl;


	// std::cout << "testing some member functions from Fixed" << std::endl;
	// a++;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;
	// std::cout << Fixed::min(b, a) << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << Fixed::max(b, a) << std::endl;

	return 0;

}
