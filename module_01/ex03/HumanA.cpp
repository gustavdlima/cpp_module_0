/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:18:27 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 21:11:33 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon) : name(newName), weapon(newWeapon) {
}

HumanA::~HumanA() {

}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their "
		<< this->weapon.getType() << std::endl;
}

Weapon	&HumanA::getWeapon(void) {
	return(this->weapon);
}

void	HumanA::setWeapon(Weapon &newWeapon) {
	this->weapon = newWeapon;
}
