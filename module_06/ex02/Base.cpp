#include "Base.hpp"

// Destructor
Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}

Base * Base::generate(void)
{
	srand(time(0));
	int random = rand() % 3;

	switch (random)
	{
		case 0:
			return new A();
		case 1:
			return new B();
			break;
		case 2:
			return new C();
			break;
	}
	return NULL;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown pointer" << std::endl;
}

void Base::identify(Base& p)
{
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception &e) {
		try {
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::exception &e) {
			try {
				C c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::exception &e) {
				std::cerr << "Unknown reference" << std::endl;
			}
		}
	}
}
