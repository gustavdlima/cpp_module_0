#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include "colors.hpp"

class ClapTrap
{
	public:
		// Constructors
					ClapTrap();
					ClapTrap(std::string name);
					ClapTrap(const ClapTrap &copy);

		// Destructor
					~ClapTrap();

		// Operators
		ClapTrap & operator=(const ClapTrap &assign);

		// Getters
		std::string getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();

		//Setters
		void		setName(std::string  newName);
		void		setHitPoints(int  newName);
		void		setEnergyPoints(int  number);
		void		setAttackDamage(int  number);

		// others
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

};

#endif
