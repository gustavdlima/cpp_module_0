/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:39 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 22:18:32 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde( int N, std::string name );

int	main(void) {
	Zombie		*horde;

	horde = zombieHorde(3, "Orgrim");
	for(int i = 0; i < 3; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
