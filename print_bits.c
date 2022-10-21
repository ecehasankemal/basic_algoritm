#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	iter;
	char	bit;

	iter = 8;
	while (iter--)
	{
		bit = (octet >> iter & 1) + '0';
		write(1, &bit, 1);
	}
}

/*int	main(void)
{
	char	c;

	c = 'a';
	print_bits(c);
}*/
