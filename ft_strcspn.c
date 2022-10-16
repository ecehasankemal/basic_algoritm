#include <stdlib.h>
size_t  ft_strcspn(const char *s, const char *reject)
{
	int	iter;
	int	dop;

	iter = 0;
	while (s[iter] != '\0')
	{
		dop = 0;
		while (reject[dop] != '\0')
		{
			if (s[iter] == reject[dop])
				return (iter);
			dop++;
		}
		iter++;
	}
}

/*#include <stdio.h>
#include <string.h>

int main( void )
{
    const char cdizi1[] = "Merhaba";
    const char cdizi2[] = "Mer";
    int ret;
    int	ret2;

    ret = strcspn(cdizi1, cdizi2);
    ret2 = ft_strcspn(cdizi1, cdizi2);

    printf("Bulunan karakterin indeks değeri: %d\n", ret);
    printf("Bulunan karakterin indeks değeri: %d\n", ret2);

    return (0);
}*/
