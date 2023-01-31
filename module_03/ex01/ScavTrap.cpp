#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName)
{
	std::cout << FYEL("Default Constructor called of ScavTrap") << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->name = newName;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called of ScavTrap" << std::endl;
}


// Operators
// ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
// {
// 	(void) assign;
// 	return *this;
// }

void ScavTrap::attack(const std::string& target)
{
	this->energyPoints = 1;
	if (this->hitPoints == 0)
	{
		std::cout << FRED("[SCAVTRAP IS DEAD]") << std::endl;
		return ;
	}
	if (this->energyPoints == 0)
	{
		std::cout << FBLU("[OUT OF ENERGY]") << std::endl;
		return ;
	}
	std::cout << KRED << target << RST << " received " << this->attackDamage << " points of damage from " << KCYN << "ScavTrap " << this->name << RST << std::endl;
	std::cout << FCYN("-1 energy point.") << std::endl;
	this->energyPoints--;
}

void ScavTrap::guardGate() {
	std::cout << FGRN("ScavTrap is now in Gate keeper mode.") << std::endl;
}
