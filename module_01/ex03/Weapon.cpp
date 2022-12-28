/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:37:30 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 20:55:34 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : type(type) {
}

Weapon::Weapon() {

}

Weapon::~Weapon() {

}


void	Weapon::setType(const std::string type) {
	this->type = type;
}

std::string	&Weapon::getType(void) {
	return(this->type);
}
