#include <stdlib.h>

char	*ft_strchr(const char *s, char c)
{
	int	iter;

	iter = 0;
	while (s[iter] != '\0')
	{
		if (s[iter] == c)
			return ((char *)&s[iter]);
		iter++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	iter;

	iter = 0;

	while (s[iter] != '\0')
	{
		if (ft_strchr(accept, s[iter]) == 0)
			break ;
		iter++;
	}
	return (iter);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = "Merhaba";
	const char	str2[] = "Mer";
	int		ret;
	int		ret2;

	ret = strspn(str, str2);
	ret2 = ft_strspn(str, str2);
	printf("%d\n", ret);
	printf("%d\n", ret2);
}*/
