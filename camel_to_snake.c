#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		write (1, &str[iter], 1);
		iter++;
	}
}

void	camel_to_snake(char *str)
{
	int	iter;
	int	index;
	int	value;
	char	*string;

	iter = 0;
	value = 0;
	index = 0;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 65 && str[iter] <= 90)
			value++;
		iter++;
	}
	iter = 0;
	string = (char *)malloc(sizeof(char) * (value + ft_strlen(str)));
	while (str[iter] != '\0')
	{
		if(str[iter] >= 65 && str[iter] <= 90)
		{
			string[index] = '_';
			string[++index] = str[iter] + 32;
		}
		else
			string[index] = str[iter];
		iter++;
		index++;
	}
	ft_putstr(string);
	free(string);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		camel_to_snake(av[1]);
	}
	write (1, "\n", 1);
}
