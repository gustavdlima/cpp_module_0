/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/28 23:33:30 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main() {
	// constructor build test
	ClapTrap	parvathi("Parvathi");
	std::cout << "Claptrap " << parvathi.getName() << " status" << std::endl;
	std::cout << FBLU("Energy: ") << parvathi.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << parvathi.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< parvathi.getAttackDamage() << std::endl;
	ClapTrap	abu("Abu");
	std::cout << "Claptrap" << abu.getName() << "status" << std::endl;
	std::cout << FBLU("Energy: ") << abu.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << abu.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< abu.getAttackDamage() << std::endl;

	// features tests
	parvathi.setAttackDamage(5);
	abu.setAttackDamage(9);
	// attack and takeDamage tests
	parvathi.attack(abu.getName());
	abu.takeDamage(parvathi.getAttackDamage());
	abu.attack(parvathi.getName());
	parvathi.takeDamage(abu.getAttackDamage());
	parvathi.attack(abu.getName());
	abu.takeDamage(parvathi.getAttackDamage());
	// dead test
	abu.beRepaired(5);
	abu.attack(parvathi.getName());
	// beRepeaired test
	parvathi.beRepaired(10);
	// out energy test
	parvathi.setEnergyPoints(0);
	parvathi.beRepaired(1);
	parvathi.attack("testbot");
	return 0;

}
