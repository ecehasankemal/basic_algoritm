#include <stdlib.h>

int	*ft_range(int start, int end)
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
		result[iter] = end;
		if (start > end)
			end++;
		else
			end--;
		iter--;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	int	iter;
	int	*res = ft_range(5, 3);

	iter = 0;
	while (iter < 3)
	{
		printf("%d ", res[iter]);
		iter++;
	}
}*/
