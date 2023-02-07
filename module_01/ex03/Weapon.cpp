/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:37:30 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 22:39:52 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructors
Weapon::Weapon(const std::string type) : type(type) {
}

Weapon::Weapon() {

}

// Destructors
Weapon::~Weapon() {

}

// Getter
std::string	&Weapon::getType(void) {
	return(this->type);
}

// Setters
void	Weapon::setType(std::string type) {
	this->type = type;
}
