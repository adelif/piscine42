#include <stdio.h>
#include <stdlib.h>

int     ft_recursive_power(int nb, int power)
{
	int resultat;

        if (power <= 0)
        {
                if (power == 0)
                        return (1);
                return (0);
        }
	if (power >= 0)
		resultat = nb * ft_recursive_power(nb, power - 1);
       return (resultat);	
}

int     main(int ac, char **av)
{
        printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
        return (0);
}

