/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 15:25:40 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 22:33:56 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructors
Zombie::Zombie() {
}

Zombie::Zombie(std::string name) : name(name) {
}

// Destructors
Zombie::~Zombie() {
	std::cout << this->name << " is going to the hole!" << std::endl;
}

// Getters
std::string Zombie::getName(void) {
	return(this->name);
}

// Setters
void Zombie::setName(std::string name) {
	this->name = name;
}

// Member Functions
void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
