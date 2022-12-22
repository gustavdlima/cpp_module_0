#include <string>
#include "Contact.hpp"

////////////////////////////////////////////////////////// contructor
Contact::Contact() {

}

////////////////////////////////////////////////////////// destructor
Contact::~Contact() {

}

//////////////////////////////////////////////////////////
void		Contact::cleanAllFields(void) {
	this->_firstName.clear();
	this->_lastName.clear();
	this->_nickName.clear();
	this->_number.clear();
	this->_darkestSecret.clear();
}


////////////////////////////////////////////////////////// getters
std::string Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string Contact::getNumber(void) const {
	return (this->_number);
}

std::string Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}

int	Contact::getIndex(void) const {
	return (this->_index);
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

void Contact::setIndex(int i) {
	this->_index = i;
}

////////////////////////////////////////////////////////// utils

