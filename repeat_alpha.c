#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	count;
	int	b;
	int	k;
	
	count = 0;
	b = 0;
	k = 0;
	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			while (k < str[count] - 96)
			{
				write(1, &str[count], 1);
				k++;
			}
			k = 0;
			count++;
		}
		else if (str[count] >= 65 && str[count] <= 90)
		{
			while (b < str[count] - 64)
			{
				write(1, &str[count], 1);
				b++;
			}
			b = 0;
			count++;
		}
		else
		{
			write(1, &str[count], 1);
			count++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n", 1);
}
