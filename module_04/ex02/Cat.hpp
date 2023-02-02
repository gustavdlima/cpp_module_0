#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "colors.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
	public:
		// Constructors
		Cat();

		// Destructor
		~Cat();

		Brain	*getBrain();
		void	setBrain(Brain *newBrain);


		void	makeSound() const;

		// Operators
    	Cat& operator=(Cat const& obj);

	private:
		std::string	type;
		Brain*	brain;


};

#endif
