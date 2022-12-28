/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:45:20 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 21:15:51 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName) : name(newName), weapon(NULL) {
}

HumanB::~HumanB() {

}

void	HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon = &newWeapon;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their "
		<< this->weapon->getType() << std::endl;
}
