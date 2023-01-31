#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "colors.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap(std::string newName);


		// Destructor
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();

	private:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
};

#endif
