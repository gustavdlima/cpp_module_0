#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	std::cout << FYEL("Default Constructor called of ClapTrap") << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName) : name(newName)
{
	std::cout << FBLU("Default Constructor called of ClapTrap") << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	(void) copy;
	std::cout << "Copy Constructor called of ClapTrap" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << FRED("Destructor called of ClapTrap") << std::endl;
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

int ClapTrap::getHitPoints()
{
	return this->hitPoints;
}

int ClapTrap::getEnergyPoints()
{
	return this->energyPoints;
}

int ClapTrap::getAttackDamage()
{
	return this->attackDamage;
}


// Setters
void ClapTrap::setName(std::string  newName)
{
	this->name = newName;
}

void ClapTrap::setHitPoints(int  number)
{
	this->hitPoints = number;
}

void ClapTrap::setEnergyPoints(int  number)
{
	this->energyPoints = number;
}

void ClapTrap::setAttackDamage(int  number)
{
	this->attackDamage = number;
}

// Others
void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << FRED("you're dead") << std::endl;
		return ;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << FBLU("you don't have enough energy") << std::endl;
		return ;
	}
	std::cout << KCYN << "ClapTrap " << this->name << RST << FRED(" attacks ") << KMAG << target << RST << " causing " << this->attackDamage << " points of damage!" << std::endl;
	std::cout << FCYN("-1 energy point.") << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << KRED << "losed " << amount << " points of damage!" << RST << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << FRED("you're dead") << std::endl;
		return ;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << FBLU("you don't have enough energy") << std::endl;
		return ;
	}
	std::cout << KGRN << "healed " << amount << " hit points." << RST << std::endl;
	std::cout << FCYN("-1 energy point.") << std::endl;
	this->hitPoints += amount;
	this->energyPoints -= 1;
}
