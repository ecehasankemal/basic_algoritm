int	max(int *tab, unsigned int len)
{
	int	iter;
	int	result;

	iter = 0;
	result = tab[iter];

	while (iter < len)
	{
		if (result < tab[iter])
			result = tab[iter];
		iter++;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	int	a[] = {5, 3, 4, 1, 7};
	int	len = 5;
	printf("%d\n", max(a, len));
}*/
