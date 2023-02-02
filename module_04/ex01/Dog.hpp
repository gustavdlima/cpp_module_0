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

		Brain	*getBrain();
		void	setBrain(Brain *newBrain);
		void	makeSound() const;

		// Operator
    	Dog& operator=(Dog const& obj);;

	private:
		std::string	type;
		Brain*	brain;

};

#endif
