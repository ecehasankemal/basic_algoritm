char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	iter;
	int	dop;

	iter = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[iter] != '\0')
	{
		dop = 0;
		while (s2[dop] != '\0')
		{
			if (s1[iter] == s2[dop])
				return ((char *)&s1[iter]);
			dop++;
		}
		iter++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "geeksforgeeks";
	char	s2[] = "app";
	char	s3[] = "kite";

	char	s4[] = "geeksforgeeks";
	char	s5[] = "app";
	char	s6[] = "kite";
	char	*r;
	char	*t;

	r = strpbrk(s1, s3);
	if (r != 0)
		printf("r = %c\n", *r);

	t = ft_strpbrk(s4, s6);
	if (t != 0)
		printf("t = %c\n", *t);
}*/
