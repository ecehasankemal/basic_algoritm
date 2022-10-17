#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	snake_to_calculate(char *str)
{
	int	iter;
	int	result;
	while (str[iter] != '\0')
	{
		if (str[iter] == '_')
			result++;
		iter++;
	}
	return (result);
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

void	snake_to_camel(char *str)
{
	int	iter;
	int	dop;
	int	size;
	char	*string;

	dop = 0;
	iter = 0;
	size = (ft_strlen(str) - snake_to_calculate(str));
	string = (char *)malloc(sizeof(char) * size + 1);
	while (str[iter] != '\0')
	{
		if (str[iter] == '_')
		{
			iter++;
			string[dop] = str[iter] - 32;
		}	
		else
			string[dop] = str[iter];
		iter++;
		dop++;
	}
	ft_putstr(string);
	free(string);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		snake_to_camel(av[1]);
	}
	write(1, "\n", 1);
}
