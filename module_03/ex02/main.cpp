/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:12:38 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/31 00:38:45 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main() {
	// constructor build test
	ClapTrap	parvathi("Parvathi");
	ScavTrap	bear("bear");
	FragTrap	purpleFlower("purpleFlower");

	std::cout << KRED << "Claptrap " << parvathi.getName() << " status" << RST  << std::endl;
	std::cout << FBLU("Energy: ") << parvathi.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << parvathi.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< parvathi.getAttackDamage() << std::endl;

	std::cout << KRED << "ScavTrap " << bear.getName() << " status" << RST << std::endl;
	std::cout << FBLU("Energy: ") << bear.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << bear.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< bear.getAttackDamage() << std::endl;

	std::cout << KRED <<"FragTrap " << purpleFlower.getName() << " status" << RST << std::endl;
	std::cout << FBLU("Energy: ") << purpleFlower.getEnergyPoints() << std::endl;
	std::cout << FGRN("Hit Points: ") << purpleFlower.getHitPoints() << std::endl;
	std::cout << FMAG("Attack Damage: ")<< purpleFlower.getAttackDamage() << std::endl;

	// attack and takeDamage tests
	parvathi.attack(bear.getName());
	bear.attack(purpleFlower.getName());
	purpleFlower.attack(parvathi.getName());
	parvathi.takeDamage(bear.getAttackDamage());
	bear.takeDamage(purpleFlower.getAttackDamage());
	purpleFlower.takeDamage(parvathi.getAttackDamage());

	// dead test
	bear.beRepaired(5);
	bear.attack(parvathi.getName());

	// beRepeaired test
	parvathi.beRepaired(10);
	bear.beRepaired(10);
	purpleFlower.beRepaired(10);

	// out energy test
	parvathi.setEnergyPoints(0);
	parvathi.beRepaired(1);
	parvathi.attack("testbot");
	bear.setEnergyPoints(0);
	bear.beRepaired(1);
	bear.attack("testbot");
	purpleFlower.setEnergyPoints(0);
	purpleFlower.beRepaired(1);
	purpleFlower.attack("testbot");

	// guardGate test
	bear.guardGate();

	//  highFivesGuys test
	purpleFlower.highFivesGuys();

	return 0;

}
