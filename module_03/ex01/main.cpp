/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/30 23:51:54 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main() {
	// constructor build test
	ClapTrap	parvathi("Parvathi");

	std::cout << "Claptrap " << parvathi.getName() << " status" << std::endl;
	std::cout << FBLU("Energy: ") << parvathi.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << parvathi.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< parvathi.getAttackDamage() << std::endl;
	ScavTrap	bear("bear");
	std::cout << "ScavTrap " << bear.getName() << " status" << std::endl;
	std::cout << FBLU("Energy: ") << bear.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << bear.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< bear.getAttackDamage() << std::endl;

	parvathi.setAttackDamage(5);
	// bear.setAttackDamage(9);
	// attack and takeDamage tests
	parvathi.attack(bear.getName());
	bear.takeDamage(parvathi.getAttackDamage());
	bear.attack(parvathi.getName());
	parvathi.takeDamage(bear.getAttackDamage());
	parvathi.attack(bear.getName());
	bear.takeDamage(parvathi.getAttackDamage());
	// dead test
	bear.beRepaired(5);
	bear.attack(parvathi.getName());
	// beRepeaired test
	parvathi.beRepaired(10);
	// out energy test
	parvathi.setEnergyPoints(0);
	parvathi.beRepaired(1);
	parvathi.attack("testbot");
	// guardGate test
	bear.guardGate();

	return 0;

}
