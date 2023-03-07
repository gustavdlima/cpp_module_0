#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

class Base
{
	public:
		// Destructor
		virtual ~Base();

		// Methods
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
