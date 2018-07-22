#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		*str++;
		i++;
	}
	printf("%d", i);
	return (i);
}

int	main(int ac, char **av)
{
	ft_strlen(av[1]);
	return (0);
}
