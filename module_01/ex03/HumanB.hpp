/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:44:18 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 22:36:53 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__HPP
#define __HUMANB__HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {

	public:
		// Constructors
					HumanB(std::string newName);
		// Destructors
					~HumanB(void);
		// Member Functions
		Weapon		&getWeapon(void);
		void	attack(void);

		// Setters
		void		setWeapon(Weapon &newWeapon);

	private:
		std::string	name;
		Weapon	*weapon;

};

#endif
