#include <unistd.h>

void	last_word(char *str)
{
	int	iter;
	int	dop;

	iter = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] == ' ' && str[iter + 1] >= 33 && str[iter + 1] <= 126)
			dop = iter + 1;
		iter++;
	}
	while (str[dop] >= 33 && str[dop] <= 126)
	{
		write(1, &str[dop], 1);
		dop++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	write(1, "\n", 1);
}
