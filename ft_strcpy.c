char	*ft_strcpy(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s2[count] != '\0')
	{
		s1[count] = s2[count];
		count++;
	}
	s1[count] = '\0';
	return (s1);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[] = "he";
	char	src[] = "hece";

	printf("%s", ft_strcpy(dest, src));
}*/
