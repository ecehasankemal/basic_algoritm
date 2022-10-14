#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	search_and_replace(char *str, char *a, char *b)
{
	int	iter;
	int	ai;
	int	bi;
	
	iter = 0;
	ai = 0;
	bi = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] == a[ai])
			str[iter] = b[bi];
		write(1, &str[iter], 1);
		iter++;
	}
}

int	main(int ac, char **av)
{

	if (ac == 4 && (ft_strlen(av[2]) == 1) && (ft_strlen(av[3]) == 1))
	{
		search_and_replace(av[1], av[2], av[3]);
	}
	write(1, "\n", 1);
}
