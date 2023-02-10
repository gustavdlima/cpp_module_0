#ifndef	__ZOMBIE_HPP
#define	__ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;

	public:
		// Constructors
					Zombie(std::string name);

		// Destructors
					~Zombie();

		// Member Functions
		void		announce(void);
		void		randomChump(std::string name);
		Zombie*		newZombie(std::string name);

};

#endif
