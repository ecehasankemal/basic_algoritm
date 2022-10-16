int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strrev(char *str)
{
	int	iter;
	int	size;
	int	temp;

	iter = 0;
	size = ft_strlen(str);
	while (iter < size)
	{
		temp = str[iter];
		str[iter] = str[size - 1];
		str[size - 1] = temp;
		size--;
		iter++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "hece";

	printf("%s\n", str);
	printf("%s", ft_strrev(str));
}

// 3 1
// 1 2
// 2 3*/
