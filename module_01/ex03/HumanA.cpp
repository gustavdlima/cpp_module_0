/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 01:18:27 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 02:37:25 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, std::string weaponType) : name(name) {
	this->sword.setType("Sword");
}

HumanA::HumanA() {

}

HumanA::~HumanA() {

}

void	HumanA::attack(void) {
	std::cout << this->name << "attacks with their "
		<< this->sword.getType() << std::endl;

}
