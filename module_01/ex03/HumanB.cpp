/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:45:20 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 22:38:24 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructors
HumanB::HumanB(std::string newName) : name(newName), weapon(NULL) {
}

// Descructors
HumanB::~HumanB() {

}

// Setters
void	HumanB::setWeapon(Weapon &newWeapon) {
	this->weapon = &newWeapon;
}

// Member Functions
void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their "
		<< this->weapon->getType() << std::endl;
}
