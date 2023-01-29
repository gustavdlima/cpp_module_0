/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/28 22:49:42 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main() {
	ClapTrap	parvathi("Parvathi");

	// constructor build tests
	std::cout << parvathi.getName() << std::endl;
	std::cout << parvathi.getEnergyPoints() << std::endl;
	std::cout << parvathi.getHitPoints() << std::endl;
	std::cout << parvathi.getAttackDamage() << std::endl;

	//	claptrap functions test
	parvathi.attack("kranklun");
	parvathi.takeDamage(5);
	parvathi.beRepaired(5);

	//

	return 0;

}
