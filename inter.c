#include <unistd.h>

int	ft_check(char *str, char c, int pos)
{
	int	iter;

	iter = 0;
	while (iter < pos)
	{
		if (str[iter] == c)
			return (0);
		iter++;
	}
	return (1);
}

void	inter(char *str, char *ptr)
{
	int	iter;
	int	dop;

	iter = 0;
	while (str[iter] != '\0')
	{
		dop = 0;
		while (ptr[dop] != '\0')
		{
			if ((str[iter] == ptr[dop]) && (ft_check(str, str[iter], iter) == 1))
			{
				write(1, &str[iter], 1);
				break ;
			}
			dop++;
		}
		iter++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}
