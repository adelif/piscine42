#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		ft_putchar(*str);
		(*str)++;
	}
}

int	main(int arc, char **av)
{
	ft_putstr(av[1]);
	return (0);
}
