/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:32:08 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/26 21:26:18 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main (int argc, char **argv)
{
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j] != '\0'; j++)
		{
			if (islower(argv[i][j]))
				argv[i][j] = toupper(argv[i][j]);
		}
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return 0;
}
