#include <unistd.h>

void	rot_13(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 'a' && str[iter] <= 'm')
			str[iter] += 13;
		else if (str[iter] > 'm' && str[iter] <= 'z')
			str[iter] -= 13;
		else if (str[iter] >= 'A' && str[iter] <= 'M')
			str[iter] += 13;
		else if (str[iter] > 'M' && str[iter] <= 'Z')
			str[iter] -= 13;
		write(1, &str[iter], 1);
		iter++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rot_13(av[1]);
	}
	write(1, "\n", 1);
}
