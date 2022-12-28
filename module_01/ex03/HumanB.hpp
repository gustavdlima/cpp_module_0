/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:44:18 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 20:35:17 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__HPP
#define __HUMANB__HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {

	public:
					HumanB(std::string newName);
					~HumanB(void);

		Weapon		&getWeapon(void);
		void		setWeapon(Weapon &newWeapon);

		void	attack(void);

	private:
		std::string	name;
		Weapon	*weapon;

};

#endif
