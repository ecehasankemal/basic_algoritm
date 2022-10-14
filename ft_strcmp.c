int	ft_strcmp(char *s1, char *s2)
{
	int	iter;

	iter = 0;
	while (s1[iter] != '\0' && s2[iter] != '\0' && s1[iter] == s2[iter])
		iter++;
	return (s1[iter] - s2[iter]);
}

/*#include <stdio.h>
int	main(void)
{
	char	a[] = "hece";
	char	b[] = "hace";
	printf("%d", ft_strcmp(a, b));
}*/
