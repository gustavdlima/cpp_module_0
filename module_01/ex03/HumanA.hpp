/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:44:02 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 22:36:07 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__HPP
#define __HUMANA__HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

	public:
		// Constructors
					HumanA(std::string newName, Weapon &newWeapon);

		// Destructors
					~HumanA(void);

		// Member Functions
		Weapon		&getWeapon(void);
		void		attack(void);

		// Setters
		void		setWeapon(Weapon &newWeapon);

	private:
		std::string	name;
		Weapon	&weapon;

};

#endif
