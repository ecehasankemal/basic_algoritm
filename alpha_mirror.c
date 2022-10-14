#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 'A' && str[iter] <= 'Z')
		{
			str[iter] = 'Z' - str[iter] + 'A';
		}
		else if (str[iter] >= 'a' && str[iter] <= 'z')
		{
			str[iter] = 'z' - str[iter] + 'a';
		}
		write(1, &str[iter], 1);
		iter++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		alpha_mirror(av[1]);
	}
	write(1, "\n", 1);
}
