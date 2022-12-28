/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:40:11 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 20:25:59 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP
#define __WEAPON_HPP

#include <string>

class Weapon {
	public:
					Weapon(const std::string type);
					Weapon(void);
					~Weapon(void);
		void		setType(const std::string type);
		std::string	&getType(void);

	private:
		std::string	type;

};

#endif
