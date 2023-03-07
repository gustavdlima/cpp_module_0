/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:09:46 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/06 21:18:37 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Base.hpp"

int	main()
{
	{
		// generate Method and identify Method Test
		Base *base = new Base();
		Base *randomBase = base->generate();
		base->identify(randomBase);
		delete base;
	}
	{
		// unknown pointer Test
		Base *base = new Base();
		Base *randomBase = NULL;
		base->identify(randomBase);
		delete base;
	}
	return 0;
};
