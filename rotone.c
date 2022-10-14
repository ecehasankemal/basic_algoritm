#include <unistd.h>

void	rot_one(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 'a' && str[iter] < 'z')
			str[iter] += 1;
		else if (str[iter] == 'z')
			str[iter] -= 25;
		else if (str[iter] >= 'A' && str[iter] < 'Z')
			str[iter] += 1;
		else if (str[iter] == 'Z')
			str[iter] -= 25;
		write(1, &str[iter], 1);
		iter++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rot_one(av[1]);
	}
	write(1, "\n", 1);
}
