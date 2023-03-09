#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"


template <typename T>
Array<T>::Array() : _array(new T[0]) {}

#endif
