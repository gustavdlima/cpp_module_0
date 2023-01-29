#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) : name(newName)
{
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	(void) assign;
	return *this;
}

// Getters
std::string ClapTrap::getName()
{
	return this->name;
}


// Setters
void		ClapTrap::setName(std::string  newName) {
	this->name = newName;
}


// Others
void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap "<< this->name << KRED " attacks " << target << " causing " << this->attackDamage << RST << " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	(void)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
}
