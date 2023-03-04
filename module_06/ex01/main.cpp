/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/03/04 01:07:40 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
 #include <stdint.h>
# include "Data.hpp"

int	main()
{

	{
		Data *voidPtr;

		Data ptr = Data(5);
		std::cout << ptr << std::endl;

		uintptr_t	serial = ptr.serialize(&ptr);
		std::cout << "Serial: " << serial << std::endl;

		voidPtr = ptr.deserialize(serial);
		std::cout << *voidPtr << std::endl;

	}
	return 0;
};
