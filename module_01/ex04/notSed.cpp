/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notSed.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:42:58 by gusalves          #+#    #+#             */
/*   Updated: 2023/02/06 23:17:42 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notSed.hpp"
#include <fstream>

// Constructors
notSed::notSed(std::string file) : filename(file)
{

}

// Destructors
notSed::~notSed()
{

}

// Getters
std::string notSed::getFilename(void)
{
	return (this->filename);
}

std::string notSed::getS1(void)
{
	return (this->s1);
}

std::string notSed::getS2(void) {
	return (this->s2);
}

// Setters
void notSed::setFilename(std::string newName)
{
	this->filename = newName;
}

void notSed::setS1(std::string string) {
	this->s1 = string;
}

void notSed::setS2(std::string string)
{
	this->s2 = string;
}

// Member Functions
bool notSed::checkIfFileExist(void)
{
	std::ifstream file(this->filename.c_str());

	return file.good();
}

void notSed::openInFile(std::ifstream &inFile)
{
	inFile.open(this->filename.data());
}

void notSed::closeInFile(std::ifstream &inFile)
{
	inFile.close();
}

void notSed::createAndOpenOutfile(std::ofstream &outFile)
{
	std::string		newFileName = ".replace";

	newFileName = this->filename + newFileName;
	outFile.open(newFileName.data());
}

void notSed::closeOutFile(std::ofstream &outFile)
{
	outFile.close();
}

void notSed::takeFileContent(std::ifstream &inFile)
{
	std::stringstream	buffer;
	buffer << inFile.rdbuf();
	this->fileContent = buffer.str();
}

void	notSed::replaceStrings(std::ofstream &outFile)
{
	std::string newContent;
	int	i = 0;
	while (this->fileContent[i])
	{
		if (this->fileContent.substr(i, getS1().length()) == getS1())
		{
			newContent += s2;
			std::cout << newContent << std::endl;
			i += s1.length();
		}
		else
		{
			newContent += this->fileContent[i];
			i++;
		}
	}
	outFile << newContent;
}

void notSed::readInputFileAndReplaceS1WithS2(std::ifstream &inFile, std::ofstream &outFile)
{
	takeFileContent(inFile);
	replaceStrings(outFile);
}

