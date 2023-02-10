/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:00:12 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/10 18:30:00 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include "notSed.hpp"

int main(int argc, char **argv) {
	notSed			app("Teste");
	std::string		buffer;
	std::string		newFileName = ".replace";
	std::ifstream	inFile;
	std::ofstream	outFile;

	if (argc != 4)
	{
		std::cout << "invalid arguments! After ./sedIsForLosers try 3 arguments like: file string1 string2" << std::endl;
		return 2;
	}
	app.setFilename(std::string(argv[1]).append(""));
	app.setS1(std::string(argv[2]).append(""));
	app.setS2(std::string(argv[3]).append(""));
	if (app.checkIfFileExist())
	{
		app.openInFile(inFile);
		app.createAndOpenOutfile(outFile);
		app.readInputFileAndReplaceS1WithS2(inFile, outFile);
		app.closeInFile(inFile);
		app.closeOutFile(outFile);
	} else {
		std::cout << "invalid file!" << std::endl;
		return 3;
	}
	return 0;
}
