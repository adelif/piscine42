#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int resultat;

	if (nb <= 0 || nb > 12)
	{
		if (nb == 0)
			return (1);
		return (0);
	}
	resultat = 1;
	while (nb > 1)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}

int	main()
{
	printf("%d", ft_iterative_factorial(13));
	return (0);
}
