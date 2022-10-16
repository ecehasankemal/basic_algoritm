#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int	iter;

	iter = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!string)
		return (0);
	while (src[iter] != '\0')
	{
		string[iter] = src[iter];
		iter++;
	}
	string[iter] = '\0';
	return (string);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str = "hece";
	char	*copy;

	copy = ft_strdup(str);
	printf("%s", copy);
}*/
