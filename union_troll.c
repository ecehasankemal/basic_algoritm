#include <unistd.h>

void ft_union(char *str, char *ptr)
{
  int i;
  int c[256];

  i = -1;
  while (++i < 257)
    c[i] = 0;
  i = -1;
  while (str[++i])
  {
    if (c[(int) str[i]] == 0)
    {
      write(1, &str[i], 1);
      c[(int) str[i]] = 1;
    }
  }
  i = -1;
  while (ptr[++i])
  {
    if (c[(int) ptr[i]] == 0)
    {
      write(1, &ptr[i], 1);
      c[(int) ptr[i]] = 1;
    }
  }
}

int main(int ac, char **av)
{
        if (ac == 3)
        {
                ft_union(av[1], av[2]);
        }
        write(1, "\n", 1);
    return (0);
}
