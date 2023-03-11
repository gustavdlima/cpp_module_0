#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

template <typename T>
class MyException {

	public:
		class ValueNotFoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

template<typename T>
void easyFind(T &intContainer, int valueToFind);

# include "easyFind.tpp"

#endif
