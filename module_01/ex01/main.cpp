/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:39 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/26 20:49:31 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie( std::string name );
void	randomChump(std::string name);
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
