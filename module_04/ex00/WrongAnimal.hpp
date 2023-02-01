#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal();

		// Destructor
		~WrongAnimal();


		std::string	getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	type;

};

#endif
