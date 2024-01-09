#include <iostream>

int	main(int argc, char *argv[])
{
	int	i;
	int	y;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i] != NULL)
		{
			y = 0;
			while (argv[i][y] != '\0')
			{
				std::cout << (char)std::toupper(argv[i][y]);
				y++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
