#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j] != '\0'; j++)
		{
			if (islower(argv[i][j]))
				argv[i][j] = toupper(argv[i][j]);
		}
		std::cout << argv[i];
	}
	std::cout << "\n";
	return 0;
}
