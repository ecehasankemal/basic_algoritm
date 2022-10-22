#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 'A' && str[iter] <= 'Z')
			str[iter] += 32;
		if ((str[iter] >= 'a' && str[iter] <= 'z') &&
		(str[iter + 1] == ' ' || str[iter + 1] == '\t' ||
		str[iter + 1] == '\0'))
			str[iter] -= 32;
		write(1, &str[iter], 1);
		iter++;
	}
}

int	main(int ac, char **av)
{
	int	iter;

	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		iter = 1;
		while (iter <= ac)
		{
			rstr_capitalizer(av[iter]);
			write(1, "\n", 1);
			iter++;
		}
	}
	return (0);
}
