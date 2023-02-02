#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		std::string getIdeas(int index);

		void	setIdeias(std::string ideia);


		// Destructor
		virtual ~Brain();

		// Operators
		Brain & operator=(const Brain &obj);

	private:
		std::string	ideas[100];
		int index;
};

#endif
