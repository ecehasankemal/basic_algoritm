#include <unistd.h>

void	ul_str(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 'a' && str[iter] <= 'z')
			str[iter] -= 32;
		else if (str[iter] >= 'A' && str[iter] <= 'Z')
			str[iter] += 32;
		write(1, &str[iter], 1);
		iter++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ul_str(av[1]);
	}
	write(1, "\n", 1);
}
