int	ft_atoi(const char *str)
{
	int	iter;
	int	result;
	int	dop;

	iter = 0;
	result = 0;
	dop = 1;
	while ((str[iter] >= '\t' && str[iter] <= '\r') || str[iter] == ' ')
		iter++;
	if (str[iter] == '-' || str[iter] == '+')
	{
		if (str[iter] == '-')
		{
			dop *= -1;
		}
		iter++;
	}
	while (str[iter] >= '0' && str[iter] <= '9' && str[iter] != '\0')
	{
		result = ((str[iter] - '0') + (result * 10));
		iter++;
	}
	return (dop * result);
}

/*#include <stdio.h>	
int	main(void)
{
	printf("%d", ft_atoi("-125"));
}*/
