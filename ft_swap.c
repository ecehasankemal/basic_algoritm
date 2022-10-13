void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	*aptr;
	int	*bptr;
	int	resulta;
	int	resultb;

	a = 5;
	b = 3;
	aptr = &a;
	bptr = &b;
	ft_swap(aptr, bptr);
	resulta = *aptr;
	resultb = *bptr;
	printf("%d, %d", resulta, resultb);
}*/
