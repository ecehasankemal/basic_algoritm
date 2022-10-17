#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	int	count;
	
	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

void	wdmatch(char *str, char *ptr)
{
	int	iter;
	int	dop;
	int	value;
	
	iter = 0;
	value = 0;
	dop = 0;
	while (str[iter] != '\0')
	{
		while (ptr[dop] != '\0')
		{
			if (str[iter] == ptr[dop])
			{
				value++;
				break ;
			}
			dop++;
		}
		iter++;
	}
	if (value == ft_strlen(str))
		ft_putstr(str);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	write(1, "\n", 1);
}
