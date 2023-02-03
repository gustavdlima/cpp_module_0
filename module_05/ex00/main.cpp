/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:18:43 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/02 23:42:56 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	norm("norm");

	std::cout << norm.getName() << std::endl;
}
