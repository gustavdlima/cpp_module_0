/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Application.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:10:12 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/05 06:59:13 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Application_HPP
#define __Application_HPP

#include <iostream>
#include <fstream>
#include <string>

class Application {
	private:
		std::string	filename;
		std::string	s1;
		std::string	s2;

	public:
					Application(std::string filename);
					~Application();

		std::string	getFilename(void);
		std::string getS1(void);
		std::string getS2(void);

		void		setFilename(std::string newName);
		void		setS1(std::string string);
		void		setS2(std::string string);

		bool			checkIfFileExist(void);
		void			openInFile(std::ifstream &inFile);
		void			closeInFile(std::ifstream &inFile);
		void			createAndOpenOutfile(std::ofstream &outFile);
		void			closeOutFile(std::ofstream &outFile);
		void			readInputFileAndReplaceS1WithS2(std::ifstream &inFile, std::ofstream &outFile);
};

#endif //__Application_HPP
