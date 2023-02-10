/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notSed.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:10:12 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 23:25:34 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __notSed_HPP
#define __notSed_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class notSed
{
	private:
		std::string	fileContent;
		std::string	filename;
		std::string	s1;
		std::string	s2;

	public:
		// Constructors
			notSed(std::string filename);

		// Destructors
			~notSed();

		// Getters
		std::string	getFilename(void);
		std::string getS1(void);
		std::string getS2(void);

		// Setters
		void		setFilename(std::string newName);
		void		setS1(std::string string);
		void		setS2(std::string string);

		// Member Functions
		bool		checkIfFileExist(void);
		void		openInFile(std::ifstream &inFile);
		void		closeInFile(std::ifstream &inFile);
		void		createAndOpenOutfile(std::ofstream &outFile);
		void		closeOutFile(std::ofstream &outFile);
		void		replaceStrings(std::ofstream &outFile);
		void		takeFileContent(std::ifstream &inFile);
		void		readInputFileAndReplaceS1WithS2(std::ifstream &inFile, std::ofstream &outFile);
};

#endif //__notSed_HPP
