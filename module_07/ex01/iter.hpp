#ifndef FUNCTIONSTEMPLATE_HPP
# define FUNCTIONSTEMPLATE_HPP

# include <iostream>
# include <string>

template<typename T>
void iter(T *array, int array_lenght, void (*func)(T&)) {
	for (int i = 0; i < array_lenght; i++) {
		func(array[i]);
	}
}

template<typename T>
void	printValue(T &value) {
	std::cout << value << std::endl;
}

#endif
