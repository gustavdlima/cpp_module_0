/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:11:39 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/26 17:06:05 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* newZombie( std::string name );
void	randomChump(std::string name);

int	main(void) {
	Zombie		*zack;

	zack = newZombie("zack");
	randomChump("elvis");
	delete zack;
	return 0;
}
