/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:40:11 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/09 17:31:17 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <string>

class Weapon {
	public:
		// Constructors
					Weapon(const std::string type);
					Weapon(void);
		// Destructors
					~Weapon(void);
		// Getters
		const std::string	&getType(void);

		// Setters
		void		setType(std::string type);

	private:
		std::string	type;

};

#endif
