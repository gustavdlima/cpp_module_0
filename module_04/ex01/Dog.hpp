#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "colors.hpp"
# include "Brain.hpp"



class Dog : public Animal
{
	public:
		// Constructors
		Dog();

		// Destructor
		~Dog();
		void	makeSound() const;

	private:
		std::string	type;
		Brain*	brain;

};

#endif
