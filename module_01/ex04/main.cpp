/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:00:12 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/05 06:58:12 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include "Application.hpp"

int main(int argc, char **argv) {
	Application		app("Teste");
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
	if (app.checkIfFileExist()) {
		// std::cout << "o arquivo existe!" << std::endl;
		// std::cout << app.getFilename() << std::endl;
		// std::cout << app.getS1() << std::endl;
		// std::cout << app.getS2() << std::endl;
		app.openInFile(inFile);
		app.createAndOpenOutfile(outFile);
		app.readInputFileAndReplaceS1WithS2(inFile, outFile);
		app.closeInFile(inFile);
		app.closeOutFile(outFile);
	} else {
		std::cout << "invalid file!" << std::endl;
		return 3;
	}
	// app.filename.append(std::string(argv[1]).append(""));
	// app.s1.append(std::string(argv[2]).append(""));
	// app.s2.append(std::string(argv[3]).append(""));


	// if(inFile.is_open()) {
	// 	while (std::getline(inFile, buffer)) {
	// 		if (buffer == data.s1)
	// 		{
	// 			outFile << data.s2 << std::endl;
	// 			// std::cout << data.s2 << std::endl;
	// 		}
	// 		else
	// 		{
	// 			// std::cout << buffer << std::endl;
	// 			outFile << buffer << std::endl;
	// 		}
	// 	}
	// }else {
	// 	std::cout << "invalid file!" << std::endl;
	// }

	// // std::cout << data.filename << std::endl;
	// // std::cout << data.s1 << std::endl;
	// // std::cout << data.s2 << std::endl;
	// inFile.close();
	// outFile.close();
	return 0;
}
