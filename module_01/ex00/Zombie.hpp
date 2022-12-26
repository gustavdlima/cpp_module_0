#ifndef	__ZOMBIE_HPP
#define	__ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	name;

	public:
					Zombie(std::string name);
					~Zombie();
		void		announce(void);
		void		deleteZombie(Zombie *zombie);
		void		randomChump(std::string name);
		Zombie*		newZombie(std::string name);

};

#endif
