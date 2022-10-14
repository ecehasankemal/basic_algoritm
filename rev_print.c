#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count])
		count++;
	return (count);
}

void	rev_print(char *str)
{
	int	iter;

	iter = ft_strlen(str) - 1;
	while(iter >= 0)
	{
		write(1, &str[iter], 1);
		iter--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_print(av[1]);
	}
	write(1, "\n", 1);
}
