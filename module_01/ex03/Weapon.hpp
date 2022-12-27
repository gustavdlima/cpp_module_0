/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:40:11 by gusalves          #+#    #+#             */
/*   Updated: 2022/12/27 00:40:15 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon {
	public:
		void		setType(std::string type);
		std::string	getType(void);

	private:
		std::string	type;

};
