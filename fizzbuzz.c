#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
void	fizzbuzz(void)
{
	int	count;

	count = 1;
	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (count % 5 == 0)
			write(1, "buzz", 4);
		else if (count % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(count);
		write(1, "\n", 1);
		count++;
	}
}
int	main(void)
{
	fizzbuzz();
}
