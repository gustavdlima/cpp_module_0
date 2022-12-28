/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:44:02 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 20:27:31 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__HPP
#define __HUMANA__HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

	public:
					HumanA(std::string newName, Weapon &newWeapon);
					~HumanA(void);

		Weapon		&getWeapon(void);
		void		setWeapon(Weapon &newWeapon);

		void		attack(void);

	private:
		std::string	name;
		Weapon	&weapon;

};

#endif
