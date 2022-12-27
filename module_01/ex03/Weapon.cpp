/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:37:30 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 00:42:46 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

void	Weapon::setType(std::string type) {
	this->type = type;
}

std::string	Weapon::getType(void) {
	return(this->type);
}
