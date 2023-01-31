#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "colors.hpp"

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap(std::string newName);

		// Destructor
		~FragTrap();

		void highFivesGuys(void);

	private:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
};

#endif
