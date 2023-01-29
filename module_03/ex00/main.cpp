/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/28 22:40:29 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main() {
	ClapTrap	parvathi("Parvathi");

	std::cout << parvathi.getName() << std::endl;
	std::cout << parvathi.getName() << std::endl;

	//	claptrap tests
	parvathi.attack("kranklun");
	parvathi.takeDamage(5);
	parvathi.beRepaired(5);

	return 0;

}
