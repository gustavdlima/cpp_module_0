/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Application.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:42:58 by gusalves          #+#    #+#             */
/*   Updated: 2023/01/05 06:59:46 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Application.hpp"
#include <fstream>

Application::Application(std::string file) : filename(file) {

}

Application::~Application() {

}

std::string Application::getFilename(void) {
	return (this->filename);
}

std::string Application::getS1(void) {
	return (this->s1);
}

std::string Application::getS2(void) {
	return (this->s2);
}

void Application::setFilename(std::string newName) {
	this->filename = newName;
}

void Application::setS1(std::string string) {
	this->s1 = string;
}

void Application::setS2(std::string string) {
	this->s2 = string;
}

bool Application::checkIfFileExist(void) {
	std::ifstream file(this->filename.c_str());

	return file.good();
}

void Application::openInFile(std::ifstream &inFile) {
	inFile.open(this->filename.data());
}

void Application::closeInFile(std::ifstream &inFile) {
	inFile.close();
}

void Application::createAndOpenOutfile(std::ofstream &outFile) {
	std::string		newFileName = ".replace";

	newFileName = this->filename + newFileName;
	outFile.open(newFileName.data());
}

void Application::closeOutFile(std::ofstream &outFile) {
	outFile.close();
}

void Application::readInputFileAndReplaceS1WithS2(std::ifstream &inFile, std::ofstream &outFile) {
	std::string	buffer;

	while (std::getline(inFile, buffer)) {
			if (buffer == this->s1)
				outFile << this->s2 << std::endl;
			else
				outFile << buffer << std::endl;
	}
}
