#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
 #include <stdint.h>

class Data
{
	public:
		// Constructors
		Data();
		Data(int value);
		Data(const Data &copy);

		// Destructor
		~Data();

		// Operators
		Data & operator=(const Data &assign);

		int	getValue(void);

		//Methods
		uintptr_t	serialize(Data* ptr);
		Data*		 deserialize(uintptr_t raw);

	private:
		int	value;

};

std::ostream &operator<<(std::ostream& out, Data& object);

#endif
