#ifndef	__ZOMBIE_HPP
#define	__ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;

	public:
		// Constructors
					Zombie();
					Zombie(std::string name);

		// Destructors
					~Zombie();

		// Getters
		std::string getName(void);

		// Setters
		void		setName(std::string name);

		// Member Functions
		void		announce(void);
		void		deleteZombie(Zombie *zombie);
		void		randomChump(std::string name);
		Zombie*		newZombie(std::string name);

};

#endif
