int	is_power_of_2(unsigned int n)
{
	if (n % 2 == 0)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	value;
	int	count;
	
	value = 12;
	count = 11;
	printf("%d\n", is_power_of_2(value));
	printf("%d\n", is_power_of_2(count));
}*/
