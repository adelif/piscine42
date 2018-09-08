#include <stdio.h>
#include <stdlib.h>

int			ft_atoi(char *str)
{
	int		i;
	int		a;
	int		neg;

	i = 0;
	a = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	if (neg == -1)
		return (-a);
	return (a);
}

int			main(int ac, char *av[])
{
	printf("---> atoi : %d\n", atoi(av[1]));
	printf("---> ft_atoi : %d\n", ft_atoi(av[2]));
	return (0);
}
