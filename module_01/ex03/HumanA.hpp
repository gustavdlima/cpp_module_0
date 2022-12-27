/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:44:02 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 02:36:46 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {

	public:
		void	attack(void);
		HumanA(std::string name, std::string weaponType);
		HumanA::HumanA();
		~HumanA();

	private:
		Weapon	sword;
		std::string	name;

};
