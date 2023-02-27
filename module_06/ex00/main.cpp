/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/27 15:17:24 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Converter.hpp"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "Too many arguments" << std::endl;
		return 1;
	}
	Converter	input(argv[1]);

	return 0;
};
