int	ft_strlen(char *str)
{
	int	count;
	
	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	char	*a = "hece";
	int	len;

	len = ft_strlen(a);
	printf("%d", len);
}*/
