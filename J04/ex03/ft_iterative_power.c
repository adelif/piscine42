#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int resultat;

	i = 1;
	resultat = 1;
	if (power <= 0)
	{
		if (power == 0)
			return (1);
		return (0);
	}
	while (i <= power)
	{
		resultat = resultat * nb; 
		i++;
	}
	return (resultat);
}

int	main(int ac, char **av)
{
	printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
