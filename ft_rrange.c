#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	iter;
	int	*result;

	if (start > end)
		iter = start - end;
	else
		iter = end - start;
	result = malloc(sizeof(int) * iter + 1);
	if (result == NULL)
		return (NULL);
	while (iter >= 0)
	{
		result[iter] = start;
		if (start > end)
			start--;
		else
			start++;
		iter--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	*res;
	int	iter;

	iter = 0;
	res = ft_rrange(3, 5);
	while (iter < 3)
	{
		printf("%d ", res[iter]);
		iter++;
	}
}*/
