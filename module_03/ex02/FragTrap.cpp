#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(std::string newName) : ClapTrap(newName)
{
	std::cout << KGRN << "Default Constructor called of FragTrap" << RST<< std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->name = newName;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << FBLU("Give a HighFive to increase motivation") << std::endl;
}
