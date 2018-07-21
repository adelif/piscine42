#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int *nbr;

	*nbr = 42;
	printf("adresse de *nbr %p\n", &*nbr);
	printf("adresse de nbr %p\n", &nbr);
	printf("valeur de *nbr %d\n", *nbr);
	return (0);
}
