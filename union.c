#include <unistd.h>

int	ft_check(char *str, char c, int pos)
{
	int	count;

	count = 0;
	while (count < pos)
	{
		if (str[count] == c)
			return (0);
		count++;

	}
	return (1);
}

void	ft_union(char *str, char *ptr)
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
	dop = 0;
	while (ptr[dop] != '\0')
	{
		if ((ft_check(str, ptr[dop], iter) == 1) && (ft_check(ptr, ptr[dop], dop) == 1))
			write(1, &ptr[dop], 1);
		dop++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
}
