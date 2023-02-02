#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat();

		// Destructor
		~WrongCat();

		void	setType(std::string type);
		void	makeSound() const;

	private:
		std::string	type;

};

#endif
