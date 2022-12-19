#include <string>
#include "Contact.hpp"


////////////////////////////////////////////////////////// getters
std::string Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string Contact::getLastName(void) {
	return (this->_lastName);
}

std::string Contact::getNickName(void) {
	return (this->_nickName);
}

std::string Contact::getNumber(void) {
	return (this->_number);
}

std::string Contact::getDarkestSecret(void) {
	return (this->_darkestSecret);
}

////////////////////////////////////////////////////////// setters


void Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	this->_nickName = nickName;
}

void Contact::setNumber(std::string number) {
	this->_number = number;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}
