#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (av[0] && ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	if (ac > 1)
	{
		while (i < ac)
		{
			while (av[i][j])
			{
				std::cout << (char) std::toupper (av[i][j]);
				j++;
			}
			j = 0;
			i++;
		}
	}
}