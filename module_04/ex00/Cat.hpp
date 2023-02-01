#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "colors.hpp"


class Cat : public Animal
{
	public:
		// Constructors
		Cat();

		// Destructor
		~Cat();

		void	makeSound() const;

		// Operators

	private:
		const std::string	type = "Cat";

};

#endif
